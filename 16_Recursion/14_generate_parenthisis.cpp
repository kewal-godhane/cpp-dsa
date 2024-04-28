#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<string>vt;
void generate(int total,int open, int close,string &temp)
{
    if(open<=0 && close<=0)
    {
        vt.push_back(temp);
        return;
    }
    if(open>0)
    {
        temp.push_back('(');
        generate(total,open-1,close,temp);
        temp.pop_back();
    }
    if(open<close && close>0)
    {
        temp.push_back(')');
        generate(total,open,close-1,temp);
        temp.pop_back();
    }

}
int main()
{
    int n=2;
    string temp;
    generate(n,n,n,temp);
    for(auto a:vt)
    {
        for(auto b:a)
        {
            cout<<b;
        }cout<<endl;
    }
    return 0;
}