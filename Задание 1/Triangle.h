// класс треугольника
#ifndef OOP_3_TRIANGLE_H
#define OOP_3_TRIANGLE_H

#include <string>
#include <cmath>
#include "Figures.h"

using std::string;

// наследуемся от фигуры
class Triangle : public Figure {
    // стороны треугольника
    double *a;
    double *b;
    double *c;
public:
    // конструктор
    Triangle(double a, double b, double c) {
        this->a = new double(a);
        this->b = new double(b);
        this->c = new double(c);
    }

    // деструктор
    ~Triangle() override {
        delete this->a;
        delete this->b;
        delete this->c;
    }

    // площадь по формуле герона
    double calc_area() override {
        double p = (*a + *b + *c) / 2;
        return sqrt(p * (p - *a) * (p - *b) * (p - *c));
    }

    // метод вывода
    string to_string() override;
};

#endif