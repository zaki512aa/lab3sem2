// класс рыбы
#ifndef FISH_H
#define FISH_H

#include "Animal.h"

// наследуем от животного
class Fish : public Animal {
public:
    // переопределение методов
    void breathe() override;
    void eat() override;

    // новый метод
    void swim();
};

#endif