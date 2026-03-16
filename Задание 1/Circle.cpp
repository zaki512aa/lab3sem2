// реализация круга
#include <sstream>
#include "Circle.h"

using std::stringstream;

// генерация строки
string Circle::to_string() {
    stringstream ss;
    ss << "krug ploshad " << this->calc_area();
    return ss.str();
}