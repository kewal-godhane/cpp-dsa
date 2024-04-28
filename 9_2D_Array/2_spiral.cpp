#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int row_start=0,row_end=n-1,coloumn_start=0,coloumn_end=m-1;
    while(row_start<=row_end && coloumn_start<=coloumn_end)
    {
        for(int coloumn=coloumn_start;coloumn<=coloumn_end;coloumn++)
        {
            cout<<a[row_start][coloumn]<<" ";
        }
        row_start++;

        for(int row=row_start;row<=row_end;row++)
        {
            cout<<a[row][coloumn_end]<<" ";
        }
        coloumn_end--;

        for(int coloumn=coloumn_end;coloumn>=coloumn_start;coloumn--)
        {
            cout<<a[row_end][coloumn]<<" ";
        }
        row_end--;

        for(int row=row_end;row>=row_start;row--)
        {
            cout<<a[row][coloumn_start]<<" ";
        }
        coloumn_start++;
    }
    
    return 0;
}