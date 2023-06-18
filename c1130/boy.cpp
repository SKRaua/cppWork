#include <iostream>
using namespace std;

int main()
{

    const int num = 7;
    int m; //每轮人数
    int a[num], b[num];
    for (int i = 0; i < num; i++)
    {
        a[i] = i + 1;
        b[i] = i + 1;
        cout << a[i] << ",";
    } //给小孩编号并输出
    cout << endl;
    cout << "输入间隔：";
    cin >> m;
    int j = num - 1; //法1计下标
    int t = 0;       //法2计下标

    for (int I = 1; I <= num - 1; I++) //剩一个，淘汰len-1次
    {
        int k = 0;
        //数小孩
        do
        {
            j = (j + 1) % num;
            if (a[j] != 0)
            {
                k++;
            }
        } while (k < m);
        //出局
        a[j] = 0;

        //自己听课前写的逻辑：
        for (int i = m; i > 0;)
        {
            //出局运算
            if (i == 1)
            {
                b[t] = 0;
            }

            //确定下一个t
            do
            {
                t++;
            } while (b[t] == 0 && t < num);
            if (t == num)
            {
                t = 0;
                while (b[t] == 0)
                {
                    t++;
                }
            }

            i--;
        }
    }

    //输出结果
    for (int i = 0; i < num; i++)
    {
        if (a[i] != 0)
        {
            cout << a[i] << endl;
        }
        if (b[i] != 0)
        {
            cout << b[i] << endl;
        }
    }
    system("pause");
    return 0;
}
