#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m],target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int r=0,c=m-1;
    bool fage=false;
    while(r<n && c>=0)
    {
        if(a[r][c]==target)
        {
            fage=true;
            break;
        }
        if(a[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if(fage)
    {
        cout<<"number is present";
    }
    else{
        cout<<"number does not exits";
    }
    return 0;
}