#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int decimal_to_octal(int n)
{
    int re=0;
    int x=1;
    while(x<=n)
    {
        x*=8;
    }
    x/=8;
    while(x>0)
    {
        int lastdigi=n/x;
        n=n-lastdigi*x;
        x=x/8;
        re=re*10+lastdigi;
    }
    return re;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimal_to_octal(n);
    return 0;
}