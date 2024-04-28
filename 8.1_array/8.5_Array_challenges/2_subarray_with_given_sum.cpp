#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long n;
    cin>>n;
    long long arr[n];
    long long s;
    cin>>s;
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long sum=0;
    long long sindex=0,eindex=0;
    long long i=0,j=0;
    while(sum<s && i<n)
    {
        sum=sum+arr[i];
        sindex=j;
        eindex=i;
        i++;
    }
    if(sum!=s){
        while(sum!=s && j<n)
        {
        sum=sum-arr[j];
        sindex=++j;
        }
    }
    if(sum==s)
    cout<<sindex+1<<" "<<eindex+1<<endl;
    else
    cout<<-1<<endl;
    }
    
    return 0;
}