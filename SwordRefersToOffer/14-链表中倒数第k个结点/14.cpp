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
   unsigned int cnt=0;

    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {

        if(pListHead==NULL)
            return NULL;
        ListNode* node=FindKthToTail(pListHead->next,k);
        if(node!=NULL)
            return node;
        cnt++;
        if(cnt==k)
            return pListHead;
        else
            return NULL;
}
};

int main(){
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
   
    ListNode* c = new ListNode(3);
    ListNode* d = new ListNode(4);
    ListNode* e = new ListNode(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;



    Solution s;

    ListNode* ab = s.FindKthToTail(a,1);

    cout << ab<< endl;
    cin.get();
    return 0;
}