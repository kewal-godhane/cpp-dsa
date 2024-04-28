#include<iostream>
using namespace std;
int main()
{

    int a;
    int sum=0;
    // cout<<"enter a number";
    cin>>a;
    while(a!=-1)
    {
        if(a%2!=0)
        cout<<a<<endl;
        cin>>a;
    }

}

// taking input untill user gives a negative number , and then print the sum of the numbers received