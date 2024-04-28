#include<iostream>
using namespace std;
int fac(int n)
{
    int pro=1;
    for(int i=2;i<=n;i++)
    {
        pro=pro*i;
    }
    return pro;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n-i)
            cout<<" ";
            else
            cout<<fac(i)/(fac(i-j)*fac(j))<<" ";
        }
        cout<<endl;
    }
}

// i will be treated as n and j will be r       in nCr