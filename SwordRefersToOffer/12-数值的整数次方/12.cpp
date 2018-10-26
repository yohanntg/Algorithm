#include<iostream>
#include <stdlib.h>

using namespace std;


/* class Solution {
public:
    double Power(double base, int exponent) {
        
        if (base == 0){
            return 0;
        }
        if(exponent == 0){
            return 1;
        }
        double result = 1;
        int e = abs(exponent);
      
        for(int i=0;i<e;i++){
            result = result*base;
        }

        if(exponent <0){
            return 1/result;
        }else{
            return result;
        }
    }
};
 */

class Solution {
public:
    double Power(double base, int exponent) {
        //快速幂算法
        if (base == 0){
            return 0;
        }
        if(exponent == 0){
            return 1;
        }
        int e = abs(exponent);
        double result = 1;

        while( e >0){

            if( e & 1 ){   // e % 2 == 1
                result *= base; 
            }
            base *= base;
            e >>=1;    // e/2 
        }

         if(exponent <0){
            return 1/result;
        }else{
            return result;
        }

    }


 };




int main(){

    Solution s;
    cout << s.Power(1.2,5)<<endl;
    cin.get();
    return 0;
}