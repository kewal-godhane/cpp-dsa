// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
// xor full the array with itself (the number which is present thrice is left(this is the answer))
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a[7]={2,3,4,5,6,3,1};
    int xorr=0;
    for(int i=0;i<7;i++)
    {
        xorr=a[i]^xorr;
    }
    // cout<<xorr;
    // we know the range
    for(int i=1;i<7;i++)
    {
        xorr=xorr^i;
        
    }
    cout<<xorr;
    return 0;
}
// method 2
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[7]={2,3,4,5,6,7,1};
//     int sum=0;
//     for(int i=0;i<7;i++)
//     {
//         sum=sum+a[i];
//     }
//     int temp=(6*(6+1))/2;
//     cout<<sum-temp;
//     return 0;
// }