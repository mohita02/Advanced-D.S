#include<iostream>
using namespace std;
struct node{
    node* next;
    int data;
};
void insert(struct node **head,int data)
{
    node *newnode;
    newnode=new node;
    newnode->data=data;
    newnode->next=(*head);
    (*head)=newnode;
}
void printNthElement(struct node *head,int n)
{
    int len=0;
    struct node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    if(len<n)
    {
        return;
    }
    temp=head;
    for(int i=0;i<len-n+1;i++)
    {
        temp=temp->next;
        cout<<temp->data;
        return;
    }
}
int main()
{
    struct node *head=NULL;
    insert(&head,50);
    insert(&head,40);
    insert(&head,30);
    insert(&head,20);
    insert(&head,10);
    printNthElement(head,3);
}