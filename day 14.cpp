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
