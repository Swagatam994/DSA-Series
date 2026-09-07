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

void EvenAndOddNodes(Node *head)
{
    if (!head || !head->next)
        return;
    Node *Odd = head, *Even = head->next, *oddHead = Odd, *evenHead = Even;

    while (Odd->next && Even->next)
    {
        Odd->next = Even->next;
        Odd = Odd->next;
        Even->next = Odd->next;
        Even = Even->next;
    }
    Odd->next = NULL;
    Node *temp = evenHead;
    while (temp->next && temp)
    {
        temp = temp->next;
    }
    if (temp)
        temp->next = oddHead;
    Traversal(evenHead);
}
int main()
{

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

    fourth->data = 11;
    fourth->next = fifth;

    fifth->data = 7;
    fifth->next = NULL;

    // sixth->data = 7;
    // sixth->next = NULL;

    EvenAndOddNodes(head);

    Node *cur = head;
    while (cur != NULL)
    {
        Node *next = cur->next;
        delete cur;
        cur = next;
    }
}