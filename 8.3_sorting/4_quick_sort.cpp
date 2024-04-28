// Quick sort is an algorithm of the divide and conqure type. that is the problem of sorting a set is reduced to the problem of sorting two smaller sets


// we start from end of the array and find its original position in sorted array , and then divide array from that point , now we have two array , follow this steps untill we do not have array to divide
// worst time ->n^2;    when array is already sorted or reverse sorted
// average time -> nlongn
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int partion(int arr[],int low, int high)
{
    int pivot=arr[high];
    int i=low-1;

    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            // swap
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    i++;
    int temp=arr[i];
    arr[i]=pivot;
    arr[high]=temp;

    return i;
    
}
void quickSort(int arr[],int low, int high)
{
    if(low<high)
    {
        int pidx=partion(arr,low,high);

        quickSort(arr,low,pidx-1);
        quickSort(arr,pidx+1,high);
    }
}
int main()
{
    int arr[5]={6,5,3,1,2};
    quickSort(arr,0,4);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}