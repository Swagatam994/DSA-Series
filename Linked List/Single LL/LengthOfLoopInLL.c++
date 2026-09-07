#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int DetectLoopLenght(Node* head){
    Node *fast=head;
    Node *slow=head;
     int counter = 1;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
           slow=slow->next;
            while(slow!=fast){
                slow=slow->next;
                counter++;
            }
            return counter;
        }
    }
    return 0;
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

    int x=DetectLoopLenght(head);
    
    cout<<"The length of the loop is "<<x;
    

     Node *cur = head;
    while(cur!=NULL){
        Node *next = cur->next;
        delete cur;
        cur = next;
    }
}