#include<iostream>
using namespace std;
int op_pow(int n, int p)
{
    if(p==1)
    {
        return n;
    }
    if(p==0)
    {
        return 1;
    }
    if(p%2==0)
    {
        return op_pow(n,p/2)*op_pow(n,p/2);
    }
    else
        return n*op_pow(n,p/2)*op_pow(n,p/2);

}
int pow(int n, int p)
{
    if(p==1)
    {
        return n;
    }
    if(p==0)
    {
        return 1;
    }
    return n*pow(n,p-1);
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<op_pow(n,p);
}