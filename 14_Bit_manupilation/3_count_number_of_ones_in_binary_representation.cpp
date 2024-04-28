#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=0;
    while(n>0)
    {
        n=n&(n-1);
        p++;
    }
    cout<<p;
    return 0;
}