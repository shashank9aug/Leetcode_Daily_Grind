class Solution {
public:
    int brokenCalc(int sv, int t) {
        int op = 0;
        if(sv==t){
            return op;
        }
        if(sv>t){
            return abs(t-sv);
        }
        
        while(t>sv)
        {
            if(t%2){
                t+=1;
            }
            else{
                t = t/2;
            }
            op+=1;
        }
        
        return op + (sv-t);
    }
};