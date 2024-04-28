// The Fibonacci sequence is a series of numbers where a number is the addition of the last two numbers, starting with 0, and 1. The Fibonacci Sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55…
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int t1=0;
    int t2=1;
    int next_term;
    for(int i=1;i<=n;i++)
    {
        // if(i==n)   //to find the nth fibonacci number
        cout<<t1<<" ";
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
    }
}