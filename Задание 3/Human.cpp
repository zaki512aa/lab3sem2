// реализация человека
#include "Human.h"

// по умолчанию неизвестно
Human::Human() {
    name = "neizvestno";
    surname = "neizvestno";
    patronymic = "neizvestno";
}

// инициализация с параметрами
Human::Human(string n, string s, string p) {
    name = n;
    surname = s;
    patronymic = p;
}

// фамилия и инициалы без знаков
string Human::getsurnameandinitials() {
    string res = surname + " ";
    if (name.length() > 0) res += name[0];
    res += " ";
    if (patronymic.length() > 0) res += patronymic[0];
    return res;
}

// полное имя
string Human::getfullname() {
    return surname + " " + name + " " + patronymic;
}