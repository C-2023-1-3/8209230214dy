#include <iostream>
using namespace std;

class Student {
public:
    int id;
    int score;
};

int max(Student* students, int size) {
    int maxScore = students[0].score;
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (students[i].score > maxScore) {
            maxScore = students[i].score;
            maxIndex = i;
        }
    }

    return students[maxIndex].id;
}

int main() {
    Student students[5];
    students[0].id = 1;
    students[0].score = 90;    
    students[1].id = 2;
    students[1].score = 85;
    students[2].id = 3;
    students[2].score = 95;
    students[3].id = 4;
    students[3].score = 88;
    students[4].id = 5;
    students[4].score = 92;

    int maxId = max(students, 5);
    cout << "最高成绩的学生学号为：" << maxId << endl;

    return 0;
}