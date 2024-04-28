// euclid algo in based on long division method(successive division)
// divide the no. and the use that divisor as divident and reminder as divisor and continue this process untill we get 0

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int gcd2(int a,int b)
{
    if(b==0)
    return a;
    return gcd2(b,a%b);
}

int gcd1(int a,int b)
{
    int divisor=a;
    int divident=b;
    int rem=divident%divisor;
    if(rem==0)
    {
        return divisor;
    }
    else
    {
        divident=divisor;
        divisor=rem;
        return gcd1(divisor,divident);
    }

}
int main()
{
    int a,b;
    cin>>a>>b;

    cout<<gcd1(a,b)<<endl;
    cout<<gcd2(a,b)<<endl;

    // LCM = a*b/gcb(a,b)
    return 0;
}