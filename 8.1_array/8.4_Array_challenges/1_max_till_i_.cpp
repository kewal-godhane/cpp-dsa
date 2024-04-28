#include<iostream>
using namespace std;
int main()
{
    int a[]={1,-9,77,-5,-4};
    int mx=INT_MIN;
    for(int i=0;i<5;i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<<endl;
    }
    
}