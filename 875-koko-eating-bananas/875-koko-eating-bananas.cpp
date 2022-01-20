class Solution {
private:
    bool ispossible(vector<int>&piles,int h,int currk){
        long count = 0;
        for(auto pile:piles){
            count += pile / currk;
            if(pile % currk !=0){
                count++;
            }
        }
        return count<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = piles[0];
        for(int i=0;i<piles.size();i++){
            high = max(piles[i],high);
        }
        //binary search on range :
        while(low<high){
            int mid = low + (high - low)/2;
            if(!ispossible(piles,h,mid)){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
};