#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int z=3;
void using_swap(int n,int a[n][n])
{
    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j < z; j++)
        {
            int temp;
            {
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[n][n];
    // int k=0,l=0;
    for (int i = 0, l = 0; i < n; i++, l++)
    {
        for (int j = 0, k = 0; j < n; j++, k++)
        {
            b[k][l] = a[i][j];
        }
    }
    //using swapping
    using_swap(a);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}