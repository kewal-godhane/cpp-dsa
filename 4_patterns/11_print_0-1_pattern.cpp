#include<iostream>
using namespace std;
int main()
{
    int k=1,l=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(((i+j)%2==0))
            cout<<k<<" ";
            else
            cout<<l<<" ";
        }
        cout<<endl;
    }
}
//effort
// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1