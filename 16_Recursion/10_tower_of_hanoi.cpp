#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void toh(int n ,char src ,char des ,char helper,int &c)
{
    if(n==0)
    {
        return;
    }

    toh(n-1,src,helper,des,c);
    // cout<<"move "<<src<<" to "<<des<<endl;
    c++;
    toh(n-1,helper,des,src,c);
}
int main()
{
    int c=0;
    toh(3,'A','C','B',c);
    cout<<c;
    return 0;
}