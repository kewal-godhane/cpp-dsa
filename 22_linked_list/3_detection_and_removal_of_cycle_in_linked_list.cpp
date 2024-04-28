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
void make_cycle(node* head,int pos)
{
    int count=1;
    node* temp=head;
    node* s;
    while(temp->next!=NULL)
    {
        if(pos==count){
        s=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=s;
    
}
// rabit tortoise algo
bool detection_of_cycle(node* head)
{
    node* slow=head;
    node* fast=head;
    while(fast->next!=NULL && fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}
void removal_of_cycle(node* &head )
{
    node* slow=head;
    node* fast=head;
    while(1)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            // return true;
            fast=head;
            break;
        }
    }
    // do
    // {
    //     slow=slow->next;
    //     fast=fast->next->next;
    // } while (slow!=fast);
    // fast=head;
    while (slow->next!=fast->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;
    
}
int main()
{
    node* head=NULL;
    insert_node_at_tail(head,1);
    insert_node_at_tail(head,3);
    insert_node_at_tail(head,4);
    insert_node_at_tail(head,5);
    insert_node_at_tail(head,7);
    display(head);
    make_cycle(head,2);
    // display(head);
    cout << detection_of_cycle(head)<<endl;
    removal_of_cycle(head);
    cout << detection_of_cycle(head)<<endl;
    display(head);
    // insert_at_head(head,2);
    // // delete_at_head(head);
    // // delete_node(head,3);
    // display(head);
    // node* newhead=reverseListrecursively(head);
    // display(newhead);

}