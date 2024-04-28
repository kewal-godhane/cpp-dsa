// we can not find factorial and then count the no. of zeros in it
// in this method we know that 2 * 5 are responsible for trailing 0 so we just have to find the no. of 5 upto that number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=5;i<=n;i=i*5)
    {
        ans=ans+(n/i);
    }
    cout<<ans;
    return 0;
}