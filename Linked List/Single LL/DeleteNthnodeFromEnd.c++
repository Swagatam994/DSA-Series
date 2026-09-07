#include<iostream>
using namespace std;
struct Node
{           
    int data;
    Node *next;
};

void Traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
    
}
void DeleteNthNodeFromEnd(Node *head,int N){
    Node *fast=head,*slow=head,*next=head->next;
    int i=1;
    while(i<=N){
        fast=fast->next;
        i++;

    }
    while (fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
        next=next->next;


    }
    slow->next=next->next;
    
    cout << "New:   ";
    Traversal(head);
    

}
int main(){
// Create nodes
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();
    int N;
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

    cout << "Original: ";
    Traversal(head);
    cout<<"Enter the node from the end to be deleted: ";
    cin>>N;
    DeleteNthNodeFromEnd(head,N);

   

    Node *cur = head;
    while(cur!=NULL){
        Node *next = cur->next;
        delete cur;
        cur = next;
    }

    return 0;
}