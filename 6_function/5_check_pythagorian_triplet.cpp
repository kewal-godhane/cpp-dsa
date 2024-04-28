#include<iostream>
#include<cmath>
using namespace std;
bool triplet(int p,int h,int b)
{
    int a,x,y;
    a=max(h,max(p,b));
    if(a==p)
    {
        x=h;
        y=b;
    }
    else if(a==h)
    {
        x=p;
        y=b;
    }
    else
    {
        x=h;
        y=p;
    }
    if(a*a==(x*x)+(y*y))
    {
        return true;
    }
    else
    {return false;}
}
int main()
{
    int p,h,b;
    cin>>p>>h>>b;
    cout<<triplet(p,h,b);

}

