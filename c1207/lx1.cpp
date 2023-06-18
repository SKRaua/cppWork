#include <iostream>
using namespace std;

double sum(int *, int);
int main()
{
    int s = 10;
    int *a = new int[s]; ////////////
    for (int i = 0; i < 10; i++)
    {
        a[i] = i + 1;
    }
    cout << sum(a, s) << endl;
    system("pause");
    return 0;
}
double sum(int *a, int s)
{
    double sum = 0;
    for (int i = 0; i < s; i++)
    {
        sum += a[i];
    }
    return sum;
}