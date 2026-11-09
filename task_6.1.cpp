#include <iostream>
#include "Mathlib.h"

int main()
{
    setlocale(LC_ALL, "RU");

    double a{}, b{};
    int func{};

    std::cout << "Введите первое число: ";
    std::cin >> a;

    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> func;

    switch (func)
    {
    case 1: 
        std::cout << "Сумма " << a << " и " << b << " = " << mathlib::sum(a, b) << std::endl;
        break;

    case 2:
        std::cout << "Разность " << a << " и " << b << " = " << mathlib::diff(a, b) << std::endl;
        break;

    case 3:
        std::cout << "Произведение " << a << " и " << b << " = " << mathlib::prod(a, b) << std::endl;
        break;

    case 4:
        std::cout << "Деление " << a << " на " << b << " = " << mathlib::division(a, b) << std::endl;
        break;

    case 5:
        std::cout << a << " в степени " << b << " = " << mathlib::degree(a, b) << std::endl;
        break;

    default:
        std::cout << "Неверная команда!" << std::endl;
        break;
    }
}
