// using slow and fast pointer to find the middle and reverse half of second list and then merge it
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL) return ;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* temp2=slow->next;
        slow->next=NULL;
        // reverse the 2nd half of the list

        ListNode* prev=NULL;
        ListNode* curr=temp2;
        while(curr!=NULL){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }

        ListNode* temp1=head;
        temp2=prev;
        while(temp1!=NULL && temp2!=NULL){
            ListNode* temp1_next=temp1->next;
            ListNode* temp2_next=temp2->next;

            temp1->next=temp2;
            temp2->next=temp1_next;

            temp2=temp2_next;
            temp1=temp1_next;
        }

    }
};
