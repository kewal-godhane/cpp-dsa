#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,start,end=0;
        cin>>a;
        int i=1;
        while(a>0)
        {
            start=a%10;
            end=(end*10)+start;
            a=a/10;
        }
        cout<<end<<endl;
    }
}