// реализация треугольника
#include <sstream>
#include "Triangle.h"

using std::stringstream;

// метод строки
string Triangle::to_string() {
    stringstream ss;
    ss << "treugolnik ploshad " << this->calc_area();
    return ss.str();
}