#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n=3;
    vector<pair<int,int>>v;
    for(int i=0;i<3;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    for(auto a:v)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }
    int count=0;
    // while (1)
    // {
        
    // }
    
    return 0;
}