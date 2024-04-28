//time complexity O(log n)
//array has to be sorted
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n ,int k)
{
    int s=0;
    int e=n;
    while(s<=e)    //loop will be executed till s is equal or less than e
    {
        // int mid=(s+e)/2;     
        int mid=s+((e-s)/2);  //use this to stop int overflow in some condition
        if(k==arr[mid])
        {
            return(mid);
        }
        else if(k<arr[mid])
        {
            e=(mid-1);
        }
        else 
        {
            s=(mid+1);
        }
    }
    return(-1);
}
int main()
{
    int n;
    // cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    // cout<<"Enter key\n";
    cin>>k;
    cout<<BinarySearch(arr,n,k);
}