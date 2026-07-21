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
    void reorderList(ListNode* head) {
        vector<ListNode*>node;
        ListNode*temp=head;
        while(temp!=NULL){
            node.push_back(temp);
            temp=temp->next;
        }
        int i=0;
        int j=node.size()-1;
        while(i<j){
            node[i]->next=node[j];
            i++;
            if(i>=j) break;
            node[j]->next=node[i];
            j--;
        }
        node[i]->next=NULL;
    }
};
