/*
原码：
原码就是符号位加上真值的绝对值，即用第一个二进制位表示符号（正数该位为0，负数该位为1），其余位表示值。

反码：
正数的反码与其原码相同；
负数的反码是对其原码逐位取反，但符号位除外。

补码：
正数的补码就是其本身；
负数的补码是在其反码的基础上+1

*/

#include<iostream>

using namespace std;


class Solution {
public:
     int  NumberOf1(int n) {
         int num = 0;
         
         while( n != 0){
             num++;
             n = (n-1) & n;

         }
         
         return num;
     }
};


int main(){

    Solution s;

    cout << s.NumberOf1(-1)<< endl;

    cin.get();
    return 0;
}