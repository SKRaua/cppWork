#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    double b = 3.14;

    int *p1;
    double *p2;

    p1 = &a;
    p2 = &b;

    cout << sizeof(p1) << "," << sizeof(p2) << endl;
    cout << *p1 << "," << *p2 << endl;
    system("pause");
    return 0;
}