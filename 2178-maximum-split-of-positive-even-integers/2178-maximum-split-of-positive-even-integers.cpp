class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        //we have to return maximum number of unique positive even integers
        if(finalSum%2!=0){
            return {};
        }
        
        vector<long long>ans;
        long long i = 2;
        //we hve to maximize the total number of +ve even integers to reach finalSum
        while(i<=finalSum){
            ans.push_back(i);
            finalSum -= i;
            i+=2;
        }
        
        //add the finalSum if left other wise finalSum will be 0 by itself.
        // 28 -> 2(26)+4(22)+6(16)+{8(8) => break as i==finalSum}
        //so, add 8 into the ans.
        ans[ans.size()-1] = ans[ans.size()-1] + finalSum;
        return ans;
    }
};