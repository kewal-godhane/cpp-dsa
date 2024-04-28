#include<iostream>
using namespace std;
int getbit(int n,int pos)
{
    return((n & (1<<pos))!=0);
}
int setbit(int n,int pos)
{
    return((n | (1<<pos)));

}
int clearbit(int n,int pos)
{
    int mask= ~(1<<pos);
    return(n & mask);
}
int updatebit(int n,int pos,int val)
{
    int mask= ~(1<<pos);
    n = n & mask;
    return(n | (val<<pos));
}
int main()
{
    int n,pos;
    cout<<"Enter number";
    cin>>n;
    cout<<"Enter position number";
    cin>>pos;
    cout<<getbit(n,pos);
    // cout<<setbit(n,pos);
    // cout<<clearbit(n,pos);
    // cout<<updatebit(n,pos,1);

    
}