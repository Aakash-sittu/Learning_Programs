#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void inend(struct node *head, int val)
{
    struct node *ptr;
    ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}
void mid(struct node *head, int val, int pos)
{
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = val;
    ptr2->next = NULL;
    pos--;
    while (pos != 1)
    {
        ptr = ptr->next;
        pos--;
    }
    ptr2->next = ptr->next;
    ptr->next = ptr2;
}

void display(struct node *head)
{
    if (head == NULL)
    {
        printf("No Values in LL");
    }
    else
    {
        struct node *ptr = head;
        while (ptr != NULL)
        {
            /* code */
            printf("%d ", ptr->data);

            ptr = ptr->next;
        }
    }
}
int main(int argc, char const *argv[])
{
    head = malloc(sizeof(struct node));
    head->data = 12;
    head->next = NULL;
    struct node *current = malloc(sizeof(struct node));
    current->data = 13;
    current->next = NULL;
    head->next = current;
    current = malloc(sizeof(struct node));
    current->data = 14;
    current->next = NULL;
    head->next->next = current;
    inend(head, 5);
    inend(head, 6);
    inend(head, 75);
    display(head);
    printf("\n");
    mid(head, 456, 3);
    display(head);
    printf(" \n");
    return 0;
}
