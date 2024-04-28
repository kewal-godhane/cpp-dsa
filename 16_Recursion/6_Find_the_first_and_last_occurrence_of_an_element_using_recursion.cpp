#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void find(int* arr,int s,int n,int array[])
{
    // static vector<int> v;
    static int fage=0;
    if(s==0)
    {
        return ;
    }
    static int firstocc;
    static int lastocc;
    static int la=0;
    if(*arr==n && la==0)
    {
        // cout<<*arr<<" ";
        firstocc=fage;
        la=1;
        array[0]=firstocc;
        // v.push_back(firstocc);
    }
    if(*arr==n && la==1)
    {
        // cout<<*arr<<" ";
        lastocc=fage;
        array[1]=lastocc;
        // v.push_back(lastocc);
    }
    fage++;
    // cout<<*arr<<" ";
    find(arr+1,s-1,n,array);
    
    return ;

}
int main()
{
    int a[]={1,2,3,4,1,2,3};
    int n=3;
    int first;
    int last;
    int array[2];
    find(a,7,n,array);
    cout<<array[0]<<" "<<array[1];
    // int first;
    // int second;
    // int flag=0;
    // for(int i=0;i<7;i++)
    // {
    //     if(a[i]==n && flag==0)
    //     {
    //         first=i;
    //         flag=1;
    //     }
    //     if(a[i]==n && flag==1)
    //     {
    //         second=i;
    //     }
    // }
    // cout<<first<<" "<<second;
    
    // return 0;
}