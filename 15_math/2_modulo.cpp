#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// mod->1000000007;
// (a+b)%m = ((a%m)+(b%m))%m
// (a*b)%m = ((a%m)*(b%m))%m
// (a+b)%m = ((a%m)-(b%m)+m)%m


// a % m the result will definitly be smaller than m 

// we use mod to maintain the number in int range
// property of % if numerator in small then ans will be numerator
int main()
{
    int m=10e9+7;   // approx range of int  
    int n;
    cin>>n;
    int fac=1;
    for(int i=2;i<=n;i++)
    {
        fac=(fac*i)%m;
    }

    cout<<fac;
    return 0;
}