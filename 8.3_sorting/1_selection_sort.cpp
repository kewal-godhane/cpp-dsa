// comparing every element with each other 
#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<(n-1);i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    cout<<"Enter sizeof array";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
}