#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev
        }*head,*next,*previous, *temp,*newnode,element;
        int main(){
         insert();
         display();
         deletion();
         display();
        }
void insert()
{
    newnode= malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&newnode->data);
    if(head== NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
void display()
{
    head=temp;
    while(temp->next!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
        printf("%d",temp->data);
    }
    void deletion()
    {
        temp=head;
        while(temp->data!=element)
        {
            temp=temp->next;
        }
        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
    }
}
