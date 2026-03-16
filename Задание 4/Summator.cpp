// реализация базового сумматора
#include "Summator.h"

// тождественное преобразование
double Summator::transform(int i) {
    return i;
}

// цикл подсчета суммы
double Summator::sum(int n) {
    double s = 0;
    for (int i = 1; i <= n; ++i) {
        s += transform(i);
    }
    return s;
}