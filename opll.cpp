#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

void definhead(node *head, int val)
{
    node *temp = head;
    temp->data = val;
    temp->next = NULL;
}

void insertend(node *head, int val)
{
    node *temp = new node;
    temp->data = val;
    temp->next = NULL;
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

void delatfirst(node *head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}

void del(node *head, int val)
{
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *temp1 = temp->next;
    temp->next = temp->next->next;
    delete temp1;
}

void display(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
    cout << "NULL";
}
int main(int argc, char const *argv[])
{
    node *head = new node;
    definhead(head, 5);
    display(head);
    cout << endl;
    insertend(head, 6);
    display(head);
    cout << endl;
    insertend(head, 7);
    display(head);
    cout << endl;
    insertend(head, 8);
    display(head);
    cout << endl;
    del(head, 7);
    display(head);
    cout << endl;
    delatfirst(head);
    display(head);
    cout << endl;
    return 0;
}
