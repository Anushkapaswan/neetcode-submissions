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
//  using recurssion

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL) return NULL;

        // count before reverse the node
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL && count<k){
            count++;
            temp=temp->next;
        }
        if(count<k) return head;
        ListNode* next=NULL;
        ListNode* prev=NULL;
        ListNode* curr=head;
        count=0;
        while(curr!=NULL && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(next!=NULL){
            head->next=reverseKGroup(next,k);
        }
        return prev;
    }
};
