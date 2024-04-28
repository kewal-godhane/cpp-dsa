#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4};
    int n=4;
    vector<vector<int>> super;
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        temp.push_back(a[i]);
        super.push_back(temp);
        for(int j=i+1;j<n;j++)
        {
            temp.push_back(a[j]);
            super.push_back(temp);
        }
    }
    for(auto a:super)
    {
        for(auto b:a)
        {
            cout<<b;
        }cout<<endl;
    }
    return 0;
}