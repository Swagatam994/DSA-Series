#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *reverseLL(Node *head)
{
    Node *new_head = new Node();
    if ( head == NULL||head->next == NULL )
    {
        return head;
    }
    new_head = reverseLL(head->next);
    head->next->next = head;
    head->next = NULL;

    return new_head;
}
bool Palindrome(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    Node *new_node, *first, *second;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    new_node = reverseLL(slow->next);
    first = head;
    second = new_node;
    while (second!= NULL)
    {
        if (first->data != second->data)
        {
            return false;
        }
        first=first->next;
        second=second->next;
    }
    return true;
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

    if (Palindrome(head))
        cout << "The LL is palindrome";
    else
        cout << "The LL is not palindrome";

    Node *cur = head;
    while (cur != NULL)
    {
        Node *next = cur->next;
        delete cur;
        cur = next;
    }
}