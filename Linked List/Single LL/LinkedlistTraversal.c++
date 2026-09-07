#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void Traversal(Node *ptr){
    while(ptr!=NULL){
        cout<<"Element : "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main(){
    // Create nodes
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    // Assign data and link nodes
    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 21;
    third->next = NULL;

    // Traverse and print
    Traversal(head);

    // Free memory
    delete head;
    delete second;
    delete third;

    return 0;
}
