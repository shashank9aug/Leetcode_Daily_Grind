class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        int i = 0;
        if(n==0){
            return true;
        }
        if(m==1 && flowerbed[0]==0 && n==1) return true;
        while(i<m){
            if(flowerbed[i]==0){
                //if its start idx
                if(i==0){
                    if(flowerbed[i+1]!=1){
                        flowerbed[i]=1;
                        n--;                
                    }
                }
            
                //if its last index
                else if(i==m-1){
                    if(flowerbed[i-1]!=1){
                        flowerbed[i]=1;
                        n--;
                    }
                }    
                
                //if its middle index
                else{
                    if(flowerbed[i+1]!=1 and flowerbed[i-1]!=1){
                        flowerbed[i]=1;
                        n--;
                    }
                }
                
            }
            // i+=2;
            i+=1;
        }
        // if(n==0){
        //     return true;
        // }
        // return false;
        return n<=0;
    }
};