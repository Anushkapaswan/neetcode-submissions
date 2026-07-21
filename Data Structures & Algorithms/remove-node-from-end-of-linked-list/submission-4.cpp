// brute force approach first find the length of the linked list then find the len-n and then next of next thatn elemnt


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(len==1){
            return NULL;
        }
        if(n==len){
          head=head->next;  
          return head;
        } 
        temp=head;
        int j=1;
        int k=len-n;
        for(int i=1;i<k;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
