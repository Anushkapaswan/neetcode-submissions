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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //  use list to store all the node's value and make a list in sorted way 
        vector<int>node;
        for(auto lst:lists){
            while(lst){
                node.push_back(lst->val);
                lst=lst->next;
            }
        }
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;
        sort(node.begin(),node.end());
        for(int i=0;i<node.size();i++){
            curr->next=new ListNode(node[i]);
            curr=curr->next;
        }
        return dummy->next;
    }
};
