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

class Solution {
public:

ListNode* rev(ListNode*root){
    if(root==NULL ){
        return NULL;
    }
    ListNode* prev=NULL;
    ListNode* curr=root;
    while(curr){
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
    void reorderList(ListNode* head) {
        // // using array:
        // vector<ListNode*>node;
        // ListNode*temp=head;
        // while(temp!=NULL){
        //     node.push_back(temp);
        //     temp=temp->next;
        // }
        // int i=0;
        // int j=node.size()-1;
        // while(i<j){
        //     node[i]->next=node[j];
        //     i++;
        //     if(i>=j) break;
        //     node[j]->next=node[i];
        //     j--;
        // }
        // node[i]->next=NULL;

        //using reverse and merge list 
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* c=rev(slow->next);
        ListNode* tempA=head;
        ListNode* tempB=c;
        ListNode* tempC=new ListNode(100);     
        slow->next=NULL;
        while(tempA && tempB){
            tempC->next=tempA;
            tempA=tempA->next;
            tempC=tempC->next;

            tempC->next=tempB;
            tempB=tempB->next;
            tempC=tempC->next;
        }
        tempC->next=tempA;
        return;
    }
};
