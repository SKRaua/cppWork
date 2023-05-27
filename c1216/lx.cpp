#include <iostream>
using namespace std;
int sum(int[], int);
int main()
{
    static int ia[5] = {2, 3, 6, 8, 10};
    int sumOfArray;
    sumOfArray = sum(ia, 5);
    cout << "sum of array:" << sumOfArray << endl;
    // cout << strlen("1234567890123");
    cout << sizeof(int);
    system("pause");
    return 0;
}
int sum(int array[], int len)
{
    int iSum = 0;
    for (int i = 0; i < len; i++)
        iSum += array[i];
    return iSum;
}