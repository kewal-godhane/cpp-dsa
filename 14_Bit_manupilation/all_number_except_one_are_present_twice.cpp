#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,2,1};
    int xorsum=0;
    for(int i=0;i<5;i++)
    {
        xorsum^=arr[i];
    }
    cout<<xorsum;
    return 0;
}