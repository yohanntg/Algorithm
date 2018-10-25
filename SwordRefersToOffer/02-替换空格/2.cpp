#include<iostream>
#include<string.h>

using namespace std;


/*
从网上搜寻资料后，找到了一个比较准确的解答：   "resource"是字符串常量。   对于 char *str = "resource";    把"resource"的值----也就是字符串常量字面值，
也就是"resource"的地址，准确来说是起始地址----赋给字符指针 str，Linux下，
"resource"字符串常量是存放于只读数据区的，一般来说，32位机器上，在Linux中，堆，全局数据，
常量等都是存放于从0x8048000开始的内存地址，向上增长。可以打印一下"resource"的地址来进行验证。
char *str = "resource"，就是把"resource"的首地址赋给str，所以str 存放的是一个只读数据区的地址，对只读区的数据进行写操作是禁止，具体由相应的操作系统进行判断以及处理。

而对于 char str[] = "resource";    str[]是一个字符数组，编译器首先在栈中分配一定的连续空间用于存放“resource”中的字符以及结尾符，
然后把字符串常量的内容，也就是"resource"中的各个字符和结尾符复制到这个栈中的连续空间中。str是数组名，用来表示这个连续栈空间的起始地址，
所以str中存放的是栈地址，这个地址的数据是可写的。一般来说，32位机器上，在Linux中，栈地址空间从3G（0xbfffffff）开始向下增长。

*/

class Solution {
public:

void replaceSpace(char *str,int length) {
    int l = length;
for(int i = 0; i < length; i ++){

        if(str[i] ==' '){
            l = l + 2;
            str[i] = '%';
            for(int j=l-1;j>(i+2);j--){
                str[j] = str[j-2];
            }
            str[i+1] = '2';
            str[i+2] = '0';
        }

        }
}
};


int main(){

    char* str = new char[100];
    strcpy(str, "we ddd");

    Solution s;
    s.replaceSpace(str,6);

    cout << str << endl;
return 0;


}
