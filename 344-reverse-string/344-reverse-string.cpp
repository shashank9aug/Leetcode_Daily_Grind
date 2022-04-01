class Solution {
private:
    void recReverse(vector<char>&s,int start,int end){
        if(start>=end){
            return;
        }

        swap(s[start],s[end]);
        start++,end--;
        recReverse(s,start,end);
    }    
public:
    void reverseString(vector<char>& s) {
        recReverse(s,0,s.size()-1); 
    }
};
