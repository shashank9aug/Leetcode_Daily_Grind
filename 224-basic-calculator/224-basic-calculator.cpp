class Solution {
    //opening and closing brackets position :
    int ret_pos;
public:
    int calculate(string s,int i=0) {
        int first=0;
        int sum=0;
        int sign=1;
        while(i<s.length() && s[i]!=')')
        {
            //skip all the empty spaces
            while(s[i]==' '){
                i++;
            }    
            // - sign will use as subtract
            if(s[i]=='-' ){
                sign = -1;
                i++;
            }
            // + sign will use as addition
            if(s[i]=='+'){
                sign =1;
                i++;
            }
            //skip empty spaces 
            while(s[i]==' '){
                i++;
            }    
            //calculate all expression before closing braces.
            if(s[i]=='(')
            {
                first = calculate(s,i+1);
                i = ret_pos;
            }
            //calculate sum
            else if(isdigit(s[i]))
            {
                // int j=i;
                first =0;
                //convert all digits into number                 
                while(isdigit(s[i]))
                {
                    first*=10;
                    first +=s[i]-'0';
                    i++;
                }
                // i=j;
            }
            sum+=sign*first;
            first = 0 ;
            sign=1;
            if(s[i] == ')')
            {
                ret_pos = i+1;
                return  sum;
            }
        }
        return sum;
    }
};