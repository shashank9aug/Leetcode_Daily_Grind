class Solution {
private:    
    bool winnerSquareGameHelper(int n, vector<char>&arr) {
        if(n==0){ // Alice can not pick any coins, so he genuinely lost
            arr[0]='F';
            return false;
        }
        if(n==1){
            arr[1]='T';
            return true;
        }
        
        if(arr[n]!='N'){
            if(arr[n]=='T'){
                return true;
            }
            return false;
        }
        
        // check if n is a perfect number or not
        long double x= sqrt(n);

	    if((int)x * (int)x == n){ // then it is a perfect square number
            arr[n]='T';
		    return true; // Alice picks it up
	    }
        
        for(int i=1; i*i<=n; i++){
            bool prevAns= winnerSquareGameHelper(n-(i*i), arr);
            if(prevAns==false){
                arr[n]='T';
                return true;
            }
        }
        arr[n]='F';
        return false;
    }
  public:  
    bool winnerSquareGame(int n){
        
        vector<char>arr(n+1,'N');
        
        return winnerSquareGameHelper(n, arr);
    }
};