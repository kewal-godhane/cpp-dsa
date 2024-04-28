#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int k, l;
    cin >> k >> l;
    int b[k][l];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cin >> b[i][j];
        }
    }
    int c[n][l];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            c[i][j]=0;
        }
    }
        for (int w = 0; w < n; w++)
        {
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < k; j++)
                {
                    c[w][i] = c[w][i] + (a[w][j] * b[j][i]);
                }
            }
        }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}