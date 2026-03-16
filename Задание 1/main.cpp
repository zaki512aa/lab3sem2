// выполнил студент Александр Синяков
// программа работает с фигурами через полиморфизм
// на входе параметры фигур и высота цилиндра
// на выходе площади и объемы

#include <iostream>
#include "Figures.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"

using namespace std;

int main() {
    // указатель на базовый класс
    Figure* c = nullptr;

    cout << "vvedite tip figury 1 krug 2 pryamougolnik 3 kvadrat 4 treugolnik" << endl;

    // выбор пользователя
    int number;
    cin >> number;

    // контрольный вывод
    cout << "vy vveli " << number << endl;

    // проверка ввода
    if (number < 1 || number > 4) {
        cout << "nepravilnyi vvod" << endl;
        return 0;
    }

    // позднее связывание
    switch (number) {
        case 1: {
            cout << "vvedite radius" << endl;
            double r;
            cin >> r;
            cout << "vy vveli " << r << endl;
            if (r <= 0) {
                cout << "oshibka znacheniya" << endl;
                return 0;
            }
            c = new Circle(r);
            break;
        }
        case 2: {
            cout << "vvedite shirinu i vysotu" << endl;
            double w, h;
            cin >> w >> h;
            cout << "vy vveli " << w << " " << h << endl;
            if (w <= 0 || h <= 0) {
                cout << "oshibka znacheniya" << endl;
                return 0;
            }
            c = new Rectangle(w, h);
            break;
        }
        case 3: {
            cout << "vvedite storonu" << endl;
            double s;
            cin >> s;
            cout << "vy vveli " << s << endl;
            if (s <= 0) {
                cout << "oshibka znacheniya" << endl;
                return 0;
            }
            c = new Square(s);
            break;
        }
        case 4: {
            cout << "vvedite tri storony" << endl;
            double a, b, c_side;
            cin >> a >> b >> c_side;
            cout << "vy vveli " << a << " " << b << " " << c_side << endl;
            if (a <= 0 || b <= 0 || c_side <= 0 || (a + b <= c_side) || (a + c_side <= b) || (b + c_side <= a)) {
                cout << "oshibka znacheniya" << endl;
                return 0;
            }
            c = new Triangle(a, b, c_side);
            break;
        }
    }

    cout << "informaciya o figure" << endl;
    cout << c->to_string() << endl;

    cout << "vvedite vysotu cilindra" << endl;
    double h_cyl;
    cin >> h_cyl;

    cout << "vy vveli " << h_cyl << endl;

    if (h_cyl < 0) {
        cout << "oshibka znacheniya" << endl;
    } else {
        cout << "obyem cilindra " << calc_cylinder_volume(c, h_cyl) << endl;
    }

    // очистка памяти
    delete c;

    return 0;
}