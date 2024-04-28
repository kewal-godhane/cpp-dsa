#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// moved at the end of the string , if the last character is x ,add that character in the end of the string,if not add that char in the starting 
string rec(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans =rec(s.substr(1));
    if(ch=='x')
    {
        return ans+ch;
    }
    else
    {
        return ch+ans;
    }
}
int main()
{
    string s="axhhxxxdd";
    cout<<rec(s);
    return 0;
}