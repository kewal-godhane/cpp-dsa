#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=0;
    // first way
    while(n>0){
    if(n/pow(2,p)==1)
    {
        cout<<"number is power of 2";
        break;
    }
    p++;
    if(pow(2,p)>n)
    {
        cout<<"no";
        break;
    }
    }
    // second way
    // if(((n)&(n-1))==0)
    // {
    //     cout<<"number is power of 2";
    // }
    // else
    // {
    //     cout<<"number is not a power of 2";
    // }
    // return 0;
}