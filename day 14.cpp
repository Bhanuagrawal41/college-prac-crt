#include <iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node* next;
    
    Node(int newdata){
       this->data = newdata;
       this->next = nullptr;
    }
};

Node* head = nullptr;
void traversal(){
    Node* temp = head;
    int count = 0;
    while(temp->next != nullptr ){
        if (count == 3){
            Node* newNOde = new Node(35);
        temp->next = newNOde;
        }
        temp = temp->next;
        count++;
        cout << head->data
        
    }


#include <iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node* next;
    
    Node(int newdata){
      this->data = newdata;
      this->next = nullptr;
    }
};

// 
Node* head = nullptr;
  void deleteAthead(){
      if(head == nullptr){
          cout << "list is empty";
          return;
      }
      head = head->next;
  }
void display(){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "null";
}





int main()
{
   head = new Node(10);
   
   head->next = new Node(20);
   head->next->next = new Node(30);
   head->next->next->next = new Node(40);
   deleteAthead();
   display();
 

  return 0;
}
