// Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,r,sum=0;
    cin>>a;
    int s=a;
    while(a!=0)
    {
        r=a%10;
        sum=sum+pow(r,3);
        a=a/10;
    }
    if(sum==s)
    {
        cout<<"the number is armstrong";
    }
    else{
        cout<<"the number is not armstrong";
    }
    return 0;
}