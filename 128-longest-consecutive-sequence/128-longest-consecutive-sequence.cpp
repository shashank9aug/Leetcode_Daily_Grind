class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        unordered_set<int>se; //store each element of array 

        for(auto it:arr){   
            se.insert(it);  //O(1) time
        }

        //iterate over all the element 
        //target those from which streak can be start.
        int maxStreak=0;
        for(auto it:arr){
            if(!se.count(it-1)){
                //arr[i] as starting point of streak
                //traverse the entire range that contained in that streak
                int nextNo=it+1;
                int streakLen=1;
                while(se.count(nextNo)){
                    nextNo+=1;
                    streakLen+=1;
                }
                maxStreak=max(streakLen,maxStreak);
            }
        }
        return maxStreak;
    }
};