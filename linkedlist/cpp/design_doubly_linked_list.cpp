#include<iostream>
using namespace std;
class Node{
    public:
    int data; 
    Node* next;
    Node* prev; 
    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

class MyDoublyLinkedList{
    public:
    Node* head = NULL;
    int size = 0;
    MyDoublyLinkedList(){}
    void print(){
        Node* temp = head;
        while(temp){
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << endl;
    }
    void addAtHead(int val){
        Node* new_node = new Node(val);
        if (!head){
            head = new_node;
            size++;
            return ;
        }
        new_node ->next = head;
        head->prev = new_node;
        head = new_node;
        size++;
    }
    void addAtTail(int val){
        Node* new_node = new Node(val);
        Node* temp = head;
        if (!head){
            head = new_node;
            size++;
            return;
        }
        while(temp->next){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node -> prev = temp;
        size++;
    }
    void addAtIndex(int index, int val){
        if (index < 0 || index > size){
            return;
        }   
        if(index == 0){
            addAtHead(val);
            return;
        } 
        if (index == size){
            addAtTail(val);
            return;
        }
        Node* temp = head;
        Node* new_node = new Node(val);
        for(int i = 0; i < index; i ++){
            temp = temp->next;
        }
        temp -> prev->next = new_node;
        new_node ->prev = temp -> prev;
        new_node -> next = temp;
        temp->prev = new_node;
        size++;
    }
    void deleteAtIndex(int index){
        if (index < 0 || index >= size){
            return;
        }
        Node* temp = head;
        if (index == 0){
            if(head->next == NULL){
                head = NULL;
                size--;
                return ;
            }
            head = head->next ;
            head ->prev = NULL;
            delete temp;
            size--;
            return;
        }
        if(index == size - 1){
            while(temp ->next){
                temp = temp->next;
            }
            temp ->prev ->next = NULL;
            delete temp;
            size--;
            return;
        }
        
        for(int i = 0; i < index ; i++){
            temp = temp->next;
        }
        temp -> prev -> next = temp->next;
        temp -> next ->prev = temp -> prev;
        delete temp;
        size--;
    }
    int get(int index){
        if(index >= size || index < 0){
            return -1;
        }
        Node* temp = head;
        for(int i = 0; i < index; i++){
            temp = temp->next;
        }
        return temp->data;
    }

};
int main(){
    /*
    ["MyLinkedList","addAtHead","get","addAtHead","addAtHead","deleteAtIndex",
    "addAtHead","get","get","get","addAtHead","deleteAtIndex"]
    [[],[4],[1],[1],[5],[3],[7],[3],[3],[3],[1],[4]]
    */
    MyDoublyLinkedList* obj = new MyDoublyLinkedList();
    obj->addAtHead(4);
    cout << obj->get(1) << endl;
    obj->print();
    obj -> deleteAtIndex(0);
    obj->print();
    return 0;
}