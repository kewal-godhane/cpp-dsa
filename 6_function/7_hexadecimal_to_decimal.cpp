#include<iostream>
using namespace std;
int hexa_decimal(string n)
{
    int sum=0;
    int x,y=1;
    for(int i=n.size()-1;i>-1;i--)
    {
        // x=n%10;
        if(n[i]>='A' && n[i]<='F')
        {
            n[i]=n[i]-'A'+10;
        }
        else if(n[i]>='0' &&n[i]<='9')
        {
            n[i]=n[i]-'0';
        }
        // cout<<n[i]<<" ";
        sum+=y*n[i];
        y*=16;
        // n/=10;
    }
    return sum;
}
int main()
{
    string n;
    cin>>n;
    // char a='42';
    // cout<<(int)a;
    cout<<hexa_decimal(n);

    return 0;
}