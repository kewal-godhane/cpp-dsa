#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int Array_sum(int a[],int n,int i)
{
    if(i>=n)
    {
        return 0;
    }
    int sum=a[i]+Array_sum(a,4,i+1);
    return sum;
}
int Array_sum_upto_n(int a[],int n)
{
    if(n<0)
    {
        return 0;
    }
    int sum=a[n]+Array_sum_upto_n(a,n-1);
    return sum;
}
int digit_sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int sum=n%10+digit_sum(n/10);
    return sum;
}
int main()
{
    int a[4]={2,3,4,6};
    int arr[5]={1,1,2,6,1};
    cout<<Array_sum(a,4,0);
    cout<<Array_sum_upto_n(arr,3);
    cout<<digit_sum(2412);
    return 0;
}