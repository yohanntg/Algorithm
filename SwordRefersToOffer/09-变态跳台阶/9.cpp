class Solution {
public:
    int jumpFloorII(int number) {
        
        if(number <=0){
            return -1;
            
        }else if(number == 1){
            return 1;
        }else if(number == 2){
            return 2;
        }else{
            int result = 0;
            for(int i=1;i< number ;i++){
                result +=jumpFloorII(i);
            }
            return (result+1);
        }

    }
};