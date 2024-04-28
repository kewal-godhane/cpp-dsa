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
node* reverse_k_List(node* &head,int k)  //groups of k node get reversed
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while (currptr!=NULL && count<k)    //this will reverse first k node and then using recursion next k nod ewill be reversed
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL)
    head->next=reverse_k_List(nextptr,k);

    return prevptr;
    
}
int main()
{
    node* head=NULL;
    insert_node_at_tail(head,1);
    insert_node_at_tail(head,3);
    insert_node_at_tail(head,4);
    insert_node_at_tail(head,5);
    display(head);
    node* newhead=reverse_k_List(head,2);
    display(newhead);

}