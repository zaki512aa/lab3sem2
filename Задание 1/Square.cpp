// реализация квадрата
#include <sstream>
#include "Square.h"

using std::stringstream;

// вывод данных
string Square::to_string() {
    stringstream ss;
    ss << "kvadrat ploshad " << this->calc_area();
    return ss.str();
}