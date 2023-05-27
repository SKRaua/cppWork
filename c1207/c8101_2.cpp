#include <iostream>
using namespace std;

int *findmax(int *array, int size, int &index);
int main()
{
    int a[10] = {33, 91, 54, 67, 82, 37, 85, 63, 19, 68};
    int *maxaddr;
    int idx;
    maxaddr = findmax(a, sizeof(a) / sizeof(*a), idx);
    cout << "下标：" << idx << endl
         << "地址：" << maxaddr << endl
         << "值：" << a[idx] << endl;
    system("pause");
    return 0;
}
int *findmax(int *array, int size, int &index)
{
    index = 0;
    for (int i = 1; i < size - 1; i++)
    {
        if (array[index] < array[i])
        {
            index = i;
        }
    }
    return array + index;
}
