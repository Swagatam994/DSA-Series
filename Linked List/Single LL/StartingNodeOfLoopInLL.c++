#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int DetectLoop(Node* head){
    Node *fast=head;
    Node *slow=head;
    slow=head;
    fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow->data;
        }
    }
    return NULL;
}

int main(){

    // Create nodes
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();
     Node *seven = new Node();
      Node *eight = new Node();
    // Assign data and link nodes
    head->data = 7;
    head->next = second;

    second->data = 31;
    second->next = third;

    third->data = 21;
    third->next = fourth;

    fourth->data = 45;
    fourth->next = fifth;

    fifth->data = 60;
    fifth->next = sixth;

    sixth->data = 11;
    sixth->next = seven;
    
    seven->data=19;
    seven->next=eight;

    eight->data=20;
    eight->next=sixth;

    int x=DetectLoop(head);
    if(x!=NULL)
    cout<<"The starting of the loop is "<<x;
    else
    cout<<"The LL has no loop";

     Node *cur = head;
    while(cur!=NULL){
        Node *next = cur->next;
        delete cur;
        cur = next;
    }
}