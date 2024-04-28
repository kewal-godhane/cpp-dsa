#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=2;i<n;i++)    //sqrt(n)  could be use in place of n (one of the traits of number is that if they have a factor pair  one of the factors must be equal to or less than the square root)
    {
        if(n%i==0)
        {
            cout<<"not a prime";
            break;
        }
    }
    // cout<<i;
    if(i==n)
    {
        cout<<"It is prime";
    }
}

