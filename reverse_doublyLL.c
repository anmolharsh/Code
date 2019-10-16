#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
    };
struct node* head=NULL;
void create(int n)
{
    int x;
    for(int i=0;i<n;i++)
    {
        printf("Enter data of the node");
        scanf("%d",&x);
        struct node *temp = (struct node *) malloc(sizeof(struct node));
        struct node *t = head;
        temp->data = x;
        temp->next = NULL;
        temp->prev = NULL;
        if (head == NULL)
            head = temp;
        else {
            while (t->next != NULL)
                t = t->next;
            temp->prev = t;
            t->next = temp;
        }
    }
}
//void reverse()
//{
//    struct node* temp=NULL;
//    struct node* t=head;
//    while(t!=NULL)
//    {
//        temp = t->prev;
//        t->prev = t->next;
//        t->next = temp;
//        t = t->next;
//    }
//    if(temp!=NULL)
//
//            head=temp->next;
//}
void reverse()
{
    struct node *temp = NULL;
    struct node *t = head;

    /* swap next and prev for all nodes of
      doubly linked list */
    while (t !=  NULL)
    {
        temp = t->prev;
        t->prev = t->next;
        t->next = temp;
        t = t->prev;
    }

    /* Before changing head, check for the cases like empty
       list and list with only one node */
    if(temp != NULL )
        head = temp->prev;
}
void display() {
    struct node *t = head;
    if (t == NULL)
        printf("Empty list");
    else
    {
        while (t != NULL)
        {
            printf("%d", t->data);
            t = t->next;
        }
    }
}
int main()
{
    int n,x;
    printf("Enter number of nodes\n");
    scanf("%d",&n);
    create(n);
    printf("Before");
    display();
    printf("After");
    reverse();
    display();
    return 0;
}