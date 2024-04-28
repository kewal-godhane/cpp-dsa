// kmp algorithum 
// add s to itself and make a string now search the other string in this big string(all the rotation combination will be there)

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s="aaaab";
    string ss="aabaa";
    string a=s+s;
    // cout<<a;
    int count=0;
    for(int i=0,j=0;i<a.length();i++)
    {
        if(a[i]==ss[j])            //searching for the first similar element
        {
            // cout<<ss[j];
            count++;
            if(count==ss.length())    //if second string has been traversed completely
            break;
            j++;
        }
        else 
        {
            if(count>0)     // do not increment i if we haven't find any similar element in the current iteration
            i--;
            j=0;          //if the next comming elements are not same then set pointer to the beginning of the second string
            count=0;
        }
    }
    // cout<<count;
    if(count==ss.length())
    {
        cout<<1;
    }
    else
    cout<<0;
 
    return 0;
}
