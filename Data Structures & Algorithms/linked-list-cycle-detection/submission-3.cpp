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
    bool hasCycle(ListNode* head) {
        // // using unordered set
        // ListNode* temp=head;
        // bool flag=false;
        // unordered_set<ListNode*>st;
        // while(temp!=NULL && flag!=true){
        //     if(st.count(temp)){
        //         flag=true;
        //         break;
        //     }
        //     st.insert(temp);
        //     temp=temp->next;
        // }
        // return flag;

        // using slow and fast pointer;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast) return true;
        }
        return false;
    }
};
