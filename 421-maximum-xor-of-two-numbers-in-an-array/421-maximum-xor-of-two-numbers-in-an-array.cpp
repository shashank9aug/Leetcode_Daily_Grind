class Trie {
private:
    Trie *next[2] = {};
public:
    Trie() {}
    
    void insert(int num) {
        Trie *curr = this;
        for(int i = 30; i >= 0; i--) {
            int mask = 1 << i;
            int bit = (num & mask) > 0 ? 1 : 0;
            
            if(!curr->next[bit])
                curr->next[bit] = new Trie();
            curr = curr->next[bit];
        }
    }
    
    int search(int num) {
        Trie *curr = this;
        int ans = 0;
        for(int i = 30; i >= 0; i--) {
            int mask = 1 << i;
            int bitNeeded = (num & mask) > 0 ? 1 : 0;
            
            if(bitNeeded == 0) {
                if(curr->next[bitNeeded])
                    curr = curr->next[bitNeeded];
                else {
                    curr = curr->next[!bitNeeded];
                    ans |= mask; 
                }
            }
            
            if(bitNeeded == 1) {
                if(curr->next[bitNeeded]) {
                    curr = curr->next[bitNeeded];
                    ans |= mask;
                }
                else {
                    curr = curr->next[!bitNeeded];
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie *trie = new Trie();
        
        for(int num : nums) {
            trie->insert(num);
        }
        
        int maxRes = INT_MIN;
        for(int num : nums) {
            int findNum = INT_MAX ^ num;
            int res = trie->search(findNum);
            maxRes = max(maxRes, res ^ num);
        }
        return maxRes;
    }
};