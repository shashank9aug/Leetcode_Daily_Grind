class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap = 0;
        int n = word.size();
        if(n==1){
            return true;
        }
        for(auto c:word){
            if(isupper(c)){
                cap+=1;
            }
        }
        if(cap==1 and isupper(word[0])){
            return true;
        }
        return cap==0 or cap==n;
    }
};