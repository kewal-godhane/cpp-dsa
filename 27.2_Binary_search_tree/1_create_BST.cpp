// we are recursively creating the nodes to BST
#include<bits/stdc++.h>
using namespace std;

// defining the node
class tree
{
    public:
    int data;
    tree* left;
    tree* right;

    tree(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

// creating the bst(recursively)
tree* insert(tree* root,int val)
{
    if(root==NULL)
    {
        root=new tree(val);
        return root;
    }

    if(root->data>val)
    {
        root->left=insert(root->left,val);
    }
    else
    {
        root->right=insert(root->right,val);
    }
    return root;
}
// inorder traversal to check if we have built the bst correctly or not
void traversal(tree* root)
{
    if(root==NULL)
    {
        return;
    }
    traversal(root->left);
    cout<<root->data<<" ";
    traversal(root->right);

}
// finding the key
bool findd(tree* root , int val)
{
    if(root==NULL)
    return false;

    if(root->data==val)
    {
        return true;
    }
    else if(root->data>val)
    {
        return findd(root->left,val);
    }
    else
    return findd(root->right,val);
}
int main()
{
    int arr[]={5,1,3,4,2,7};
    tree* root=NULL;
    // making the bst using array
    for(int i=0;i<6;i++)
    {
        root=insert(root,arr[i]);
    }
    // traversing the bst;
    // traversal(root);

    // finding the key in bst
    int key=7;
    cout<<findd(root,key); 
    return 0;
}