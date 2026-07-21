// using slow and fast pointer

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(0);
        ListNode* slow=dummy;
        ListNode* fast=dummy;
        dummy->next=head;
        if(head==NULL) return NULL;
        for(int i=1;i<=n+1;i++){
            fast=fast->next;
        }
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return dummy->next;
    }
};
