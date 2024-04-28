//time complexity O(n)
#include<iostream>
using namespace std;
int linearSearch(int arr[],int n ,int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return(i);
        }
    }
    return(-1);
}
int main()
{
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter key\n";
    cin>>k;
    cout<<linearSearch(arr,n,k);
}