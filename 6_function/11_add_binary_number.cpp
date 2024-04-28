#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void bsum(int a, int b)
{
    int re;
    vector<int> v;
    int carry = 0;
    while (a > 0 && b > 0)
    {
        int num1 = a % 10;
        int num2 = b % 10;
        if (num1 == 1 && num2 == 1)
        {
            if (carry)
            {
                v.push_back(1);
                // re=re*10+1;
                // carry=1;
            }
            else
            {
                v.push_back(0);
                // re=re*10+0;
                // carry=1;
            }
            carry = 1;
        }
        else if (num1 == 0 && num2 == 0)
        {
            if (carry)
            {
                v.push_back(1);
                // re=re*10+1;
            }
            else
            {
                v.push_back(0);
                // re=re*10+0;
            }
            carry = 0;
        }
        else
        {
            if (carry)
            {
                v.push_back(0);
                // re=re*10+0;
                carry = 1;
            }
            else
            {
                v.push_back(1);
                // re=re*10+1;
                carry = 0;
            }
        }
        a /= 10;
        b /= 10;
    }
    while (a > 0)
    {
        int num1 = a % 10;
        if (num1 == 0)
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
            }
        }
        a /= 10;
    }
    while (b > 0)
    {
        int num2 = b % 10;
        if (num2 == 0)
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
            }
        }
        b /= 10;
    }
    if (carry)
    {
        v.push_back(1);
    }
    // return re;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    bsum(a, b);
    return 0;
}