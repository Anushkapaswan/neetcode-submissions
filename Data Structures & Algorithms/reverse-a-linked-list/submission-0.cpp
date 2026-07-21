
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
          ListNode* prev=NULL;
          ListNode* temp=head;
          while(temp!=NULL){
            ListNode* b=temp->next;
            temp->next=prev;
            prev=temp;
            temp=b;
          }
          return prev;
    }
};
