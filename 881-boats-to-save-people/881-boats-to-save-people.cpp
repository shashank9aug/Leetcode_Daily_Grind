class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        //edge can be : 
        int sum = accumulate(people.begin(),people.end(),sum);
        if(sum<=limit and size(people)==2){
            return 1;
        }
        sort(people.begin(),people.end());
        int ans = 0;
        int start = 0, end = size(people)-1;
        
        while(start<=end){
            int sum = people[start]+people[end];
            if(sum <= limit){
                start++;
                end--;
            }
            else if(sum > limit){
                end--;
            }
            ans+=1;
        }
        return ans;
    }
};