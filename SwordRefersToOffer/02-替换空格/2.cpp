#include<iostream>
#include<string.h>

using namespace std;


/*
��������Ѱ���Ϻ��ҵ���һ���Ƚ�׼ȷ�Ľ��   "resource"���ַ���������   ���� char *str = "resource";    ��"resource"��ֵ----Ҳ�����ַ�����������ֵ��
Ҳ����"resource"�ĵ�ַ��׼ȷ��˵����ʼ��ַ----�����ַ�ָ�� str��Linux�£�
"resource"�ַ��������Ǵ����ֻ���������ģ�һ����˵��32λ�����ϣ���Linux�У��ѣ�ȫ�����ݣ�
�����ȶ��Ǵ���ڴ�0x8048000��ʼ���ڴ��ַ���������������Դ�ӡһ��"resource"�ĵ�ַ��������֤��
char *str = "resource"�����ǰ�"resource"���׵�ַ����str������str ��ŵ���һ��ֻ���������ĵ�ַ����ֻ���������ݽ���д�����ǽ�ֹ����������Ӧ�Ĳ���ϵͳ�����ж��Լ�����

������ char str[] = "resource";    str[]��һ���ַ����飬������������ջ�з���һ���������ռ����ڴ�š�resource���е��ַ��Լ���β����
Ȼ����ַ������������ݣ�Ҳ����"resource"�еĸ����ַ��ͽ�β�����Ƶ����ջ�е������ռ��С�str����������������ʾ�������ջ�ռ����ʼ��ַ��
����str�д�ŵ���ջ��ַ�������ַ�������ǿ�д�ġ�һ����˵��32λ�����ϣ���Linux�У�ջ��ַ�ռ��3G��0xbfffffff����ʼ����������

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
