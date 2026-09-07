#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

bool DetectLoop(Node* head){
    Node *fast=new Node();
    Node *slow=new Node();
    slow=head;
    fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
int main(){



    // Create nodes
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();
    // Assign data and link nodes
    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 21;
    third->next = fourth;

    fourth->data = 45;
    fourth->next = fifth;

    fifth->data = 60;
    fifth->next = sixth;

    sixth->data = 11;
    sixth->next = NULL;

    if(DetectLoop(head))
     cout<<"The LL has a loop";
    else
     cout<<"The LL doesn't have a loop";
}