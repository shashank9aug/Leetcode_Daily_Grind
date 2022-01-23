class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        //for any seq number : digit difference = 1;
        vector<int>ans;
        for(int i=1;i<10;i++){
            int no = i;
            for(int j=i+1;j<10;j++){
                no = no*10 + j;
                if(no>=low and no<=high){
                    ans.push_back(no);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};