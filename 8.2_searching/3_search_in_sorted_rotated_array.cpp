#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// first find the pivot(min or max value of the array) 
// to find the pivot using binary search compare the mid element with end element 
// if mid is greater than end element then the smallest will be between mid and end else smallest element is between start and mid
// now binary search in the right and left part of the pivot to find the target 
int bs(vector<int>& arr, int n, int k,int s,int e)
{
    while(e-s>1)
    {
        int mid=(s+e)/2;
        if(arr[mid]==k)
            return mid;
        else if(arr[mid]>k)
        {
           e=mid;
        }
        else
            s=mid;
        
    }
    if(arr[s]==k)
        return s;
    else if(arr[e]==k)
        return e;
    else
        return -1;
}
int fp(vector<int>& arr, int n, int k){
    int s=0;
    int e=n-1;
    while(e-s>1)
    {
        int mid=(s+e)/2;
        if(arr[mid]>arr[e])
            s=mid;
        else
            e=mid;

	}
    if(arr[s]<arr[e])
    {
        return s;
    }
    else{
        return e;
    }
}
int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot=fp(arr,n,k);
    if(k>=arr[pivot] && k<=arr[n-1])
        return bs(arr,n,k,pivot,n-1);
    else
        return bs(arr,n,k,0,pivot);
}

int main()
{
    vector<int>vt={8 ,9 ,4 ,5};

    cout<<findPosition(vt,vt.size(),5);
    return 0;
}