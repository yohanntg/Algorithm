#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int x = array.size();
        int y = array[0].size();
        bool flag = false;

        int i=x-1;
        int j=0;

        while( !(i==0 && j==y-1)){

            if(array[i][j] > target){
                i--;

            }
            if(array[i][j] < target){
                j++;

            }

            if(array[i][j] = target){
                flag = true;
                break;
            }

        }

       return flag;

}

};

int main(){

vector<vector<int> > array(2) ;
//{ {1,2,3,4},{5,6,7,8}};
for (int i = 0; i < array.size(); i++)
    array[i].resize(4);

for(int i = 0; i < array.size(); i++)
{
    for (int j = 0; j < array[0].size();j++)
    {    array[i][j] = i+1;
        if(i==1){
            array[i][j] = i+5;
        }

    }
}

 int a=2;
 Solution s;
if(s.Find(3,array)){
    a= 4;
};


cout << a << endl;


return 0;
}
