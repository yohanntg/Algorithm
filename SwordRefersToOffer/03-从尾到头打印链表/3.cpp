#include<iostream>
#include<vector>

using namespace std;

    struct ListNode {
      int val;
      struct ListNode *next;
      ListNode(int x) :
             val(x), next(NULL) {
       }
 };


class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> result ;

        ListNode *pre = NULL;
        ListNode *next ;

        while(head){
            next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }

        while(pre){

            result.push_back(pre->val);
            pre = pre->next;
        }

        return result;


    }
};

int main(){

Solution s;
ListNode *head = new ListNode(33);
ListNode *next = new ListNode(22);
head->next = next;


vector<int> list = s.printListFromTailToHead(head);

cout << list[0] << endl;
cout << list[1] << endl;


return 0;
}
