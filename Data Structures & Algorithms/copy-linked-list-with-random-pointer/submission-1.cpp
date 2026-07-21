
class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>oldToNew;
        Node* temp=head;
        oldToNew[NULL]=NULL;
        while(temp!=NULL){
            Node* copy=new Node(temp->val);
            oldToNew[temp]=copy;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            Node* copy=oldToNew[temp];
            copy->next=oldToNew[temp->next];
            copy->random=oldToNew[temp->random];
            temp=temp->next;
        }
        return oldToNew[head];
    }
};
