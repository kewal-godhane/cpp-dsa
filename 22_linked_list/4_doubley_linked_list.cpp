#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node 
{
     public:
        int data;
        node* prev;
        node* next;
    
        node(int val)
        {
            data=val;
            prev=NULL;
            next=NULL;
        }
};
void insert_at_head(node* &head,int val)
{
    node* n=new node(val);
    if(head!=NULL)
    {
        head->prev=n;
    }
    n->next=head;
    head=n;

}
void insert_at_tail(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        insert_at_head(head,val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;


}
void delete_at_head(node* &head)
{
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}
void delete_node_using_value(node* &head,int pos)
{
    node* temp=head;
    if(head->data==pos)
    {
        delete_at_head(head);
        return;
    }
    while(temp->data!=pos)
    {
        temp=temp->next;
    }
    temp->prev->next=temp->next;

    if(temp->next!=NULL)
    temp->next->prev=temp->prev;

    delete temp;

}
void delete_node_using_position(node* &head,int pos)
{
    if(pos==1)
    {
        delete_at_head(head);
        return;
    }
    node* temp=head;
    int count=1;

    while(temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;

    if(temp->next!=NULL)
    temp->next->prev=temp->prev;

    delete temp;
}

void display(node* head)
{
    node* temp=head;
    if(temp==NULL)
    {
        cout<<"list is empty";
        return;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";

}
int main()
{
    node* head=NULL;
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    insert_at_tail(head,6);
    display(head);
    insert_at_head(head,2);
    display(head);
    // delete_node_using_value(head,2);
    delete_node_using_position(head,1);
    display(head);
    return 0;
}