#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a[7]={2,3,4,5,6,7,1};
    int sum=0;
    for(int i=0;i<7;i++)
    {
        sum=sum+a[i];
    }
    int temp=(6*(6+1))/2;
    cout<<sum-temp;
    return 0;
}