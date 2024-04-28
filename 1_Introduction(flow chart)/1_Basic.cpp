#include<iostream>
using namespace std;
int main()
{
    //this is the code responsible to input/output from other file 
    #ifndef ONLINE_JUDGE
        freopen("Input.txt","r", stdin);
        freopen("Output.txt","w", stdout);
    #endif 

    int a,b;
    cin>>a>>b;
    cout<<a+b;

    return 0;


}