#include <iostream>
using namespace std;

int *cA(int);
int main()
{
    char as[10] = "hello";
    // int s = 4;
    // int *a = cA(s);
    // delete[] a;

    char *l[] = {"C", "C/C++", "java", "C#", "Python"};
    for (int i = 0; i < 5; i++)
    {
        int j = 0;
        while (l[i][j])
        {
            cout << l[i][j++];
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
int *cA(int s)
{
    int *array = new int[s];
    for (int i = 0; i < s; i++)
    {
        array[i] = i + 1;
    }
    return array;
}
