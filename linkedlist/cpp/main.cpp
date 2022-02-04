#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};
Node* mk_node(int d){
        Node* head = new Node();
        head->data = d;
        head->next = NULL;
        return head;
}
Node* from_vector(vector<int>ivec){
    if (ivec.size() == 0){
        return NULL;    
    }
    Node* head = mk_node(ivec[0]);
    Node* cur = head;
    for(int i = 1; i < ivec.size(); i++){
        cur->next = new Node(); 
        cur->next->data = ivec[i];
        cur = cur->next;
    }
    return head;
}
void print_list(Node* head){
    cout << "[";
    while(head!= NULL){
        cout << head->data << "-->";
        head = head->next;
    }
    cout << "]";
    cout << endl;
}
Node* insert_front(Node* list, int d){ //  [] ->[1{head}->>2->>3->4->>5]
    Node* new_node = new Node();
    new_node->data = d;
    new_node->next = list;
    return new_node;    
}
void insert_At_end(Node* head, int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node ->next = NULL;
    while(head->next){
        head = head->next;
    }
    head->next = new_node;
}
Node* del_from_front(Node* head){
     //  temp =>head ==> [123,1,23,4,5,5] 
     Node* temp = head;
     head = head->next;
     delete temp;
     return head;
}
int list_len(Node* head){
    int count = 0;
    while(head){
        head = head->next;
        count++;
    }
    return count;
}
Node* node_at_index(Node* head, int index) {
    // [index] => [1,2,3,4,5]
    if (!head) return NULL; 
    int count = 0;
    while (head && count != index ){
        head= head->next;
        count++;
    }
    return head;
}
Node* insert_at_index(Node* head, int data, int index) {
    //[1,23,4,5,5,2000]  
    int count = 0;
    if (!head && index == 0){
        Node* head = new Node();
        head->data = data;
        head->next = NULL;
        return head;
    }
    Node* new_node = new Node();
    Node* prev_node = head;
    Node* cur = head;
    new_node->data = data;
    if (index == 0){
        new_node->next = head;
        return new_node;
    }
    while (cur->next != NULL && count != index){
        prev_node = cur;
        cur = cur->next;
        count++;
    }
    if (count == index){
        prev_node->next = new_node;
        new_node->next = cur;
        return head;
    }
    return NULL;
}

int main(){
    vector<int> ivec = {1,23,4,5,5};
    Node* list = from_vector(ivec);
    list = insert_front(list, 123);
    insert_At_end(list, 2000);
    list = del_from_front(list);
    print_list(list);
    cout << list_len(list) << endl;
    //list = node_at_index(list,123);
    print_list(list);
    list = insert_at_index(list, 99, 0);
    print_list(list);

}