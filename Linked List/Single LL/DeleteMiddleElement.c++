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
void DeleteMiddleElement(Node *head){
 if (!head || !head->next) return;

    Node *fast = head;
    Node *slow = head;
    Node *prev = nullptr;    
    
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
       fast= fast->next->next;
       slow=slow->next;
    }
    
    prev->next=slow->next;
    cout<<"New";
    delete slow;
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
    DeleteMiddleElement(head);
   
   

   

    Node *cur = head;
    while(cur!=NULL){
        Node *next = cur->next;
        delete cur;
        cur = next;
    }

    return 0;
}