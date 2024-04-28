#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8]={3,4,5,2,1,9,7,8};
    // sort array
    sort(arr,arr+8);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i];
    }cout<<endl;
    // sort array descending
    sort(arr,arr+8,greater<int>());
    for(int i=0;i<8;i++)
    {
        cout<<arr[i];
    }
    return 0;
}