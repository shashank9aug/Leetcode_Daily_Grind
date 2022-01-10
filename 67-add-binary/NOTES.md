```
Adding 2 binary bits :
0 + 0 = 0
1 + 0 = 1
0 + 1 = 1
1 + 1 = 10
Important point to note: (Reference - here)
​
a = a + "xy" is O(N) while a += "xy" is O(1) (amortized).
​
a = a + "xy" creates a copy of a, appends "xy" and then assigns it back to a.
​
a += "xy" just appends "xy" to a.
​
Therefore the time complexity of this approach is O(n).
```