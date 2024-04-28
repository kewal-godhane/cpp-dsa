#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    map<int,int>m;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]=m[a[i]]+1;
    }
    for(auto a:m)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }
    return 0;
}