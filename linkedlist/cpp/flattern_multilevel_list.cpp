/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* cur = head;
        Node* tail = head;
        stack<Node *> stack ;
        while (cur){
            if(cur->child){
                Node* child = cur->child;
                if(cur->next){
                    stack.push(cur->next);
                    cur->next->prev = NULL;
                }
                cur->next = child;
                child->prev = cur;
                cur->child = NULL;
            }
            tail = cur;
            cur = cur->next;
        }
        while (stack.empty()){
            cur = stack.top(); stack.pop();
            tail->next = cur;
            cur->prev = tail;
            while(cur){
                tail = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
