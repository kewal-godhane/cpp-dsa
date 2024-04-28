#include<iostream>
using namespace std;
struct tree
{
    int data;
    struct tree* right_node;
    struct tree* left_node;

    tree(int val)
    {
        data=val;
        right_node=NULL;
        left_node=NULL;
    }
};

// function to search for current element in inorder
int search(int inorder[], int start, int end, int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}
tree* buildTree(int preorder[],int inorder[],int start ,int end)
{
    static int idx=0;
    // base case
    if(start>end)
    {
        return NULL;
    }

    int curr=preorder[idx];
    idx++;
    tree* node=new tree(curr);

    // special case
    if(start==end)
    {
        return node;
    }

    int pos=search(inorder,start,end,curr);
    
    // building the left part
    node->left_node= buildTree(preorder, inorder,start,pos-1);
    node->right_node= buildTree(preorder, inorder,pos+1,end);

    return node;
}

void Inorder_traversal(struct tree* root){
    if(root==NULL)
    {
        return;
    }
    Inorder_traversal(root->left_node);
    cout<<root->data;
    Inorder_traversal(root->right_node);
}
int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    //build tree
    tree* root=buildTree(preorder,inorder,0,4);
    Inorder_traversal(root);

    return 0;
}

// pseudo code
// 1.