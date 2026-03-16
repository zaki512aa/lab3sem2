// класс сумматора квадратов
#ifndef SQUARESUMMATOR_H
#define SQUARESUMMATOR_H

#include "Summator.h"

// наследование от базы
class SquareSummator : public Summator {
public:
    // переопределение метода
    double transform(int i) override;
};

#endif