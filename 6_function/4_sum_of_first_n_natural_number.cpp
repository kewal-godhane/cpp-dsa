#include<iostream>
using namespace std;

// The formula of the sum of first n natural numbers is S=n(n+1)2 
int sum(int n)  
{
    return(n*(n+1))/2;
}
int sums(int n)       
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;    //sum using a function
    cout<<sums(n);         //sum using loops
}