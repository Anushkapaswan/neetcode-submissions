// i want it solve using stack to store all the element 
class Solution {
public:
    void reorderList(ListNode* head) {
        stack<ListNode*>st;
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp);
            n++;
            temp=temp->next;
        }
        int half_list=n/2;
        ListNode* curr=head;
        while(half_list){
            ListNode* temp=curr->next;
            ListNode* last=st.top();
            st.pop();
            curr->next=last;
            last->next=temp;
            curr=temp;
            half_list--;
        }
        curr->next=NULL;
    }
};
