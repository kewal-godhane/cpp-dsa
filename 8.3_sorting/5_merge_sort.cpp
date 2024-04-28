
// merge sort is based on divide and conqure -> first we divide the array untill there is only one element left ,then
// we conqure(merge) them by adding the two divided array by copying there value to new array , and make the changes in original array using that new array

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void concure(int arr[],int start,int mid, int end)
{
    int size=(end-start)+1;
    int merge[size];

    int idx1=start;
    int idx2=mid+1;

    int x=0;
    while (idx1<=mid && idx2<=end)
    {
        if(arr[idx1]<arr[idx2])
        {
            merge[x]=arr[idx1];
            x++;idx1++;
        }
        else
        {
            merge[x]=arr[idx2];
            x++;
            idx2++;
        }
    }

    while (idx1<=mid)
    {
        merge[x]=arr[idx1];
        x++;
        idx1++;
    }

    while (idx2<=end)
    {
        merge[x]=arr[idx2];
        x++;
        idx2++;
    }
    
    for(int i=0,j=start;i<size;i++,j++)
    {
        arr[j]=merge[i];
    }
    
    
}

void divide(int arr[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        divide(arr,start,mid);
        divide(arr,mid+1,end);
        concure(arr,start,mid,end);
    }
}
int main()
{
    int arr[6]={6,5,3,1,2,0};
    divide(arr,0,5);

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}