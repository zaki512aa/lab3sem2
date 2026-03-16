// заголовочный файл базового класса
#ifndef OOP_3_FIGURES_H
#define OOP_3_FIGURES_H

#include <string>

using std::string;

// абстрактный класс фигур
class Figure {
public:
    // деструктор
    virtual ~Figure() = default;

    // чистая виртуальная функция площади
    virtual double calc_area() = 0;

    // чистая виртуальная функция вывода
    virtual string to_string() = 0;
};

// функция расчета объема цилиндра
double calc_cylinder_volume(Figure *base, double height);

#endif