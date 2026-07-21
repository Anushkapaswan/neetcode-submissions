/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
unordered_set<int>visited;
// lets make a vector of node which store the address of newely created node
vector<Node*>list;
void toBuildDeepCopy(Node* deepCopy,Node*node){
    if(node==NULL) return;
    visited.insert(node->val);
    for(auto neighbor:node->neighbors){
        if(!visited.count(neighbor->val)){
            Node* newNode=new Node(neighbor->val);
            list.push_back(newNode);
            deepCopy->neighbors.push_back(newNode);
            toBuildDeepCopy(newNode,neighbor);
        }
        else{
            for(auto n:list){
                if(n->val==neighbor->val){
                 deepCopy->neighbors.push_back(n);   
                 break;
                }
            }
        } 
    }
}
    Node* cloneGraph(Node* node) {
        if(node==NULL) return node;
        Node* deepCopy=new Node(node->val);
        list.push_back(deepCopy);
        toBuildDeepCopy(deepCopy,node);
        return deepCopy;
    }
};
