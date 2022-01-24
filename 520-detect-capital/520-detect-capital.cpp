class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag = false;
        
        //All chars are capital :
        for(auto c : word){
            if(isupper(c)){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag==true){
            return true;
        }
        
        //first char only capital
        for(int i=0;i<word.size();i++){
            if(i==0 and isupper(word[0])){
                flag = true;
            }
            else if(i>0 and islower(word[i])){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag==true){
            return true;
        }
        
        //all chars are lowercase:
        for(auto c : word){
            if(islower(c)){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag==true){
            return true;
        }
        return false;
    }
};