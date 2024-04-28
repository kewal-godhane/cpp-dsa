#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s={"883747393023"};
    sort(s.begin(),s.end(),greater<char>());
    cout<<s;
    return 0;
}