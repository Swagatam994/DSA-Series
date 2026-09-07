#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void Traversal(Node *ptr){
    while(ptr!=NULL){
        cout << ptr->data;
        if(ptr->next!=NULL) cout << " -> ";
        ptr = ptr->next;
    }
    cout << endl;
}

Node* mergeTwoSorted(Node *a, Node *b){
    if(a==NULL) return b;
    if(b==NULL) return a;

    Node *result = NULL;
    if(a->data <= b->data){
        result = a;
        result->next = mergeTwoSorted(a->next, b);
    }else{
        result = b;
        result->next = mergeTwoSorted(a, b->next);
    }
    return result;
}

void splitAtMid(Node *head, Node **left, Node **right){
    if(head==NULL || head->next==NULL){
        *left = head;
        *right = NULL;
        return;
    }

    Node *slow = head;
    Node *fast = head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    *left = head;
    *right = slow->next;
    slow->next = NULL; // split: middle points to null
}

Node* mergeSort(Node *head){
    if(head==NULL || head->next==NULL) return head;

    Node *left = NULL;
    Node *right = NULL;
    splitAtMid(head, &left, &right);

    left = mergeSort(left);
    right = mergeSort(right);
    return mergeTwoSorted(left, right);
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

    head = mergeSort(head);

    cout << "Sorted:   ";
    Traversal(head);

    Node *cur = head;
    while(cur!=NULL){
        Node *next = cur->next;
        delete cur;
        cur = next;
    }

    return 0;
}
