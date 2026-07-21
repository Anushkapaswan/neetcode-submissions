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
        ListNode* temp=head;
        bool flag=false;
        unordered_set<ListNode*>st;
        while(temp!=NULL && flag!=true){
            if(st.count(temp)){
                flag=true;
                break;
            }
            st.insert(temp);
            temp=temp->next;
        }
        return flag;
    }
};
