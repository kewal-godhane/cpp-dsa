#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class conversion
{
    public:
    string toLowercase(string s)
    {
        for(int i=0 ; i<s.length() ; i++)
        {
            if(s[i]<97)
            {
                s[i]=s[i]+32;
            }
        }
        return s;
    }
    string toUppercase(string s)
    {
        for(int i=0 ; i<s.length() ; i++)
        {
            if(s[i]>97)
            {
                s[i]=s[i]-32;
            }
        }
        return s;
    }
};
int main()
{
    conversion c;
    string s;
    cin>>s;

    cout<<c.toLowercase(s)<<endl;
    cout<<c.toUppercase(s)<<endl;

    return 0;
}