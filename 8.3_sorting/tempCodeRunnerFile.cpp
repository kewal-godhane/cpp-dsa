int main()
{
    cout<<"Enter sizeof array";
    int n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
}