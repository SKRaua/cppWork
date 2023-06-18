#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    short int a = -123, b = 256;
    cout << bitset<sizeof(short int) * 8>(a) << endl;
    cout << bitset<sizeof(short int) * 8>(b) << endl;
    short int k;
    k = a & b;
    cout << bitset<sizeof(short int) * 8>(k) << endl;
    k = a | b;
    cout << bitset<sizeof(short int) * 8>(k) << endl;
    k = a ^ b;
    cout << bitset<sizeof(short int) * 8>(k) << endl;

    system("pause");
    return 0;
}