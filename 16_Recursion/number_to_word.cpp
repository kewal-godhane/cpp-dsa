// converting a number in to word
// ex  123  -> one two three

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void re(int n)
{
    if(n==0)
    {
        return;
    }
    re(n/10);
    int nu=n%10;
    cout<<s[nu]<<" ";
}
int main()
{
    // cout<<s[1];
    int n;
    cin>>n;
    re(n);
    // int last;
    // while (n!=0)
    // {
    //     last=n%10;
    //     cout<<s[last]<<" ";
    //     n/=10;
    // }
    
    return 0;
}

