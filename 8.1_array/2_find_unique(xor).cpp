#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a[7]={1,3,4,3,4,1,9};
    int xorr=0;
    for(int i=0;i<7;i++)
    {
        xorr=a[i]^xorr;
    }
    cout<<xorr;
    return 0;
}