class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = size(arr);
        
        //edge case :
        if(n<3){
            return false;
        }
        
        // int idx = *max_element(arr.begin(),arr.end());
        int i = 1;
        while(i<n){
            if(arr[i]>arr[i-1]){
                i++;
            }
            else{
                break;
            }
        }
        if(i==1 or i==n){
            return false;
        }
        
        while(i<n){
            if(arr[i-1]>arr[i]){
                i++;
            }
            else{
                break;
            }
        }
        
        if(i==n){
            return true;
        }
        return false;
    }
};