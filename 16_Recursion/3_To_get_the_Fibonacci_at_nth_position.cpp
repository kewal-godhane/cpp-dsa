#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0 ||n==1)
    {
        return n;
    }
    int sum;
    sum=fibo(n-1)+fibo(n-2);
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
}

// series
// #include<iostream>
// using namespace std;
// int fibo(int n)
// {
//     if(n==0 ||n==1)
//     {
//         return n;
//     }
//     else
//     return fibo(n-1)+fibo(n-2);
//     // return sum;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     cout<<fibo(i);
// }