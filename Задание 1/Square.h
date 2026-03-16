// класс квадрата
#ifndef OOP_3_SQUARE_H
#define OOP_3_SQUARE_H

#include <string>
#include "Figures.h"

using std::string;

// наследуем фигуру
class Square : public Figure {
    // сторона динамически
    double *side;
public:
    // инициализация
    Square(double side) {
        this->side = new double(side);
    }

    // очистка
    ~Square() override {
        delete this->side;
    }

    // считаем площадь
    double calc_area() override {
        return (*side) * (*side);
    }

    // строка инфо
    string to_string() override;
};

#endif