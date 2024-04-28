#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void swapp(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void sort(int arr[],int n)
{
    int counter=1;
    while (counter<n)
    {
        for(int i=0;i<(n-counter);i++)
        {
            if(arr[i]>arr[i+1])
            swapp(arr[i],arr[i+1]);
        }
        counter++;
    }
    
}
int main()
{
    int arr[6]={12,5,6,4,1,14};
    sort(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}