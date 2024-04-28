#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1]={0};
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            count++;
            // cout<<i<<" ";
            for(int temp=i+i;temp<=n;temp=temp+i)
            {
                arr[temp]=1;
            }
        }
    }
    cout<<count;
    return 0;
}