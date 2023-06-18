#include <iostream>
using namespace std;

char *ecp(char[], int, char *);
char *dcp(char *, int);
int main()
{
    char str[] = "the result of 3 and 2 is not 8";
    int len = sizeof(str) / sizeof(char) - 1;
    char *miwen = new char[len];
    cout << ecp(str, len, miwen) << endl;
    cout << miwen << endl;
    //无法理解输出中末尾有一个汉字 "铪"
    cout << dcp(miwen, len) << endl;
    system("pause");
    return 0;
}
char *ecp(char str[], int len, char *fmiwen)
{
    int a[7] = {4, 9, 6, 2, 8, 7, 3};
    int k = 6;
    // char mima[30];
    // char *mima = new char[len];
    for (int i = 0; i < len; i++)
    // while (*str)
    {
        k = (k + 1) % 7;
        //*mima++ = *str++ + a[k]; //使用注释部分无法实现，求解释
        fmiwen[i] = str[i] + a[k];
        // cout << fmiwen[i];
    }
    //无法理解“模运算”处理超过范围字符，求解释@~@
    return fmiwen;
}
char *dcp(char *fmiwen, int len)
{
    int a[7] = {4, 9, 6, 2, 8, 7, 3};
    int k = 6;
    char *jiema = new char[len];
    for (int i = 0; i < len; i++)
    {
        k = (k + 1) % 7;
        jiema[i] = fmiwen[i] - a[k];
    }
    return jiema;
}
