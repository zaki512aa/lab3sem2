// базовый класс сумматора
#ifndef SUMMATOR_H
#define SUMMATOR_H

class Summator {
public:
    // виртуальный деструктор
    virtual ~Summator() = default;

    // виртуальный метод преобразования
    virtual double transform(int i);

    // метод вычисления суммы
    double sum(int n);
};

#endif