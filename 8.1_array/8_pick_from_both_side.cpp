#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

    // prefix and suffix sum concept is used
    int arr[]={5,-2,3,1,2};
    int val=3;

    // making an array of prefix and suffix sum
    int front[6];  //prefix sum
    int back[6];   //suffix sum
    front[0]=0;
    back[0]=0;

    int prev_sum1=0;
    int prev_sum2=0;
    for(int i=0,j=5-1;i<5;i++,j--)
    {
        prev_sum1=prev_sum1+arr[i];
        front[i+1]=prev_sum1;

        prev_sum2=prev_sum2+arr[j];
        back[i+1]=prev_sum2;
    }

    int ans=INT_MIN;
    for(int i=0;i<val;i++)
    {
        int temp=front[i]+back[val-i];
        ans=max(ans,temp);
    }

    cout<<ans;

    // for(int i=0;i<6;i++)
    // {
    //     cout<<front[i]<<" ";
    // }cout<<endl;
    // for(int i=0;i<6;i++)
    // {
    //     cout<<back[i]<<" ";
    // }

    return 0;
}