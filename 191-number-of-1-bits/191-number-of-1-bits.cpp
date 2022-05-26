class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n > 0)
        {
            // if last bit of n is set or not just check it and eliminate it
            if(n%2==1)
                ans++;
            n /= 2;
        }
        return ans;
    }
};