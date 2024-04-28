#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
    }
};
void insert_at_tail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        n->next=head;
        return;
    }
    node* temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void display(node* head)
{
    node* temp=head;
    if(head==NULL)
    cout<<"list is empty";
    while(temp->next!=head)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<temp->data<<"->";
}
int main()
{
    node* head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    display(head);
}