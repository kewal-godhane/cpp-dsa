#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Heap
{
    public:
    vector<int> vt;
    int size=0;
    void insert(int val)
    {
        size=size+1;
        vt.push_back(val);
        int index=size;
        while(index>1)
        {
            int parent=index/2;
            if(vt[parent]<vt[index])
            {
                int temp=vt[parent];
                vt[parent]=vt[index];
                vt[index]=temp;
                index=parent;
            }
            else return;
        }
    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<vt[i]<<" ";
        }
    }
};
int main()
{
    Heap h;
    h.insert(22);
    h.insert(44);
    h.insert(34);
    h.insert(56);
    h.insert(21);
    h.print();
    return 0;
}