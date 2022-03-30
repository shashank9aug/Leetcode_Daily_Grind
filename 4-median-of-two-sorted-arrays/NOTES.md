- Solution : 1
```cpp
class Solution {
public:
double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
int n = size(num1),m = size(num2);
vector<int> temp( n+m, 0);
merge(num1.begin(), num1.end(), num2.begin(), num2.end(), temp.begin());
int s = size(temp);
return s%2==0 ? double(temp[s/2]  + temp[s/2 - 1])/2 : double(temp[s/2]);
}
};
```
- Solution - 2
```cpp
​
```