
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* dummy=new ListNode(-1);
        ListNode* newHead=dummy;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<temp2->val){
                ListNode* temp1_next=temp1->next;
                dummy->next=temp1;
                dummy=temp1;
                temp1=temp1_next;
            }else{
                ListNode* temp2_next=temp2->next;
                dummy->next=temp2;
                dummy=temp2;
                temp2=temp2_next;
            }
        }
        while(temp1!=NULL){
            dummy->next=temp1;
            dummy=temp1;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            dummy->next=temp2;
            dummy=temp2;
            temp2=temp2->next;
        }
        return newHead->next;
    }
};
