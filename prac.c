#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
struct node* prev;
};
void push(struct node** headref,int data)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->next=*headref;
    if(*headref==NULL)

        n->prev=NULL;

    else

        n->next->prev=n;
        *headref=n;
}
void print(struct node *headref)
{
struct node* temp;
temp=headref;
while(temp->next!=NULL)
{
printf("\n%d",temp->data);
temp=temp->next;
}
printf("\n Now in previous direction ");
while(temp->prev!=NULL)
{
printf("\n%d",temp->data);
temp=temp->prev;
}

}

int main()
{

struct node* head=NULL;

push(&head,5);push(&head,4);
push(&head,3);push(&head,2);
push(&head,1);push(&head,0);

print(head);

return 0;

}


