// implementation of stack
#include<bits/stdc++.h>
#include<iostream>
// #define n 100
using namespace std;
class stackk
{
    private:
    int* arr;
    int top;
    int n=100;
    public:
    stackk()
    {
        arr=new int[n];
        top=-1;

        cout<<" ddd"<<arr[5]<<endl;
    }
    void push(int val)
    {
        if(top==n-1)
        {
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"nothing to pop";
            return;
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"stack is empty";
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        return false;
    }
};
int main()
{
    stackk s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.empty();


    return 0;
}