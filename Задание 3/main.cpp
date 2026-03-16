// выполнил студент Александр Синяков
// работа с людьми
// на входе ничего
// на выходе данные

#include <iostream>
#include <vector>
#include <fstream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

// сохранение списка
void savetofile(vector<string>& lines, string file) {
    ofstream out(file);
    for (string line : lines) {
        out << line << endl;
    }
    out.close();
    cout << "sohraneno v fail" << endl;
}

// загрузка списка
void loadfromfile(string file) {
    ifstream in(file);
    string line;
    while (getline(in, line)) {
        cout << line << endl;
    }
    in.close();
    cout << "zagruzheno iz faila" << endl;
}

int main() {
    // десять студентов
    vector<Student> students = {
        Student("ivan", "ivanov", "ivanovich", {4, 5, 4, 3}),
        Student("petr", "petrov", "petrovich", {3, 3, 3}),
        Student("andrey", "smirnov", "alexeevich", {5, 5, 5, 4}),
        Student("dmitriy", "sokolov", "igorevich", {4, 4, 4, 5, 5}),
        Student("alexey", "volkov", "vladimirovich", {5, 5, 5, 5, 5, 5}),
        Student("sergey", "lebedev", "sergeevich", {3, 4, 3, 4}),
        Student("oleg", "kozlov", "olegovich", {2, 2, 2}),
        Student("ilya", "novikov", "ilyich", {4, 5, 4, 5}),
        Student("pavel", "morozov", "pavlovich", {3, 3, 3}),
        Student("victor", "zaitsev", "victorovich", {5, 4, 5})
    };

    // десять преподавателей
    vector<Teacher> teachers = {
        Teacher("igor", "smirnov", "alexeevich", PROFESSOR, {"informatika"}),
        Teacher("oleg", "ivanov", "ivanovich", DOCENT, {"matematika", "fizika"}),
        Teacher("anton", "petrov", "petrovich", ASSISTANT, {"informatika", "proektirovanie"}),
        Teacher("vladimir", "sokolov", "igorevich", SENIOR, {"istoriya"}),
        Teacher("dmitriy", "volkov", "vladimirovich", DOCENT, {"os", "seti"}),
        Teacher("alexey", "lebedev", "sergeevich", PROFESSOR, {"informatika", "os", "seti", "bazy"}),
        Teacher("sergey", "kozlov", "olegovich", ASSISTANT, {"fizika"}),
        Teacher("pavel", "novikov", "ilyich", SENIOR, {"matematika", "informatika"}),
        Teacher("andrey", "morozov", "pavlovich", DOCENT, {"filosofiya"}),
        Teacher("ivan", "zaitsev", "victorovich", PROFESSOR, {"bazy"})
    };

    // готовим строки для записи
    vector<string> st_lines;
    for (Student s : students) st_lines.push_back(s.getfullstudentinfo());

    cout << "rabota s failami" << endl;
    savetofile(st_lines, "data.txt");
    loadfromfile("data.txt");

    // вывод студентов
    cout << "studenty bolshe 4" << endl;
    for (Student s : students) {
        if (s.getaveragescore() > 4) {
            cout << s.getshortstudentinfo() << endl;
        }
    }

    cout << "studenty menshe 3" << endl;
    for (Student s : students) {
        if (s.getaveragescore() < 3) {
            cout << s.getshortstudentinfo() << endl;
        }
    }

    cout << "student s maksimum ocenok" << endl;
    int max_grades = -1;
    Student top_student;
    for (Student s : students) {
        if (s.getgradescount() > max_grades) {
            max_grades = s.getgradescount();
            top_student = s;
        }
    }
    cout << top_student.getfullstudentinfo() << endl;

    // вывод преподавателей
    cout << "vse docenty" << endl;
    for (Teacher t : teachers) {
        if (t.getposition() == DOCENT) {
            cout << t.getshortteacherinfo() << endl;
        }
    }

    cout << "professor s maksimum predmetov" << endl;
    int max_sub = -1;
    Teacher top_teacher;
    for (Teacher t : teachers) {
        if (t.getposition() == PROFESSOR && t.getsubjectscount() > max_sub) {
            max_sub = t.getsubjectscount();
            top_teacher = t;
        }
    }
    cout << top_teacher.getfullteacherinfo() << endl;

    cout << "vedut informatiku" << endl;
    for (Teacher t : teachers) {
        if (t.hassubject("informatika")) {
            cout << t.getfullteacherinfo() << endl;
        }
    }

    return 0;
}