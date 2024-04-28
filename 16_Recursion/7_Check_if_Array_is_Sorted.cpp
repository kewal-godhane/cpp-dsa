#include<iostream>
using namespace std;
bool sorted(int a[],int size)
{
    if(size==1)
    {
        return true;
    }
    return (a[0]<a[1] &&  sorted(a+1,size-1));
}
int main()
{
    int n[]={1,4,6,7,9};
    cout<<sorted(n,5);
}