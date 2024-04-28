#include<iostream>
using namespace std;
int sumtill(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sum=0;
    n=n+sumtill(n-1);
    return n;
}
int main()
{
    int n;
    cin>>n;
    cout<<sumtill(n);
}