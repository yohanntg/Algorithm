#include<iostream>

using namespace std;


class Solution {
public:
    int Fibonacci(int n) {


        if(n==0){
            return 0;
        }else if(n==1){
            return 1;
        }else{
            int a=0;
            int b=1;
            int result;
            for(int i=2;i<=n;i++){
                result = a+b;
                a=b;
                b=result;

            }

            return result;
        }



    }
};

int main(){

    Solution s;

    cout << s.Fibonacci(5) << endl;


return 0;
}
