class Solution {
public:
vector<string> cellsInRange(string s){
    //result answer
    vector<string> res;
    
    //extract columns and rows
    int col1= s[0]-'A' , col2= s[3]-'A';
    int row1= s[1]-'0' , row2= s[4]-'0';
    
    //keep incrementing the character from c1->c2
    for(;col1<=col2;col1++){
       char letter= col1+'A'; 
       //for every charcter traverse from r1->r2 
       for(int i=row1;i<=row2;i++){
           string p="";
           char r= i+'0';
           p+=letter; 
           p+=r;
           //put string in res vector
           res.push_back(p);
        } 
    }
    return res;
}
};