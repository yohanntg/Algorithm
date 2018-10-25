class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 ){
            return false;
        }
        int a = x;

        int re = 0;
        while(true){
            re = re*10 + x%10;
            x = x/10;
            
            if(x== 0 && re == a){
                return true;
            }else if(x == 0 && re!= a ){
                return false;
            }
            
            
        }

    }
};