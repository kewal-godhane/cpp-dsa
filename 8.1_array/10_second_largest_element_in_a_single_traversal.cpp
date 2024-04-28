#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,1,6,9,3};
    int first=0; 
    int second=-1;
    for(int i=1;i<5;i++)
    {
        if(arr[i]>arr[first])
        {
            second=first;
            first=i;
        }
        else if (arr[i] < arr[first]) {
        if (second == -1 || arr[second] < arr[i])
            second = i;
        }
    }
    if(second==-1)
    {
        cout<<"second higest no. does not exist";
    }
    else
    cout<<arr[second];
    return 0;
}
// Done by me
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=5;
//     int arr[]={5,4,3,2,1};
//     int ma=arr[0];
//     int se=-1;
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>ma)
//         {
//             se=ma;
//             ma=arr[i];
//         }
//         else if(arr[i]<ma)
//         {
//             if(se==-1 || se<arr[i])
//             se=arr[i];
//         }
//     }
//     cout<<se;
//     return 0;
// }