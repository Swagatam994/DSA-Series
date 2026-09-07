

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

// Apprach 1
void findIntersection(Node *headA, Node *headB)
{
    Node *pA = headA, *pB = headB;
    while (pA != pB)
    {
        if (pA == NULL)
            pA = headB;
        if (pB == NULL)
            pB = headA;

        pA = pA->next;
        pB = pB->next;
    }
    if (pA)
        cout << "The intersection node is " << pA->data;
    else
        cout << "No intersection";
}
// Approach 2

int length(Node *head)
{
    Node *p = head;
    int i = 1;
    while (p != NULL)
    {
        p = p->next;
        i++;
    }
    return i;
}

void findIntersection2(Node *headA, Node *headB)
{
    Node *pA=headA,*pB=headB;
    int lengthA = length(headA);
    int lengthB = length(headB);
    int diff = abs(lengthA - lengthB);
    // Reduce the search space
    if(lengthA>lengthB)
        for (int i = 0; i < diff; i++)
        {
            pA=pA->next;
        }
    else
        for (int i = 0; i < diff; i++)
        {
            pB=pB->next;
        }

    while (pA!=pB)
    {
        pA=pA->next;
        pB=pB->next;
    }
    if (pA)
        cout << "The intersection node is " << pA->data;
    else
        cout << "No intersection";
    
        
        
        
}
int main()
{
    // Create nodes
    Node *headA = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *headB = new Node();
    Node *sixth = new Node();

    // Assign data and link nodes
    headA->data = 7;
    headA->next = second;

    second->data = 11;
    second->next = third;

    third->data = 21;
    third->next = fourth;

    fourth->data = 45;
    fourth->next = sixth;

    headB->data = 60;
    headB->next = fourth;

    sixth->data = 11;
    sixth->next = NULL;

    findIntersection2(headA, headB);

    Node *cur = headA;
    Node *cur2 = headB;
    while (cur != NULL)
    {
        Node *next = cur->next;
        delete cur;
        cur = next;
    }
    while (cur2 != NULL)
    {
        Node *next = cur2->next;
        delete cur2;
        cur2 = next;
    }

    return 0;
}