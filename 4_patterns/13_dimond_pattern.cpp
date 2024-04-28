#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5 - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }


    // remove below loops to get a triangle
    for (int i = 1; i < 5; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = 5 - 1; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}