// базовый класс человека
#ifndef HUMAN_H
#define HUMAN_H

#include <string>

using namespace std;

// объявление класса
class Human {
protected:
    // поля класса
    string name;
    string surname;
    string patronymic;
public:
    // конструкторы
    Human();
    Human(string n, string s, string p);

    // деструктор
    virtual ~Human() = default;

    // методы получения строк
    string getsurnameandinitials();
    string getfullname();
};

#endif