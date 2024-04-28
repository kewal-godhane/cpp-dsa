#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rec(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string ros=s.substr(1);
    rec(ros);
    cout<<s[0];
}
int main()
{
    string s="binod";
    rec(s);
    return 0;
}