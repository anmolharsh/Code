#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
void create(int x)
{
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    struct node* t = head;
    temp->data = x;
    temp->next = NULL;
    if (head== NULL)
        head = temp;
    else
    {
        while (t->next!= NULL)
            t = t->next;
        t->next = temp;
    }
}
void display()
{
    struct node* t= head;
    int p=1;
    if(head==NULL)
        printf("Empty list");
    else
    {
        while(t!=NULL)
        {
            printf("%d.->%d\n",p,t->data);
            p++;
            t=t->next;
        }
    }
}
void sort()
{
   int q;
   struct node* t=head;
   struct node* t1=head;
   while(t!=NULL)
   {
       t1=t;
       while(t1!=NULL)
       {

           if((t1->data)>(t->data))
           {
               q=t1->data;
               t1->data=t->data;
               t->data=q;
           }
           t1=t1->next;
       }
       t=t->next;
   }
}
void main(){
    int a,n1,w;
    printf("Enter no. of nodes");
    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a);
        create(a);
    }
    printf("Before\n");
    display();
    printf("After\n");
    sort();
    display();
}


