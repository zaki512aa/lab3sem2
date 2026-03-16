// реализация преподавателя
#include "Teacher.h"
#include <sstream>

// по умолчанию неизвестно
Teacher::Teacher() : Human() {
    position = UNKNOWN;
}

// инициализация базы
Teacher::Teacher(string n, string s, string p, Position pos, vector<string> sub) : Human(n, s, p) {
    position = pos;
    subjects = sub;
}

// добавление предмета
void Teacher::addsubject(string sub) {
    subjects.push_back(sub);
}

// перевод должности в строку
string Teacher::getpositionstring() {
    switch(position) {
        case ASSISTANT: return "assistent";
        case SENIOR: return "starshiy prepodavatel";
        case DOCENT: return "docent";
        case PROFESSOR: return "professor";
        default: return "neizvestno";
    }
}

// геттер должности
Position Teacher::getposition() {
    return position;
}

// счетчик предметов
int Teacher::getsubjectscount() {
    return subjects.size();
}

// проверка предмета
bool Teacher::hassubject(string sub) {
    for (string s : subjects) {
        if (s == sub) return true;
    }
    return false;
}

// короткая инфа
string Teacher::getshortteacherinfo() {
    stringstream ss;
    ss << getsurnameandinitials() << " " << getpositionstring() << " " << subjects.size();
    return ss.str();
}

// полная инфа
string Teacher::getfullteacherinfo() {
    stringstream ss;
    ss << getfullname() << " " << getpositionstring();
    for (string sub : subjects) {
        ss << " " << sub;
    }
    return ss.str();
}