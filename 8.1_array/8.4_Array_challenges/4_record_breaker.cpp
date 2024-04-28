#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int greatest=a[0];
        int ans=0;
        int j=1;
        if(a[0]>a[1])
        ans++;
        while(j<n)
        {
            if(j==(n-1))
            {
                int mx=max(greatest,a[j]);
                if(mx==a[j])
                ans++;
            }
            else if(a[j]>a[j+1] && a[j]>greatest)
            {
                ans++;
            }
            if(a[j]>greatest)
            greatest=a[j];
            j++;
        }
        // cout<<greatest<<" ";
        cout<<ans<<endl;
    }
    return 0;
}