class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>mpp;
        for(auto c:s){
            mpp[c]++;
        }
        
        for(auto c:t){
            if(mpp[c]>0 and mpp.find(c)!=mpp.end()){
                mpp[c]--;
                
            }
            else{
                return c;
            }
        }
        return ' ';
    }
};