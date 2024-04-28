// loop from a to b , for every element between this two ,a loop checking the divisibity upto that number
#include<iostream>
using namespace std;
int main()
{
    int a,b,j;
    cin>>a>>b;
    for(int i=a;i<b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<" ";
            j=2;
        }
    }
}
