#include<stdio.h>
#include<stdlib.h>
struct node{
   int r;
   int c;
   int data;
   struct node* next;
};
struct node* head=NULL;
void create()
{
   struct node *temp = (struct node*) malloc(sizeof(struct node));
   temp->next = NULL;
   struct node *t = head;
   if (head == NULL)
       head = temp;
   else
   {
       while (t->next != NULL)
       {
           t = t->next;
       }
       t->next=temp;
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
           printf("%d.->%d%d%d\n",p,t->r,t->c,t->data);
           p++;
           t=t->next;
       }
   }
}
void main() {
   int n, m, i, j, c=0, count=0, a[10][10];
   struct node* t1=head;
   struct node* t =head;
   printf("Enter no. of rows");
   scanf("%d", &n);
   printf("Enter no. of columns");
   scanf("%d", &m);
   for (i = 0; i < n; i++)
   {
       for (j = 0; j < m; j++)
       {
           scanf("%d", &a[i][j]);
       }
   }
       for (i = 0; i < n; i++) {
           for (j = 0; j < m; j++)
           {
               printf("%d", a[i][j]);
               if (a[i][j] != 0)
                   count++;
           }    printf("\n");
       }
   for(i=0;i<=count+1

   ;i++)
       create();

   head->data=count;
   head->r=n;
   head->c=m;

   t1=head->next;

   for (i = 0; i < n; i++) {
       for (j = 0; j < m; j++) {
           if (a[i][j] != 0) {
               t=t1;
               t1->data = a[i][j];
               t1->r = i;
               t1->c = j;
               t1 = t1->next;
               c++;
               if (t1->next == NULL) {
                   t->next=NULL;
                   //    t1->next=NULL;
                   break;
               }
           }
       }
   }
display();
}

