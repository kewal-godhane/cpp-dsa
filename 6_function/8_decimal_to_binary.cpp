#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int decimal_to_binary_easy_way(int n)
{
    // using bit manupilation
    int num=0;
    while(n)
    {
        if(n&1==1)
        {
            num=num*10+1;
        }
        else{
            num=num*10+2;     //zero making some problem to temperory storing 2
        }
        n=n>>1;
    }

    int ans=0;
    while(num)
    {
        int re=num%10;
        if(re==2)
        ans=ans*10+0;
        else 
        ans=ans*10+re;
        num=num/10;
    }
    return ans;
    
}
int decimal_to_binary(int n)
{
    int re=0;
    int x=1;
    while(x<=n)
    {
        x*=2;
    }
    x/=2;
    while(x>0)
    {
        int lastdigi=n/x;
        n=n-lastdigi*x;
        x=x/2;    
        re=re*10+lastdigi;
    }
    return re;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimal_to_binary_easy_way(n)<<endl;
    int s;
    vector<int>v;
    while(1)
    {
        if(n<=0)
        {
            break;
        }
        s=n%2;
        v.push_back(s);
        n=n/2;
    }
    // for(int i=v.size()-1;i>=0;i--)
    // {
    // cout<<v[i];
    // }
    // return 0;
}