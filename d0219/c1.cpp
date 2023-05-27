#include <iostream>
using namespace std;

int main()
{
    cout << sizeof(int) << endl;
    int a[3];
    cout << sizeof(a) / sizeof(int);
    system("pause");
    return 0;
}