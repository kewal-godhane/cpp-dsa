// comparing the adjacent element and swaping
// after every while loop the biggest no. will reach at the rigth side of the array
#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int counter=1;
    while(counter<n){
        for(int i=0;i<(n-counter);i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
    bubble_sort(arr,n);
    display(arr,n);
}
