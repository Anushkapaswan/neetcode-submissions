

class Solution {
public:
    bool hasCycle(ListNode* head) {
        // using iterative method to find that it is cycly linked list or not
        ListNode*l=head;
        ListNode*r=head;
        while(r!=NULL && r->next!=NULL){
            l=l->next;
            r=r->next->next;
            if(l==r) return true;
        }
        return false;
    }
};
