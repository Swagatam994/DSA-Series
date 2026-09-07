#include <iostream>
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

Node *Reverse(Node *head)
{
    Node *prev = nullptr;
    Node *curr = head;
    while (curr != nullptr)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node *Addition(Node *head1 , Node *head2){
    
    Node DummyPointer{-1,nullptr};
    Node *tail=&DummyPointer;
   
    int carry=0;
    
    while(head1 || head2||carry){
        int v1=head1?head1->data:0;
        int v2=head2?head2->data:0;
        int sum=v1+v2+carry;

        carry=sum/10;

        Node *node=new Node();
        node->data=sum%10;
        node->next=NULL;
        tail->next=node;
        tail=node;
        if(head1)
        head1=head1->next;
        if(head2)
        head2=head2->next;        
    }
    return DummyPointer.next;


}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();

    // Assign data and link nodes
    head->data = 1;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 0;
    fifth->next = sixth;

    sixth->data = 9;
    sixth->next = NULL;

    // Second list
    Node *h2 = new Node();
    Node *h2_2 = new Node();
    Node *h2_3 = new Node();
    h2->data = 5;
    h2->next = h2_2;
    h2_2->data = 6;
    h2_2->next = h2_3;
    h2_3->data = 3;
    h2_3->next = NULL;

    cout << "List1 Original:\n";
    Traversal(head);
    cout << "List2 Original:\n";
    Traversal(h2);

    // Reverse both lists (numbers stored in forward order)
    Node *r1 = Reverse(head);
    Node *r2 = Reverse(h2);

    // Add reversed lists (adds from least-significant digit)
    Node *sum = Addition(r1, r2);

    // Reverse sum to store result in forward order
    Node *result = Reverse(sum);

    cout << "After Addition:\n";
    Traversal(result);

    // Free memory for all three lists
    Node *cur = r1;
    while (cur != NULL)
    {
        Node *next = cur->next;
        delete cur;
        cur = next;
    }
    cur = r2;
    while (cur != NULL)
    {
        Node *next = cur->next;
        delete cur;
        cur = next;
    }
    cur = result;
    while (cur != NULL)
    {
        Node *next = cur->next;
        delete cur;
        cur = next;
    }
}