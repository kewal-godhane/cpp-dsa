#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int b[5],sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
        b[i]=sum;
    }
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}