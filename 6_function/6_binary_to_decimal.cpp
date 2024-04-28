#include<iostream>
using namespace std;
int binary_decimal(int n)
{
    int sum=0;
    int x,y=1;
    while(n!=0)
    {
        x=n%10;
        sum+=y*x;
        y*=2;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<binary_decimal(n);
    return 0;
}