// nCr = n! / r! * (n - r)!
#include<iostream>
using namespace std;
int fac(int n)
{
    int pro=1;
    for(int i=1;i<=n;i++)
    {
        pro=pro*i;
    }
    return pro;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<fac(n)/(fac(n-r)*fac(r));
}