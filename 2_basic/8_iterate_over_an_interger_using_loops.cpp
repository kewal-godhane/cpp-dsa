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
            end=end+start*i;
            a=a/10;
            i=i*10;
        }
        cout<<end<<endl;
    }
}