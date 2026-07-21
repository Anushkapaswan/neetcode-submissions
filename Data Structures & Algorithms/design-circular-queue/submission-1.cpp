class MyCircularQueue {
private:

    class Node {
    public:
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            next = NULL;
        }
    };

    Node* head;
    Node* tail;
    int count;
    int k;

public:

    MyCircularQueue(int k) {
        this->k = k;
        head = NULL;
        tail = NULL;
        count = 0;
    }

    bool enQueue(int value) {

        if (count == k)
            return false;

        Node* node = new Node(value);

        if (count == 0) {
            head = tail = node;
            tail->next = head;
        }
        else {
            tail->next = node;
            tail = node;
            tail->next = head;
        }

        count++;
        return true;
    }

    bool deQueue() {

        if (count == 0)
            return false;

        // Only one node
        if (count == 1) {
            delete head;
            head = NULL;
            tail = NULL;
        }
        else {
            Node* temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
        }

        count--;
        return true;
    }

    int Front() {
        if (count == 0)
            return -1;

        return head->val;
    }

    int Rear() {
        if (count == 0)
            return -1;

        return tail->val;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == k;
    }
};