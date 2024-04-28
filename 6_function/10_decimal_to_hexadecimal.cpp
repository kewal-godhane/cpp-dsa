#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string decimal_to_hexadecimal(int n)
{
    string re="";
    int x=1;
    while(x<=n)
    {
        x*=16;
    }
    x/=16;
    while(x>0)
    {
        int lastdigi=n/x;
        n=n-lastdigi*x;
        x=x/16;
        if(lastdigi<=9)
        re=re+to_string(lastdigi);
        else{
            char c ='A'+lastdigi-10;
            re.push_back(c);
        }
    }
    return re;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimal_to_hexadecimal(n);
    return 0;
}
