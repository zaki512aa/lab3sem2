// класс прямоугольника
#ifndef OOP_3_RECTANGLE_H
#define OOP_3_RECTANGLE_H

#include <string>
#include "Figures.h"

using std::string;

// наследование от фигур
class Rectangle : public Figure {
    // динамические поля
    double *width;
    double *height;
public:
    // конструктор
    Rectangle(double width, double height) {
        this->width = new double(width);
        this->height = new double(height);
    }

    // деструктор
    ~Rectangle() override {
        delete this->width;
        delete this->height;
    }

    // площадь прямоугольника
    double calc_area() override {
        return (*width) * (*height);
    }

    string to_string() override;
};

#endif