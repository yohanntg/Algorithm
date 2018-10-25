#include<iostream>
#include<vector>

using namespace std;



class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {

        if(rotateArray.size() == 0){
            return 0;
        }else{

            for(int i=1;i<(rotateArray.size()-1);i++){
                if(rotateArray[i-1]>rotateArray[i]){
                    return rotateArray[i];
                    break;
                }
            }

        }


    }
};


int main(){


Solution s;

vector<int> v;
//v.push_back(3);
//v.push_back(4);
//v.push_back(5);
//v.push_back(1);
//v.push_back(2);

int a= s.minNumberInRotateArray(v);
cout << a << endl;


return 0;}
