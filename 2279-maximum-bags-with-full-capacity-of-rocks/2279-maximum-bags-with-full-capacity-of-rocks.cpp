class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& rock, int add) {
        int ans = 0;
        for(int i=0;i<size(cap);i++){ 
			cap[i] = cap[i] - rock[i];
		}	
        sort(begin(cap),end(cap));
        
        for(auto it : cap){
            if(it == 0){ 
                ans++;
                continue;
            }
            add -= it;
            if(add >=0){
				ans+=1;
			}
            else{
				break;
			}	
        }
        return ans;
    }
};