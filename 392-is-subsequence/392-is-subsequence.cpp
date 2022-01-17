class Solution {
private:
    bool findSeq(int n,int m,string s,string t){
        //Base case :
        if(n==0){
            return true; 
        }
        if(m==0){
            return false;
        }
        if(s[n-1]==t[m-1]){
            return findSeq(n-1,m-1,s,t);
        }
        return findSeq(n,m-1,s,t);
    }    
public:
    bool isSubsequence(string s, string t) {
        return findSeq(s.size(),t.size(),s,t);
    }
};
