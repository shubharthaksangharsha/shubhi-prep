#include<iostream>
using namespace std;

class Node{
    public:
    int data; 
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class MyLinkedList{
    public:
    Node* head = NULL;
    int size = 0;
    MyLinkedList(){

    }
    void addAtHead(int val){
        Node* new_node = new Node(val);
        if (!head){
            head = new_node;
            size++;
            return;
        }
        new_node->next = head; // [1, 2] 
        head = new_node;
        size++;
    }
    void print_list(){
        Node* temp = head;
        if (!head){
            cout << "List is empty!!" << endl;
            return;
        } 
        while (temp){
            cout << temp->data << "-->" ;
            temp = temp->next;
        }
        cout << endl;
    }
    void addAtTail(int val){
        Node* new_node = new Node(val);
        if (!head){
            head = new_node;
            size++;
            return;
        }
        Node* temp = head;
        while(temp->next){  
            temp = temp->next;
        }
        temp->next = new_node;
        size++;
    }
    int get(int index){
        if (index >= size){
            return -1;
        }
        Node* temp = head;                          
        for(int i = 0; i < index; i++){  // [2, 25, 33]
            temp= temp->next;
        }
        return temp->data;
    }
    void addAtIndex(int index, int val){
        Node* new_node = new Node(val);
        Node* temp = head;
        if(index >size){
            return;
        }
        if (index == 0){
            addAtHead(val);
            return;
        }
        if (index == size){
            addAtTail(val);
            return;
        } 
        for(int i = 0; i < index -1 ; i++){
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
        size++;
        return;
    }
    void deleteAtIndex(int index){
        Node* temp = head;
        if(index >=size){
            return;
        } 
        if (index == 0){
            head = head->next;
            delete temp;
            size--;
            return;
        }
        for(int i = 0; i < index -1; i++){
            temp = temp->next;
        }
        Node* delete_node = temp->next;
        temp->next = temp->next->next;
        delete delete_node;
        size--;
    }
    Node* removeVal(int val){
        while (head != NULL && head->data == val){
            head = head->next;
        }
        if (head == NULL){
            return head;
        }
        Node* temp = head;
        while(temp->next != NULL){
            if(temp->next->data == val){
                temp->next = temp->next->next;
            } else{
                temp = temp->next;
            }
        }
        return head;
    }
};

int main(){
    MyLinkedList* obj = new MyLinkedList();
    obj->addAtHead(3);
    obj->addAtTail(2);
    obj->addAtTail(0);
    obj->addAtTail(-4); 
    //obj->head ->next ->next->next->next = obj->head->next;
    obj->print_list();
    
}