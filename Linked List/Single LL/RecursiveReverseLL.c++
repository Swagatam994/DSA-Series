#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};


Node* Reverse(Node *head){
    if(head->next==NULL || head==NULL)
        return head;

    Node *new_head=new Node();
    new_head=Reverse(head->next);
    head->next->next=head;//Reverse
    head->next=NULL;
    return new_head;
}
void Traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
    
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

   head= Reverse(head);
    Traversal(head);
}