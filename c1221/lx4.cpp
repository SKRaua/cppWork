#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    short int a = -123, b = 256;
    // cout << sizeof(short int);
    cout << bitset<sizeof(short int) * 8>(a) << endl;
    a = a >> 1;
    cout << bitset<sizeof(short int) * 8>(a) << endl;
    cout << a << endl;
    cout << bitset<sizeof(short int) * 8>(b) << endl;
    b = b >> 3;
    cout << bitset<sizeof(short int) * 8>(b) << endl;
    cout << b << endl;
    system("pause");
    return 0;
}
