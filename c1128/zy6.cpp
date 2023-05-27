#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {5, 7, 8},
        {2, -2, 4},
        {1, 1, 1},
    };
    int b[3][3] = {
        {4, -2, 3},
        {3, 9, 4},
        {8, -1, 2},
    };
    int c[3][3];
    int s = sizeof(a[1]) / sizeof(int);
    int S = sizeof(a) / sizeof(int) / s;

    for (int I = 0; I < S; I++)
    {
        for (int i = 0; i < s; i++)
        {
            cout << a[I][i] << ",";
        }
        cout << endl;
    }
    cout << endl;

    for (int I = 0; I < S; I++)
    {
        for (int i = 0; i < s; i++)
        {
            cout << b[I][i] << ",";
        }
        cout << endl;
    }
    cout << endl;
    //第6题结果：
    for (int I = 0; I < S; I++)
    {
        for (int i = 0; i < s; i++)
        {
            c[I][i] = a[I][i] + b[I][i];
            cout << c[I][i] << ",";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
