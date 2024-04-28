#include<bits/stdc++.h>
using namespace std;
// How many 2s multiply together to make n?  -> log2(n)  
// log a(n)=x   means   a^x=n
int main()
{
    int n;
    cin>>n;
    if(log2(n)==ceil(log2(n)))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}