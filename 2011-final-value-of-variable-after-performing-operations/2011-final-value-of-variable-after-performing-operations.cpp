class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum = 0;
        for(auto operation:operations){
            if(operation=="++X" or operation=="X++") sum+=1;
            else if(operation=="--X" or operation=="X--") sum-=1;
        }
        return sum;
    }
};