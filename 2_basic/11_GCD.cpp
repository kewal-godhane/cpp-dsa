#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int gcd(int n,int m)
{
    if(m==0)
    {
        return n;
    }
    return gcd(m,n%m);
}

int main()
{
    int n=12,m=8;
    // method 1 { TC->o(min(m,n))
    // steps
    // 1. find the minimum of the two number 
    // 2. start from that no. go upto 1 and chech the divisibily with both the no. (as soon as we find break the loop)
    // gcd is also called hcf , lcm is opposite of hcf
    // hcf-> greatest no. which can divide both the no.
    // lcm -> smallest no. which is divisible by both the no.
    // steps to find lcm , find the max no. and then increment that no. untill that get divisible by both the no.
    for(int i=m;i>=1;i--)
    {
        if(n%i==0 && m%i==0)
        {
            cout<<i<<endl;
            break;
        }
    }

    // method 2 (optimize) O(log(min(a, b))
    // euclid algo in based on long division method(successive division)
    // https://www.google.com/url?sa=i&url=https%3A%2F%2Fbrainly.in%2Fquestion%2F22585827&psig=AOvVaw30DibjcLv5vJ2rSwiIg9En&ust=1675578935695000&source=images&cd=vfe&ved=0CBAQjRxqFwoTCMDb7oug-_wCFQAAAAAdAAAAABAE
    // divide the no. and the use that divisor as divident and reminder as divisor and continue this process untill we get 0
    cout<<gcd(n,m);
    return 0;
}