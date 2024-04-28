#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rec(string &s,int i)
{
    if(i>=s.length())
    {
        return;
    }
    rec(s,i+1);
    cout<<s[i];
}
int main()
{
    string s="abcd";
    rec(s,0);
    return 0;
}