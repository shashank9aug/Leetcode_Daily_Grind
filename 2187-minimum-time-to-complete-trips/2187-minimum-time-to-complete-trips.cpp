class Solution {
private:
    long long getTrips(vector<int>&time,long long timereq){
        long long t = 0;
        for(auto bustime:time) {
            t+=timereq/bustime;
        }
        return t;
    }
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long minTime = 0;
        long long maxTime = 1LL*totalTrips*time[0];
        
        while(minTime<maxTime){
            long long midTime = minTime + (maxTime - minTime)/2;
            long long tripsCompleted = getTrips(time,midTime);
            if(tripsCompleted >= totalTrips){
                maxTime = midTime;
            }
            else{
                minTime = midTime + 1;
            }
        }
        return minTime;
    }
};