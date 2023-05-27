#include <iostream>
using namespace std;

void bubble(int[], int);
void print(int[], int);

int main()
{
    int a[10] = {55, 2, 6, 4, 32, 12, 9, 73, 26, 37};
    int len = sizeof(a) / sizeof(int);
    bubble(a, len);
    print(a, len);
    system("pause");
    return 0;
}
void bubble(int a[], int len)
{
    int x;
    for (int I = 1, j; I < len; I++) // j判断是否已经排序完成
    {
        j = 1; //假定已经排序完成
        for (int i = 0; i < len - I; i++)
        {
            if (a[i] > a[i + 1])
            {
                x = a[i + 1];
                a[i + 1] = a[i];
                a[i] = x;
                j = 0; //发生交换，排序未完成
            }
        }
        if (j == 1)
        {
            break;
        }
    }
}
void print(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << ",";
    }
    cout << endl;
}
