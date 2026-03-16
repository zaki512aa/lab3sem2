// класс преподавателя
#ifndef TEACHER_H
#define TEACHER_H

#include "Human.h"
#include <vector>

// должности
enum Position {
    UNKNOWN,
    ASSISTANT,
    SENIOR,
    DOCENT,
    PROFESSOR
};

// наследование
class Teacher : public Human {
    // должность и предметы
    Position position;
    vector<string> subjects;
public:
    // конструкторы
    Teacher();
    Teacher(string n, string s, string p, Position pos, vector<string> sub);

    // методы
    void addsubject(string sub);
    string getshortteacherinfo();
    string getfullteacherinfo();
    Position getposition();
    int getsubjectscount();
    bool hassubject(string sub);
    string getpositionstring();
};

#endif