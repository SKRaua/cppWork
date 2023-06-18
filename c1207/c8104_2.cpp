#include <iostream>
using namespace std;

void ecp(char[], const int, char *); //
void dcp(char *, char *);
void print(char *);
int main()
{
    char str[] = "the result of 3 and 2 is not 8";
    const int len = sizeof(str) / sizeof(char);
    char miwen[len];
    char jiema[len];
    // char *miwen = new char[len];
    // char *jiema = new char[len];
    /*11，12如果替换成13，14，结果会变得很奇怪，后面会有奇怪的乱码，搞不太懂*/
    ecp(str, len, miwen);
    print(miwen);
    cout << miwen << endl;

    dcp(miwen, jiema);
    print(jiema);

    system("pause");
    return 0;
}
void ecp(char str[], const int len, char *fmiwen) //
{
    int a[7] = {4, 9, 6, 2, 8, 7, 3};
    int k = 6;
    // for (int i = 0; i < len; i++)
    while (*str)
    {
        k = (k + 1) % 7;
        *fmiwen++ = *str++ + a[k];
        // fmiwen[i] = str[i] + a[k];
    }
}
void dcp(char *fmiwen, char *jiema)
{
    int a[7] = {4, 9, 6, 2, 8, 7, 3};
    int k = 6;
    while (*fmiwen)
    {
        k = (k + 1) % 7;
        *jiema++ = *fmiwen++ - a[k];
    }
}
void print(char *str)
{
    while (*str)
    {
        cout << *str++;
    }
    cout << endl;
}