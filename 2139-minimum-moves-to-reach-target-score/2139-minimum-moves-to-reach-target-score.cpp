class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int move = 0;
        //reverse process
        while(maxDoubles>0 and target>1){
            if(target%2!=0){
                move+=1;
                target-=1;
            }
            if(target%2==0){
                move+=1;
                target = target/2;
                maxDoubles--;
            }
        }
        if(target>1){
            move += target - 1;
        }
        return move;
    }
};