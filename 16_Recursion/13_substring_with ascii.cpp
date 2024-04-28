#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<vector<char>> vt;
// ascii recursion
void rec(string s,int i,vector<char> temp)
{
    if(i>=s.length())
    {
        vt.push_back(temp);
        return;
    }

    rec(s,i+1,temp);

    temp.push_back(s[i]);
    rec(s,i+1,temp);
    temp.pop_back();

    char ch=s[i];
    string ss=to_string(int(ch));
    for(int i=0;i<ss.length();i++){
    temp.push_back(ss[i]);}
    // temp.push_back((int)s[i]);
    rec(s,i+1,temp);


}
// normal substring recursion
void rec2(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    rec2(s.substr(1),ans);
    rec2(s.substr(1),ans+ch);
}
int main()
{
    string s="ab";
    vector<char> temp;
    rec(s,0,temp);
    // rec2(s,"");
    for(auto a:vt)
    {
        for(auto b:a)
        {
            cout<<b;
        }cout<<endl;
    }
    return 0;
}