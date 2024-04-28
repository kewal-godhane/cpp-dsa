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
 int length_of_list(node* head)
 {
     int count=0;
     node* temp=head;
     while (temp!=NULL)
     {
         count++;
         temp=temp->next;
     }
     return count;
     
 }

void k_elemet_to_the_front(node* &head,int k)
{
    int l=length_of_list(head);
    node* temp=head;
    int stopat=l-k;
    while(--stopat)
    {
        temp=temp->next;
    }
    node* newhead=temp->next;
    node* temp1=newhead;
    temp->next=NULL;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=head;
    head=newhead;
    // return newhead;
    // node* newhead;
    // newhead=temp->next;
    // node* newtemp=temp;
    // temp->next=NULL;
    // while(newtemp->next!=NULL)
    // {
    //     newtemp=newtemp->next;
    // }
    // newtemp->next=head;
    
}

int main()
{
    node* head=NULL;
    insert_node_at_tail(head,1);
    insert_node_at_tail(head,3);
    insert_node_at_tail(head,4);
    insert_at_head(head,2);
    display(head);

    // cout<<length_of_list(head)<<endl;
    // node* newhead=k_elemet_to_the_front(head,2);
    k_elemet_to_the_front(head,2);
    display(head);

}