// класс летающей птицы
#ifndef FLYINGBIRD_H
#define FLYINGBIRD_H

#include "Bird.h"

// наследуем от птицы
class FlyingBird : public Bird {
public:
    // метод полета
    void fly();
};

#endif