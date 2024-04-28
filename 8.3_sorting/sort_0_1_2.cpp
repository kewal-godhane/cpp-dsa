// check value of a[m]
// if 0, swap a[s] and a[m], s++,m++
// if 1, m++
// if 2, swap a[m]and a[e], e--
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a[]={0,2,1,1,0,2};
    int n=6;
    int s=0,m=0,e=n-1;
    while (m<=e)
    {
        if(a[m]==2)
        {
            int temp=a[m];
            a[m]=a[e];
            a[e]=temp;
            e--;

        }
        else if(a[m]==1)
        {
            m++;
        }
        else if(a[m]==0)
        {
            int temp=a[m];
            a[m]=a[s];
            a[s]=temp;
            s++;
            m++;
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i];
    return 0;
}