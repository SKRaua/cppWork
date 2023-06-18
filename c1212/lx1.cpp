#include <iostream>
using namespace std;

int main()
{
    float a = 1.5;
    float b = 2.0;
    float &price = a;
    float &kilo = b;
    cout << (&a == &price) << endl;
    cout << price * kilo << endl;

    float c = 9.8;
    price = c;
    cout << a << ',' << price << "," << c << endl;
    system("pause");
    return 0;
}
