#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isvowel(char al)
{
    bool islowercasevowel;

    islowercasevowel=(al=='a' || al=='e' || al=='i' || al=='o' || al=='u' );

    if(islowercasevowel)
    {
        return true;
    }
    else
    return false;
}
int main()
{
    string ss="aba";
    vector<string> vt;
    int i=0;
    int j=i;
    while (i<ss.length())
    {
        string str="";
        if(isvowel(ss[i]))
        {
            if(!isvowel(ss[j]))
            {
                str=str+ss[j];
                vt.push_back(str);
                j++;
            }
            else
                j++;
            
        }
        else i++;
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