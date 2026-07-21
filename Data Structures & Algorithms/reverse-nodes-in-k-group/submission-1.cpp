/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {

public:
ListNode* kthGroup(ListNode* node,int k)
{
    while(node!=NULL && k>0){
        node=node->next;
        k--;
    }
    return node;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL) return NULL;
        ListNode* dummy=new ListNode(0,head);
        ListNode* prevGroup=dummy;
        while(true){
            ListNode* kth=kthGroup(prevGroup,k);
            if(!kth) break;
            ListNode* nextGroup=kth->next;
            ListNode* curr=prevGroup->next;
            ListNode* prev=kth->next;
            while(curr!=nextGroup){
                ListNode* temp=curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;
            }
            ListNode* tmp=prevGroup->next;
            prevGroup->next = kth;
            prevGroup = tmp;
        }
        return dummy->next;
    }
};
