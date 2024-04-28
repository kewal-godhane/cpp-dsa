#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s,re=" ";
    cin>>s;
    vector<char>v;
    char maxch;
    int max=0;
    for(int i=0; i<s.length(); i++)
    {
        char ch=s[i];
        int count=0;
        for(int j=i+1; j<s.length(); j++)
        {
            if(ch==s[j])
            {
                count++;
            }
            else
            re[j]=s[j];
            if(count>max)
            {
                maxch=s[j];
                max=count;
            }
        }
    }
    // cout<<maxch<<" :"<<max<<endl;
    
    cout<<re;
    return 0;
}