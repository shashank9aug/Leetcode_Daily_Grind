class Solution {
private:
    bool help(string s,string word)
    {
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==word[k])
                k++;
            if(k==word.size())
                return true;
        }
        return false;
    }
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string,int>ump;
        int ans=0;
        for(auto word:words)
        {
            ump[word]++;
        }
        for(auto word:ump)
        {
            if(help(s,word.first)){
                ans+=word.second;
            }   
        }
        return ans;
    }
};