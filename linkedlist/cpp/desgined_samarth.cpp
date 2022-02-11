class Node{
public:
  int val;
  Node *next;
  Node *prev;
  Node(int val){
    this->val = val;
    next = NULL;
    prev = NULL;
  }
};

class MyLinkedList {
public:
  Node *head;
  int size = 0;
  MyLinkedList() {
    head=NULL;
  }
    
  int get(int index) {
    Node* temp = head;
    if(index>=size||index<0) return -1;
    for(int i=0;i<index;i++){
      temp = temp->next;
    }
    return temp->val;
  }
    
  void addAtHead(int val) {
    Node *new_node = new Node(val);
    Node *temp = head;
    size++;
    if(head==NULL){
      head = new_node;
      return;
    }
    new_node->next = temp;
    temp->prev = new_node;
    head = new_node;
  }
    
  void addAtTail(int val) {
    Node *new_node = new Node(val);
    Node *temp = head;
    size++;
    if(head==NULL){
      head = new_node;
      return;
    }
    while(temp->next!=NULL){
      temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
  }
    
  void addAtIndex(int index, int val) {
    if(index==0){addAtHead(val);return;}
    if(index==size){addAtTail(val);return;}
    if(index<size){
      Node *new_node = new Node(val);
      Node *temp = head;
      size++;
      for(int i=0;i<index-1;i++){
	temp=temp->next;
      }
      new_node->next = temp->next;
      temp->next->prev = new_node;
      temp->next=new_node;
      new_node->prev = temp;
    }        
  }
  void deleteAtIndex(int index) {
    if(index==0){
      if(head->next==NULL)
	{
	  head = NULL;
	  size--;
	  return;
	}
      head = head->next;
      head->prev = NULL;
      size--;
      return;
    }
    if(index < 0 ||index>=size){
      return;
    }
    if(index==size-1){
      Node * temp = head;
      while(temp->next){
	temp=temp->next;
      }
      temp->prev->next = NULL;
      size--;
      return;
    }
    Node * temp = head;
    for(int i=0;i<index;i++){
      temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
    size--;
  }
};
