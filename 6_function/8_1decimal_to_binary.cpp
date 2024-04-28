#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int>vt;
string db1(int n)
{
    string s;
    while (n>0)
    {
        int rem=n%2;
        vt.push_back(rem);
        rem=rem+'0';
        s=s+(char)rem;
        n=n/2;
    }
    return s;
    
}
string db2(int n)
{
    string s;
    while (n!=0)
    {
        int c=n&1;
        c=c+48;
        s=s+(char)c;
        
        n=n>>1;
    }
    return s;
    
}
int main()
{
    int n;
    cin>>n;
    string ss;
    ss=db1(n); //first way
    // ss=db2(n);  //second way
    for(int i=ss.length();i>=0;i--)
    {
        cout<<ss[i];
    }
    // for(int i=vt.size()-1;i>=0;i--){
    //     cout<<vt[i];
    // }
    return 0;
}