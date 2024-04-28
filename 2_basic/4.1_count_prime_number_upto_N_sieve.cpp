#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// Sieve method
// start from 2 make all the element (upto N) false which comes in the table of  prime numbers


//1 is not a prime the definition of prime is , it should contain 2 factor but in case of 1 it has only one factor
int main()
{
    int N;
    cin>>N;
    int count=0;
    vector<bool> vt(N+1,true);
    // vt[0]=vt[1]=false;
    for(int i=2;i<N;i++)
    {
        if(vt[i]==true)
        {
            count++;
            for(int j=i;j<N;j=j+i)
            {
                vt[j]=false;
            }
        }

    }
    cout<<count;
    return 0;
}