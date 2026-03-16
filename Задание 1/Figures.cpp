// реализация базового функционала
#include "Figures.h"

// вычисление объема обобщенного цилиндра
double calc_cylinder_volume(Figure *base, double height) {
    // защита от неправильных данных
    if (base == nullptr || height < 0) {
        return -1;
    }
    return base->calc_area() * height;
}