#include <iostream>
using namespace std;

int main()
{
    int a[10] = {55, 2, 6, 4, 32, 12, 9, 73, 26, 37};
    int s = sizeof(a) / sizeof(int);
    int x;
    // cout << s << endl;
    for (int I = 1; I < s; I++)
    {
        for (int i = 0; i < s - I; i++)
        {
            if (a[i] > a[i + 1])
            {
                x = a[i + 1];
                a[i + 1] = a[i];
                a[i] = x;
            }
        }
    }
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << ",";
    }
    cout << endl;
    system("pause");
    return 0;
}
