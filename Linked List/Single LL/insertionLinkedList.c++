#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void Traversal(Node *ptr){
    while(ptr!=NULL){
        cout<<"Element : "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

Node* InsertionAtBeginning(Node *head){
    int x;
    cout<<"Enter the data to Insert At Beginning :"<<endl;
    cin>>x;

    Node *ptr=new Node();
    ptr->next=head;
    ptr->data=x;
    return ptr;
}

Node* InsertionAtEnd(Node *ptr){
    int x;
    cout<<"Enter the data to Insert At End :"<<endl;
    cin>>x;

    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    Node *p=new Node();
    ptr->next=p;
    p->next=NULL;
    p->data=x;
    return p;

}

Node* insertionInBetween(Node *head){
    int x,n;
    cout<<"Enter the data to Insert :"<<endl;
    cin>>x;
    cout<<"Enter the index : ";
    cin>>n;

    Node *p = head;
    for(int i=0; i<n && p!=NULL; i++){
        p = p->next;
    }
    if(p == NULL){
        cout << "Index out of range" << endl;
        return NULL;
    }
    Node *ptr=new Node();
    ptr->data=x;
    ptr->next=p->next;
    p->next=ptr;
    return ptr;
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
    head = InsertionAtBeginning(head);
    Traversal(head);
    insertionInBetween(head);
    Traversal(head);
    InsertionAtEnd(head);

    Traversal(head);
    // Free memory
    Node *cur = head;
    while(cur != NULL){
        Node *next = cur->next;
        delete cur;
        cur = next;
    }

    return 0;

}
