class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        int n = size(num1),m = size(num2);
        vector<int> temp( n+m, 0);
        int i = 0,j = 0,idx = 0;
        while(i<n and j<m){
            if(num1[i]<num2[j]){
                temp[idx] = num1[i];
                idx++;
                i++;
            }
            else if(num1[i]>num2[j]){
                temp[idx++] = num2[j++];
            }
            else{
                temp[idx++] = num1[i++];
                temp[idx++] = num2[j++];
            }
        }
        while(i<n){
            temp[idx++] = num1[i++];
        }
        while(j<m){
            temp[idx++] = num2[j++];
        }
        // merge(num1.begin(), num1.end(), num2.begin(), num2.end(), temp.begin());
        for(auto it:temp){
            cout<<it<<",";
        }
        int s = size(temp);
        if (s % 2 == 0)
		    return double(temp[s / 2] + temp[s / 2 - 1]) / 2;
    	return double(temp[s / 2]);
    }
};