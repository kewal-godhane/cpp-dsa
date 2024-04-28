// markov process -> process which depends only on the previous state

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,5,10,20,50,100,200,500,2000};
    int val=3;
    int num=val;
    int i=9;
    int count=0;
    while (val>0)
    {
        if(arr[i]<=val)
        {
            count++;
            val=val-arr[i];
        }  
        else  
        i--;
    }
    cout<<count;
    
    return 0;
}