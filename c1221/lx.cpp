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
        student[i].Student_ID = i + 1;
        student[i].score = 100 - i;
    }
    // Student student[6] = {
    //     {1, 34},
    //     {2, 24},
    //     {3, 100},
    //     {4, 25},
    //     {5, 84},
    //     {6, 10}};
    // int si, sc;
    Student ccc;
    for (int i = 1; i < a; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            if (student[j].score < student[j + 1].score)
            {
                ccc = student[j + 1];
                student[j + 1] = student[j];
                student[j] = ccc;
                // si = student[j + 1].Student_ID;
                // student[j + 1].Student_ID = student[j].Student_ID;
                // student[j].Student_ID = si;
                // sc = student[j + 1].score;
                // student[j + 1].score = student[j].score;
                // student[j].score = sc;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << student[i].Student_ID << ":" << student[i].score << endl;
    }
    // Student s1 = {2022214986, 100};
    // Student s2;
    // s2 = s1;
    // cout << s1.Student_ID << endl
    //      << s1.score << endl;

    system("pause");
    return 0;
}
