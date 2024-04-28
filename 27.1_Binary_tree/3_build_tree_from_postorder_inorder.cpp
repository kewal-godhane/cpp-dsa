#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node
{
    public:

    int data;
    node* left_node;
    node* right_node;

    node(int val)
    {
        data=val;
        left_node=NULL;
        right_node=NULL;
    }
};
int search(int postOrder[], int inOrder[], int curr,int start , int end)
{
    for(int i=start;i<=end;i++)
    {
        if(inOrder[i]==curr)
        {
            return i;
        }
    }
    return -1;

    
}
node* build(int postOrder[], int inOrder[],int start , int end )
{
    if(start>end)
    return NULL;

    static int idx=4;

    int curr=postOrder[idx];
    idx--;

    node* tree=new node(curr);


    if(start==end)
    return tree;

    int pos= search(postOrder,inOrder,curr,start,end);

    tree->right_node= build(postOrder, inOrder,start,pos-1);
    tree->left_node= build(postOrder, inOrder,pos+1,end);

    return tree;

}

void preorder(node* tree)
{
    if(tree==NULL)
    return;

    cout<<tree->data<<" ";

    preorder(tree->left_node);
    preorder(tree->right_node);

}
int main()
{
    int postOrder[]={5,3,4,2,1};
    int inOrder[]={4,2,1,5,3};
    node* tree=build(postOrder,inOrder,0,4);
    preorder(tree);
    return 0;
}