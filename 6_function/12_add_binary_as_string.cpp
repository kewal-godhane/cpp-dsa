#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int num1;
    int num2;
    vector<int> v;
    int carry = 0;
    for(int i=0;i<s1.length() && i<s2.length();i++)
    {
        num1=(int)s1[(s1.length()-1-i)]-48;
        num2=(int)s2[(s2.length()-1-i)]-48;
        // cout<<lastnum1<<" "<<lastnum2<<endl;
        
        if (num1 == 1 && num2 == 1)
        {
            if (carry)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
            carry = 1;
        }
        else if (num1 == 0 && num2 == 0)
        {
            if (carry)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
            carry = 0;
        }
        else
        {
            if (carry)
            {
                v.push_back(0);
                carry = 1;
            }
            else
            {
                v.push_back(1);
                carry = 0;
            }
        }
        
        
    }
    if (carry)
    {
        v.push_back(1);
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }
    return 0;
}