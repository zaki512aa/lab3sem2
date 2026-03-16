// реализация прямоугольника
#include <sstream>
#include "Rectangle.h"

using std::stringstream;

// генерация строки
string Rectangle::to_string() {
    stringstream ss;
    ss << "pryamougolnik ploshad " << this->calc_area();
    return ss.str();
}