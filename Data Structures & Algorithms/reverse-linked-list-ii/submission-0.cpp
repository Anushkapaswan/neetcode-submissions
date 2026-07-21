
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        for(int i=1;i<l;i++){
            prev=prev->next;
        }
        ListNode* curr=prev->next;
        ListNode* nextNode=NULL;
        ListNode* prevNode=NULL;
        for(int i=1;i<=(r-l+1);i++){
            nextNode=curr->next;
            curr->next=prevNode;
            prevNode=curr;
            curr=nextNode;
        }
        prev->next->next=curr;
        prev->next=prevNode;
        return dummy->next;

    }
};