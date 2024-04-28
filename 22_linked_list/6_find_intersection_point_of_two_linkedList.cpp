
// idea to do this question
// calculate the length of both linked list ,and then substract them (this will give us the starting point ,so that we can start compairing)

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
void make_intersection(node* &head2,node* &head,int pos)
{
    node* temp=head2;
    node* temp1=head;

    int count=0;
    while (temp1->next!=NULL && count<pos)
    {
        temp1=temp1->next;
        count++;
    }
    
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=temp1;
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
bool find_intersection(node* head,node* head2,int val)
{
    node* temp=head;
    node* temp1=head2;

    while (val--)
    {
        temp=temp->next;
    }
    while(temp->next!=temp1->next)
    {
        temp=temp->next;
        temp1=temp1->next;
    }
    // cout<<temp1->next->data<<" "<<temp->next->data<<endl;
    return true;
}
int main()
{
    node* head=NULL;
    node* head2=NULL;
    insert_node_at_tail(head,1);
    insert_node_at_tail(head,2);
    insert_node_at_tail(head,3);
    insert_node_at_tail(head,4);
    insert_node_at_tail(head,5);
    insert_node_at_tail(head,6);


    insert_node_at_tail(head2,7);
    insert_node_at_tail(head2,8);

    cout<<"Before making intersection"<<endl;
    display(head);

    display(head2);

    make_intersection(head2,head,3);

    cout<<"After making intersection"<<endl;
    display(head);

    display(head2);

    int l1=length_of_list(head);
    int l2=length_of_list(head2);

    int x=l1>l2?l1-l2:l2-l1;

    cout<<find_intersection(head,head2,x);

}