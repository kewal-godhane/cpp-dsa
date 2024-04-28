// in complete binary tree leaf node are from n/2+1 to n
// where n is the size of the tree
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Heap
{
    public:
    int arr[100];
    int size=0;
    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;
        while (index>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index])
            {
                int temp=arr[parent];
                arr[parent]=arr[index];
                arr[index]=temp;
                index=parent;
            }
            else
            return;
        }
        
    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    void deletee()
    {
        // step 1: put last element in first index
        arr[1]=arr[size];
        // step 2: remove last element
        size--;

        // step 3: take root node to its correct position
        int i=1;
        while(i<=size)
        {
            int left_child=2*i; // to find left_child
            int right_child=2*i+1;   // to find right child
            int k=max(arr[left_child],arr[right_child]);
        
            if(arr[i]<arr[left_child] && left_child<=size && arr[left_child]>arr[right_child])
            {
                swap(arr[i],arr[left_child]);
                i=left_child;
            }
        
            if(arr[i]<arr[right_child] && right_child<=size && arr[left_child]<=arr[right_child])
            {
                swap(arr[i],arr[right_child]);
                i=right_child;
            }
        
            else return;
        }
    }
};

int main()
{
    Heap h;
    h.insert(22);
    h.insert(44);
    h.insert(34);
    h.insert(56);
    h.insert(21);
    h.insert(57);
    h.deletee();
    // h.deletee();
    h.print();
    return 0;
}