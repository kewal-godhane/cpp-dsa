// https://www.codingninjas.com/codestudio/problems/shuffle-two-strings_1115692?topList=love-babbar-dsa-sheet-problems


// not running
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool find(string a,string c,map<char,int> mp)
{
    int i=0;
    int j=0;
    while(j<c.length())
    {
        if(a[i]==c[j])
        {
            mp[c[j]]=1;
            i++;
            if(i>=a.length())
            {
                break;
            }
        }
        j++;
    }
    if(i==a.length())
    {
        return true;
    }
    else
        return false;
}
int main()
{

    string a="aab";
    string b="abc";
    string c="aaabbc";
    map<char,int> mp;
    for(int i=0;i<c.length();i++)
    {
        mp[c[i]]=0;
    }    
    bool check1=find(a,c,mp);
    bool check2=find(b,c,mp);
    int count=0;
    for(int i=0;i<c.length();i++)
    {
        if(mp[c[i]]>0)
        {
            count++;
        }
    }
    if(check1 && check2 && count==c.length())
    {
        cout<< true;
    }
    else
        cout<< false;
    return 0;
}