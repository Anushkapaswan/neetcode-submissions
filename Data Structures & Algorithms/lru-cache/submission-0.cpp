class Node{
        public:
        int key;
        int value;
        Node*prev;
        Node* next;
        Node(int key,int value){
                this->key=key;
                this->value=value;
                this->prev=NULL;
                this->next=NULL;
        }
};
class LRUCache {
        private:
        int cap;
        unordered_map<int,Node*>mp;
        Node*currentHead;
        Node*currentTail;

        void insert(Node* node){
                Node* nextNode=currentHead->next;
                node->next=nextNode;
                currentHead->next=node;
                node->prev=currentHead;
                nextNode->prev=node;
        }
        void remove(Node* node){
                Node* nodePrev=node->prev;
                Node* nodeNext=node->next;
                nodePrev->next=nodeNext;
                nodeNext->prev=nodePrev;
        }
        // void insert(Node* node){
        //        Node* nextNode=currentHead->next;
        //        Node*  prevNode=nextNode->prev;
        //        node->next=nextNode;
        //        prevNode->prev=node;
        //        currentHead->next=node;
        // }
public:
    LRUCache(int capacity) {
        this->cap=capacity;
        currentHead =new Node(0,0);
        currentTail=new Node(0,0);
        currentHead->next=currentTail;
        currentTail->prev=currentHead;
    }
    int get(int key) {
        if(mp.find(key)!=mp.end()){
                Node* node=mp[key];
                int val=node->value;
                remove(node);
                insert(node);
                return val;
        }
        return -1;
    }
    void put(int key, int value){
        if(mp.find(key)!=mp.end()){
                Node* node=mp[key];
                remove(node);
        }
        Node* newNode=new Node(key,value);
        mp[key]=newNode;
         insert(newNode);
         if(mp.size()>cap){
                Node* prevNode=currentTail->prev;        
                remove(prevNode);
                mp.erase(prevNode->key);
                delete prevNode;
         }
    }
};
