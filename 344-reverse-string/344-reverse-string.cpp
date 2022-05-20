class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = size(s) - 1;
        while(i<j){
            swap(s[i++],s[j--]);
        }
    }
};