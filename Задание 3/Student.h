// класс студента
#ifndef STUDENT_H
#define STUDENT_H

#include "Human.h"
#include <vector>

// наследование от человека
class Student : public Human {
    // оценки
    vector<int> grades;
public:
    // конструкторы
    Student();
    Student(string n, string s, string p, vector<int> g);

    // методы студента
    void addscore(int score);
    double getaveragescore();
    string getshortstudentinfo();
    string getfullstudentinfo();
    int getgradescount();
};

#endif