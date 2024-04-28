#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,0,7,2},count=0;
    for(int i=0;i<5;i++)
    {
        int sum=0;
        for(int j=i;j<5;j++)
        {
            sum+=a[j];
            cout<<sum;
            count++;
            cout<<endl;
        }
    }
    cout<<"number of sub array "<<count;
}
//sub array = n*(n+1)/2     //continuous
//subsequence = 2 to pow n