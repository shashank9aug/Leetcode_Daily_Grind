class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        //edge case :
        if(n>m){
            return false;
        }
        map<char,int>mpp;
        for(auto c:s1){
            mpp[c]++;
        }
        int count = mpp.size();
        int i = 0 , j = 0;
        
        while(j<m){
            char c = s2[j];
            if(mpp.find(c)!=mpp.end()){
                mpp[c]--;
                if(mpp[c]==0){
                    count--;
                }
            }
            // j++;
            while(count==0){
                if(j-i+1 == s1.size()){
                    return true;
                }
                char temp = s2[i];
                if(mpp.find(temp)!=mpp.end()){
                    mpp[temp]++;
                    if(mpp[temp]>0){
                        count++;
                    }
                }
                i++;
            }
            // i++;
            j++;
        }
        return false;
    }
};