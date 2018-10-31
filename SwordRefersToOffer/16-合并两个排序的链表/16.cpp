#include<iostream>

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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(pHead1 == NULL && pHead2 == NULL){
            return NULL;
        }
        if(pHead1 == NULL && pHead2 != NULL){
            return pHead2;
        }
        if(pHead2 == NULL && pHead1 != NULL){
            return pHead1;
        }
        
        ListNode* result = NULL;
        ListNode* head = NULL;
        if(pHead1->val <= pHead2->val){
            head = new ListNode(pHead1->val);
            pHead1 = pHead1->next;
            result = head;
          }else{
            head = new ListNode(pHead2->val);
            pHead2 = pHead2->next;
            result = head;
        }
        
        while(pHead1 || pHead2){
            if(pHead1 && pHead2){
                if(pHead1->val <= pHead2->val){
                    result->next = pHead1;
                    pHead1 = pHead1->next;
                    result = result->next;
                }else{
                    result->next = pHead2;
                    pHead2 = pHead2->next;
                    result = result->next;
                }
                
                
            }else if(pHead1 && !pHead2){
                result->next = pHead1;
                pHead1 = pHead1->next;
                result = result->next;

                
            }else if(pHead2 && !pHead1){
                 result->next = pHead2;
                 pHead2 = pHead2->next;
                 result = result->next;

            }

        }

        return head;
    }
};


int main(){

    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(3);
    ListNode* d = new ListNode(4);
    ListNode* e = new ListNode(5);
    ListNode* f = new ListNode(6);
    ListNode* g = new ListNode(7);

    a->next = c;
    c->next = e;
    e->next = g;
    b->next = d;
    d->next = f;

    Solution s;
    ListNode* result = s.Merge(a,b);

    while(result){
        cout << result->val << endl; 
        result = result->next;

    }




    cin.get();
    return 0;
}