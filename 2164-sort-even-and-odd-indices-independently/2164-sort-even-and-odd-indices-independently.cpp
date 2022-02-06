class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = size(nums);
        vector<int>ans;
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<n;i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());
        int i = 0,j=0,k=0;
        while(i<n){
            if(i%2==0){
                nums[i]=even[j];
                j+=1;
            }
            else{
                nums[i]=odd[k];
                k+=1;
            }
            i+=1;
        }
        return nums;
    }
};