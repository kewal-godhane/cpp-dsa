#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char maxch;
    int max=0;
    for(int i=0; i<s.length(); i++)
    {
        char ch=s[i];
        int count=0;
        for(int j=i; j<s.length(); j++)
        {
            if(ch==s[j])
            {
                count++;
            }
            if(count>max)
            {
                maxch=s[j];
                max=count;
            }
        }
    }
    cout<<maxch<<" :"<<max<<endl;
    return 0;
}