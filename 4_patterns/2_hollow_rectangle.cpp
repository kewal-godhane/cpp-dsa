#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"enter a no. of rows\n";
    cin>>r;
    cout<<"enter a no. of column\n";
    cin>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(i==1 || i==r ||j==1 || j==c)
            cout<<"* ";
            else 
            cout<<"  ";
        }
        cout<<endl;
    }
}