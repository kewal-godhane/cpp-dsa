#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool pal(string s,int i,int j)
{
    if(i>=j)
    {
        return true;
    }
    if(s[i]!=s[j])
    {
        return false;
    }
    return pal(s,i+1,j-1);
    
}
int main()
{
    string s="abcba";
    int j=s.length()-1;
    cout<<pal(s,0,j);
    return 0;
}