// выполнил студент Алексаднр Синяков
// расчет сумм последовательностей
// на входе количество элементов n
// на выходе суммы рядов

#include <iostream>
#include "Summator.h"
#include "SquareSummator.h"
#include "CubeSummator.h"

using namespace std;

int main() {
    cout << "vvedite chislo n" << endl;

    int n;
    cin >> n;

    // контрольный вывод
    cout << "vy vveli " << n << endl;

    // защита от дурака
    if (n <= 0) {
        cout << "oshibka znacheniya" << endl;
        return 0;
    }

    cout << "rannee svyazyvanie" << endl;

    // создание обычных объектов
    Summator sum1;
    SquareSummator sum2;
    CubeSummator sum3;

    cout << "summa " << sum1.sum(n) << endl;
    cout << "summa kvadratov " << sum2.sum(n) << endl;
    cout << "summa kubov " << sum3.sum(n) << endl;

    cout << "pozdnee svyazyvanie" << endl;

    // указатели на базовый класс
    Summator* ptr1 = new Summator();
    Summator* ptr2 = new SquareSummator();
    Summator* ptr3 = new CubeSummator();

    cout << "summa " << ptr1->sum(n) << endl;
    cout << "summa kvadratov " << ptr2->sum(n) << endl;
    cout << "summa kubov " << ptr3->sum(n) << endl;

    // проверка по математическим формулам из задания
    cout << "proverka po formulam" << endl;
    double f1 = (double)n * (n + 1) / 2;
    double f2 = (double)n * (n + 1) * (2 * n + 1) / 6;
    double f3 = f1 * f1;

    cout << "formula pervaya " << f1 << endl;
    cout << "formula vtoraya " << f2 << endl;
    cout << "formula tretya " << f3 << endl;

    // очистка выделенной памяти
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}