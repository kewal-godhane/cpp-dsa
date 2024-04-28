#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// do &(and) with that number and increase the count and then right shift the number with 1
// do this untill n become zero
int main()
{
    int n;
    cin>>n;
    int count=0;
    while (n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    cout<<count;
    return 0;
}