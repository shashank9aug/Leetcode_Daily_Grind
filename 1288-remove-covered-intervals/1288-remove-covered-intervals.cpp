class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        //why sorting : it makes intervals in order of range.
        sort(intervals.begin(),intervals.end());
        
        int maxLeft = -1, maxRight = -1;
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][0]>maxLeft and intervals[i][1]>maxRight){
                count+=1;
                maxLeft = intervals[i][0];
            }
            maxRight = max(maxRight,intervals[i][1]);
        }
        return count;
    }
};