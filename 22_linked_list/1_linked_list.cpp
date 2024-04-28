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
void insert_node_at_tail(node* &head ,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void insert_at_head(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;

}
void display(node* head)
{
    node* temp=head;
    if(temp==NULL)
    {
        cout<<"list is empty";
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";

}
void delete_at_head(node* &head)
{
    node* temp=head;
    head=head->next;

    delete temp;
}
void delete_node(node* &head,int val)
{
    if(head==NULL)
    {
        cout<<"list is empty";
    }
    if(head->next==NULL)
    {
        delete_at_head(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}
node* reverseList(node* head)  //iterative way (using loop)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    
    while (currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
    
}
node* reverseListrecursively(node* head)   //using recursion
{
    if(head->next==NULL)
    {
        return head;
    }
    node* newhead=reverseListrecursively(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;    //this newhead is not getting changed(because we are not doing anything with it)
}
int main()
{
    node* head=NULL;
    insert_node_at_tail(head,1);
    insert_node_at_tail(head,3);
    insert_node_at_tail(head,4);
    insert_at_head(head,2);
    // delete_at_head(head);
    // delete_node(head,3);
    display(head);
    node* newhead=reverseListrecursively(head);
    display(newhead);

}