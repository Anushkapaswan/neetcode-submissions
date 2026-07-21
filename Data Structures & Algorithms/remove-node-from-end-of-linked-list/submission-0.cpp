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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // brute force solution 
        vector<ListNode*>li;
        ListNode* tmp=head;
        while(tmp){
            li.push_back(tmp);
            tmp=tmp->next;
        }
        int o=li.size();
        if(o==n) return head->next;
        ListNode* prev=head;
        for(int i=0 ;i<(o-n)-1;i++){
            prev=prev->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};
