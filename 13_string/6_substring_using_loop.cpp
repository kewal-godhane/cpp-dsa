#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string ss="aba";
    vector<string> vt;
    for(int i=0;i<ss.length();i++)
    {
        string str="";
        for(int j=i;j<ss.length();j++)
        {
            str=str+ss[j];
            vt.push_back(str);
        }
    }
    for(auto a:vt)
    {
        for(auto i:a)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}