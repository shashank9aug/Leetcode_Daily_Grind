- [1,2,3] at
t=0 [0,0,0]  b1 = 0, b2=0, b3 = 0  => Trip = 0 <= totalTrip
t=1 [1,1,1]  b1 = 1, b2 = 0, b3 = 0 => Trip = 1 <= totalTrip
t=2 [2,2,2]  b1 = 2, b2 = 1, b3 = 0 => Trip = 3 <= totalTrip
t=3 [3,3,3]  b1 = 3, b2 = 1, b3 = 1 => Trip = 5 >= totalTrip  => so, this will be our ans;
- Brute force :
```cpp
class Solution {
public:
long long minimumTime(vector<int>& time, int totalTrips) {
int n = time.size();
if(n==0){
return time[0]*totalTrips;
}
sort(time.begin(),time.end());
long long t = 0;
while(true){
long long ans = 0;
for(int i=0;i<n;i++){
//trip completed by ith bus
ans+=(t/time[i]);
}
if(ans>=totalTrips){
return t;
}
t++;
}
}
};
```
f(i) = trip completed in i minutes
f(i) = [trip(b1) + trip(b2)........+trip(bn)]
f(i+1)>=f(i)
​
TC : O(N*log(totalTrips))
​
Brute force to optimal => we have to remove while(true) of O(totalTrip) by log(totaltrips)
​
for that binary search comes in picture;
​
1 trip -> t minutes
x trip -> t*x minutes
​
​