#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void repi(string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        repi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        repi(s.substr(1));
    }

}
int main()
{
    string s="pppiccpicsc";
    repi(s);
    // for(int i=0;i<s.length();i++)
    // {
    //     if(s[i]=='p' &&s[i+1]=='i')
    //     {
    //         cout<<"3.14";
    //         i=i+1;
    //     }
    //     else{
    //         cout<<s[i];
    //     }
    // }
    return 0;
}