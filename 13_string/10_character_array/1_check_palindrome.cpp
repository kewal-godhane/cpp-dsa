#include<iostream>
using namespace std;
int main()
{
    char a[10];
    cout<<"enter a string";
    cin>>a;
    int add=0,i=0;
    while(a[i]!='\0')
    {
        add+=1;
        i++;
    }
    cout<<i;
    bool dd=true;
    for(int j=0;j<i;j++){
    if(a[j]!=a[i-1-j])
    {
        dd=false;
    }
    }
    if(dd)
    {
        cout<<"this is palindrome";
    }
    else{
        cout<<"this is not a palindrome";
    }
}