#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node 
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insert(node* &head,int val)
{
    node *temp=head;
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    
}

void displayList(node *head)
{
    if(head==NULL)
    {
        cout<<"list is empty";
    }

    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    
}

node* reverseList(node* &head)
{
    node* preptr=NULL;
    node* currptr=head;
    node* nextptr;

    while (currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=preptr;

        preptr=currptr;
        currptr=nextptr;
    }
    return preptr;
    
}

int main()
{
    node * head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    // displayList(head);
    node* n=reverseList(head);
    displayList(n);
    return 0;
}