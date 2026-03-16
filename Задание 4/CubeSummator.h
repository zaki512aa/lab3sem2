// класс сумматора кубов
#ifndef CUBESUMMATOR_H
#define CUBESUMMATOR_H

#include "Summator.h"

// наследование от базы
class CubeSummator : public Summator {
public:
    // переопределение метода
    double transform(int i) override;
};

#endif