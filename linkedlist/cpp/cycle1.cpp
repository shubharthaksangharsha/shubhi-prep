#include<iostream>
#include<unordered_set>
#include<unordered_map>
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
    bool unordered_set_isCycle(){
        unordered_set<Node *>traverse_el;
        while (head){
            if (traverse_el.find(head) != traverse_el.end()){
                return true;
            }
            traverse_el.insert(head);
            head = head->next;

        }
        return false;
    }
    bool unordered_map_isCycle(){
        unordered_map<Node* , bool>traverse_el;
        while (head){
            if (traverse_el[head] == true){ // {{3,true} , {address,true}, {0, address}  
                return true;
            }
            traverse_el[head] = true;
            head = head->next;
        }
        return false;
    }
    bool floyd_cycle(){
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next != NULL ? fast->next->next :  NULL;
            if (slow == NULL){
                return false;
            }
            if (slow == fast){
                return true;
            }
        }
        return false;
    }
    Node* flood_cycle2(){
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL){
            slow = slow-{>next;
            fast = fast-next != NULL ? fast ->next->next: NULL;
            if (slow == NULL){
                return NULL;
            }
            if (slow == fast){
                break;
            }
        }
        if (slow != fast){
            return NULL;
        }
        slow = head;
        while ( slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};

int main(){
    MyLinkedList* obj = new MyLinkedList();
    obj->addAtHead(3);
    obj->addAtTail(2);
    obj->addAtTail(0);
    obj->addAtTail(-4); 
    obj->print_list();
 //   obj->head ->next ->next->next->next = obj->head->next;
    cout << obj->floyd_cycle()<<endl;
    // obj->print_list();
    //cout << obj->head->data << endl;
      
    
}