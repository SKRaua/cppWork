#include <iostream>
using namespace std;
struct Student
{
    unsigned int Student_ID;
    int score;
};
int main()
{
    int a;
    cin >> a;
    Student *student = new Student[a];
    for (int i = 0; i < a; i++)
    {
        unsigned int b;
        int c;
        cout << "id:";
        cin >> b;
        cout << "score:";
        cin >> c;
        student[i].Student_ID = b;
        student[i].score = c;
    }
    Student ccc;
    for (int i = 1; i < a; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            if (student[j].score > student[j + 1].score)
            {
                ccc = student[j + 1];
                student[j + 1] = student[j];
                student[j] = ccc;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << student[i].Student_ID << ":" << student[i].score << endl;
    }
    system("pause");
    return 0;
}
