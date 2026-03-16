// реализация студента
#include "Student.h"
#include <sstream>

// пустой вектор по умолчанию
Student::Student() : Human() {}

// инициализация через родителя
Student::Student(string n, string s, string p, vector<int> g) : Human(n, s, p) {
    grades = g;
}

// добавление оценки
void Student::addscore(int score) {
    grades.push_back(score);
}

// средний балл
double Student::getaveragescore() {
    if (grades.empty()) return 0;
    double sum = 0;
    for (int g : grades) sum += g;
    return sum / grades.size();
}

// количество оценок
int Student::getgradescount() {
    return grades.size();
}

// короткая информация
string Student::getshortstudentinfo() {
    stringstream ss;
    ss << getsurnameandinitials() << " " << getaveragescore();
    return ss.str();
}

// полная информация
string Student::getfullstudentinfo() {
    stringstream ss;
    ss << getfullname();
    for (int g : grades) {
        ss << " " << g;
    }
    ss << " " << getaveragescore();
    return ss.str();
}