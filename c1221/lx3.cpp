#include <iostream>
using namespace std;

struct Score
{
    int bcjc;
    int gdsx;
    int yy;
};
struct Student
{
    unsigned int Student_ID;
    Score score;
    // int score;
};
int main()
{
    Student student;
    student.Student_ID = 666666;
    student.score.bcjc = 100;
    student.score.gdsx = 100;
    student.score.yy = 100;
    cout << "ID:" << student.Student_ID << endl
         << "成绩：" << endl;
    cout << "编程基础：" << student.score.bcjc << endl;
    cout << "高等数学：" << student.score.gdsx << endl;
    cout << "英语：" << student.score.yy << endl;
    system("pause");
    return 0;
}
