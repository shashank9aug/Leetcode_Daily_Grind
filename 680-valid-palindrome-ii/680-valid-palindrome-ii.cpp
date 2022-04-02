class Solution {
public:
    bool validPalindrome(string s) {
        int n = size(s);
        int st = 0,ed = n-1;
        bool flag = false;
        int count = 0;
        while(st<=ed){
            if(s[st]!=s[ed]){
                count+=1;
                st++;
            }
            else{
                st+=1;
                ed-=1;
            }    
        }
        int count1 = 0;
        st = 0;
        ed = n-1;
        while(st<=ed){
            if(s[st]!=s[ed]){
                count1+=1;
                ed-=1; 
            }
            else{
                st+=1;
                ed-=1;
            }    
        }
        
        if(count==0 or count1==0){
            flag = true;
        }
        else if(count==1 or count1==1){
            flag = true;
        }
        return flag;
    }
};