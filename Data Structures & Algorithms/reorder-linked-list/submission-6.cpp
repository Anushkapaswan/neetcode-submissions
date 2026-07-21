
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
             slow=slow->next;
             fast=fast->next->next;
        }
        ListNode* temp2=slow->next;
        slow->next=NULL;

        ListNode* dummy=NULL;
        while(temp2!=NULL){
            ListNode* temp=temp2->next;
            temp2->next=dummy;
            dummy=temp2;
            temp2=temp;
        }
        ListNode* temp1=head;
        temp2=dummy;
        while(temp1!=NULL && temp2!=NULL){
            ListNode*t1=temp1->next;
            ListNode*t2=temp2->next;

            temp1->next=temp2;
            temp2->next=t1;

            temp1=t1;
            temp2=t2;

        }
    return;
    }
};
