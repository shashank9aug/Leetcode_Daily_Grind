class Solution {
private:
    
    string decode(string s,int& i){
        string result = "";
        //Base case : 
        // if(i<s.length() and s[i]!=']'){
            // return result;
        // }
        
        //Hypotheses :
        while(i<s.length() and s[i]!=']'){
            if(isdigit(s[i])){
                int k = 0;
                //extract the value of k from string.
                while(i<s.length() and isdigit(s[i])){
                    k = k*10 + s[i++] - '0';
                }
                //skip the opening brackets
                i++;
                string r = decode(s,i);
                // append the next part of string in result for k times
                while(k--){
                    result += r;
                }
                //skip closing brackets
                i++;
            }
            //if s[i] not digit => append it to result
            else{
                result += s[i++];
            }
        }     
        return result;
    }
public:
    string decodeString(string s) {
        int i = 0;
        return decode(s,i);
    }
};