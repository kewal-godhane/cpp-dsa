#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void swap_add(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"a="<<a<<" b="<<b<<endl;
}
void swap_multi(int a,int b)
{
    a=a*b;
    b=a/b;
    a=a/b;

    cout<<"a="<<a<<" b="<<b<<endl;
}
void swap_xor(int a,int b)
{
    a=a^b;
    b=a^b;
    a=a^b;

    cout<<"a="<<a<<" b="<<b<<endl;
}
int main()
{
    int a=10,b=5;
    swap_add(a,b);
    swap_xor(a,b);
    swap_multi(a,b);
    return 0;
}