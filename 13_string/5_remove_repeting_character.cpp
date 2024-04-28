#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s,result="";
    cin>>s;
    int hash[123]={0};
    for(int i=0; i<s.length(); i++)
    {
        if(hash[s[i]]==0)
        {
            hash[s[i]]=1;
            result+=s[i];
        }
    }
    // sort(result.begin(),result.end());
    cout<<result;
    return 0;   
}