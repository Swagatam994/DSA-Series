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
void Sorting(Node *head){
     Node zerohead={-1,nullptr},onehead={-1,nullptr},twohead={-1,nullptr};
    Node *zero=&zerohead,*ones=&onehead,*two=&twohead;
   
    Node *p=head;

    while(p){
        if(p->data==0){
        zero->next=p;
        zero=zero->next;
    }
        else if(p->data==1){
        ones->next=p;
        ones=ones->next;
        }
        else{
            two->next=p;
            two=two->next;
        }
        p=p->next;



    }

    zero->next=onehead.next;
    ones->next=twohead.next;
    two->next=NULL;
    cout<<"New\n";
    Traversal(zerohead.next);
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
    head->data = 2;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data =0;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = fifth;

    fifth->data = 0;
    fifth->next = sixth;

    sixth->data = 1;
    sixth->next = NULL;

    cout << "Original: ";
    Traversal(head);
    Sorting(head);
   
   

   

    Node *cur = head;
    while(cur!=NULL){
        Node *next = cur->next;
        delete cur;
        cur = next;
    }

    return 0;
}