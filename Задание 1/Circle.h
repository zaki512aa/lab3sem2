// класс круга
#ifndef OOP_3_CIRCLE_H
#define OOP_3_CIRCLE_H

#include <string>
#include <cmath>
#include "Figures.h"

using std::string;

// наследование от базового класса
class Circle : public Figure {
    // динамическое поле
    double *radius;
public:
    // конструктор
    Circle(double radius) {
        this->radius = new double(radius);
    }

    // деструктор
    ~Circle() override {
        delete this->radius;
    }

    // переопределение площади
    double calc_area() override {
        const double r = *this->radius;
        return r * r * M_PI;
    }

    // переопределение вывода
    string to_string() override;
};

#endif