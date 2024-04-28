#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int N=10e5+10;
char dp[N];
string rec(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans =rec(s.substr(1));//give sustring from 1 to the end
    if(ans[0]==ch)
    {
        return ans;
    }
    else
    {
        return ch+ans;
    }


}
int main()
{
    string s="aaadhhhhddd";
    cout<<rec(s);
    return 0;
}