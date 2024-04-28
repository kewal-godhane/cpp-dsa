/*Tree
A tree is a hierarchical data sturcture
A tree is defined as a finite set of one or more data items(node) such that - 
-there is a special node called the root of the tree
-the remaining nodes are partitioned into n>=0 disjoint subsets each of which is itself a tree and they are called subtree

Terminologies-
1.Degree - the number of subtree of a node is called its degree
2.leaf - A node with degree zero is called leaf
3.terminal nodes - the leaf nodes are also called terminal nodes
4.degree of tree - the degree of the tree is maximum degree of the nodes in the tree
5.Ancestors - the ancestors of a node are all the nodes along the path from the root to that node
6.Descendants - the descendants of a node are all the nodes along the path from node to terminal node
7.level number - each node is assigned a level number. the root node of the tree is assigned a level number 0. every other nde assign a level number which is 1 more than the level number of its parent
8.Generation - Nodes with the sme level number are said to belong to the same generation
9.Height/Depth - the height or depth of a tree is the maximum number of nodes in a branch 
10.edge - a line drawn from a node N of T to a successor is called an edge
11.Path - Sequence of consecutive edges is called path
12.Branch - Path ending in a leaf is called a branch 

Binary tree-:
A binary tree T is defined as a finite set of elements, called nodes such that -
-T is empty(called the null tree or empty tree), or
-T contains a distinguished node R called the root of T, and the remaining nodes of T form an ordered pair of disjoint binary trees T1 and T2.

The root of T is the node A at the top of the diagram
A left downward slantes line from a node N indicates a left successor of N, and a right downward slanted line from N indicates a right successor of N

Compelete binary tree is defined as a binary tree whose non leaf nodes have non empty left and right sub-tree and all leaves are at the same level



binary tree ->can have maximum two child
root node,branches, leaf node
properties of binary trees
1.Maximum nodes at level L= 2^L; //root node is at 0 level
2.Maximum nodes in a tree of height H is 2^H-1
3.for N nodes minimum possible height or minimum number of levels are log(N+1)
4.A binary tree with L leaves has at least log(N+1)+1 number of levels
*/

#include<iostream>
#include<bits/stdc++.h>
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

//Binary tree traversal

//1.preorder traversal -> root then left subtree then right subtree
                //      1
                //     /  \
                //    2    3
                //   / \   / \
                //  4   5  6   7
//    appling preorder traversal we have 1 2 4 5 3 6 7 

void pre_order_traversal(struct tree* root)  //using recursion
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    pre_order_traversal(root->left_node);
    pre_order_traversal(root->right_node);
}

//2.Inorder traversal -> left subtree then root then right subtree (cannot add root untill left tree has been traversed)
                //      1
                //     /  \
                //    2    3
                //   / \   / \
                //  4   5  6   7
//    appling Inorder traversal we have 4 2 5 1 6 3 7 

void Inorder_traversal(struct tree* root){
    if(root==NULL)
    {
        return;
    }
    Inorder_traversal(root->left_node);
    cout<<root->data;
    Inorder_traversal(root->right_node);
}

//3.Postorder traversal -> left subtree right subtree root
                //      1
                //     /  \
                //    2    3
                //   / \   / \
                //  4   5  6   7
//    appling postorder traversal we have 4 5 2 6 7 3 1 
void Postorder_taversal(struct tree* root)
{
    if(root==NULL)
    {
        return;
    }
    Postorder_taversal(root->left_node);
    Postorder_taversal(root->right_node);
    cout<<root->data;
}

// 4. level order traversal(bfs) -> level by level (without using recursion)
void level_order_traversal(struct tree* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<tree*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        tree* currNode=q.front();
        q.pop();
        if(currNode==NULL) 
        {
            cout<<endl;
            if(q.empty())
            {
                break;
            }
            else{
                q.push(NULL);
            }
        }
        else{
            cout<<currNode->data;
            if(currNode->left_node!=NULL)
            {
                q.push(currNode->left_node);
            }
            if(currNode->right_node!=NULL)
            {
                q.push(currNode->right_node);
            }
        }
    }
}

void level_order_traversal_myway(struct tree* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<tree*>q;
    q.push(root);
    while(!q.empty())
    {
        tree* currNode=q.front();
        q.pop();
        cout<<currNode->data;
        q.push(currNode->left_node);
        q.push(currNode->right_node);
    }
}

int main()
{
    struct tree* root = new tree(1);
    root->left_node = new tree(2);
    root->right_node = new tree(3);
    //    1
    //   /  \
    //  2    3
    root->left_node->left_node = new tree(4);
    root->left_node->right_node = new tree(5);
    root->right_node->left_node = new tree(6);
    root->right_node->right_node = new tree(7);
    //     1
    //    /  \
    //    2    3
    //   / \   / \
    //  4   5  6   7

    // pre_order_traversal(root);
    // Inorder_traversal(root);
    // Postorder_taversal(root);
    level_order_traversal(root);
    // level_order_traversal_myway(root);

}

    


// void traverse(struct tree* root)
// {
//     struct tree* temp=root;
//     cout<<"root "<<temp->data<<endl;
//     while(temp->left_node!=NULL){
//         cout<<"left part of tree"<<endl;
//         cout<<"right "<<temp->right_node->data<<endl;
//         cout<<"left "<<temp->left_node->data<<endl;
//         temp=temp->left_node;
//     }
// }