class Solution {
public:
    int jumpFloor(int number) {
        
        if(number ==1){
            return 1;
            
        }else if(number ==2){
            return 2;
        }else if(number ==0){
            return 0;
        
        }else{
             return (jumpFloor(number-2)+jumpFloor(number-1));

        }
        
    }
};