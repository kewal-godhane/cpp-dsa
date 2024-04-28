#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,0,1,1};
    int n=5;
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(arr[i]==0 && arr[j]==1)
        {
            i++;
            j--;
        }
        if(arr[i]==1 && arr[j]==0)
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++;
            j--;
        }
        if(arr[i]==1 && arr[j]==1)
        {
            j--;
        }
        if(arr[i]==0 && arr[j]==0)
        {
            i++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}