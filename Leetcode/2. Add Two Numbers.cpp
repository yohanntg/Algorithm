#include <iostream>

using namespace std;


class Solution {

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {


        ListNode* c1 = l1;
        ListNode* c2 = l2;
        
        ListNode* a = new ListNode(0);
        // current_a
        ListNode* result = a;
        
        int sum = 0;
        while(c1 != NULL || c2 != NULL){
            sum /=10;
            if(c1 !=NULL){
               sum += c1->val;
               c1 = c1->next;

            }

            if(c2 !=NULL){
                sum += c2->val;
                c2 = c2->next;
            }

            result->next = new ListNode(sum % 10);
            result = result->next;
        }

        // 考虑单个数字进位的情况 ，如[5] [5] -> [0,1]
        if((sum /10) == 1){
            result->next = new ListNode(1);
        }

        return a->next;



        
        
    }
};

