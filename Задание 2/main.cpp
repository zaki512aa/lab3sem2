// выполнил студент Александр Синяков
// демонстрация связывания
// на входе ничего
// на выходе действия

#include <iostream>
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include "FlyingBird.h"

using namespace std;

int main() {
    cout << "rannee svyazyvanie" << endl;

    // создание объектов
    Fish my_fish;
    FlyingBird my_bird;

    // вызов методов
    my_fish.eat();
    my_fish.swim();

    my_bird.breathe();
    my_bird.lay_eggs();
    my_bird.fly();

    cout << "pozdnee svyazyvanie" << endl;

    // указатели на базу
    Animal* a1 = new Fish();
    Animal* a2 = new FlyingBird();

    // виртуальные методы
    a1->breathe();
    a2->eat();

    // приведение типов
    Fish* f_ptr = dynamic_cast<Fish*>(a1);
    if (f_ptr != nullptr) {
        f_ptr->swim();
    }

    FlyingBird* b_ptr = dynamic_cast<FlyingBird*>(a2);
    if (b_ptr != nullptr) {
        b_ptr->fly();
    }

    // очистка памяти
    delete a1;
    delete a2;

    return 0;
}