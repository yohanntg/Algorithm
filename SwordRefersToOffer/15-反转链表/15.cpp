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
    ListNode* ReverseList(ListNode* pHead) {
        
        if(pHead == NULL){
            return NULL;
        }
        
        ListNode* next;
        ListNode* pre = NULL;
        
        while(pHead){
            next = pHead->next;
            pHead->next = pre;
            pre = pHead;
            pHead = next;
        }
        
        return pre;

    }
};