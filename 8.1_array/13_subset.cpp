#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void fun(int arr[],int i,int n,vector<int>temp,vector<vector<int>> &v){
    if(i>=n){
        v.push_back(temp);
        return;
    }
    fun(arr,i+1,n,temp,v);
    temp.push_back(arr[i]);
    fun(arr,i+1,n,temp,v);

}
int main()
{
    int arr[]={1,2,3};
    int n=3;
    vector<int>temp;
    vector<vector<int>>v;
    fun(arr,0,n,temp,v);
    for(auto a:v){
        for(auto b:a)
        {
            cout<<b<<" ";

        }cout<<endl;
    }
    return 0;
}