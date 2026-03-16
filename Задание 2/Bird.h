// класс птицы
#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

// наследуем от животного
class Bird : public Animal {
public:
    // переопределение методов
    void breathe() override;
    void eat() override;

    // новый метод
    void lay_eggs();
};

#endif