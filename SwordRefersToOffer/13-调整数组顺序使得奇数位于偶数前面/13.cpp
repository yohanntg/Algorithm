#include<iostream>
#include<vector>


using namespace std;

class Solution {
public:
    void reOrderArray(vector<int> &array) {

        if(array.size() == 0){
            return ;
        }
        vector<int> odd;
        vector<int> not_odd;
        for(int i=0;i<array.size();i++){
            if((array[i] % 2) != 0){
                odd.push_back(array[i]);
            }else{
                not_odd.push_back(array[i]);
            }
        }
        for(int i=0;i<odd.size();i++){
            array[i] = odd[i];
        }
        for(int i=0;i<not_odd.size();i++){
            array[odd.size()+i] = not_odd[i];
        }


        
    }
};


int main(){

    vector<int> array ;
    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);
    array.push_back(5);

    Solution s;
    s.reOrderArray(array);

    cout << array[1] << endl;
    cin.get();
    return 0;
}