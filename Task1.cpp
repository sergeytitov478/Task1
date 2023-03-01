#include <iostream>
#include <math.h> 
#include "Test.h"

using namespace std;

int main()
{
    int m;
    do
    {
        int n;
        setlocale(LC_ALL, "RUS");
        cout << "Введите номер задания с 1-30: " << endl;
        cin >> n;

        switch (n)
        {

        case 1:
            // Задание 1
            try
            {
                Test b;
                double t, l;
                cout << "Введите значение переменной t " << endl;
                cin >> t;
                cout << "Введите значение переменной l " << endl;
                cin >> l;
                cout << "R = " << b.task1(t, l) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 2:
            // Задание 2
            try
            {
                Test b;
                double p, y, e, n;
                cout << "Введите значение переменной p " << endl;
                cin >> p;
                cout << "Введите значение переменной y " << endl;
                cin >> y;
                cout << "Введите значение переменной e " << endl;
                cin >> e;
                cout << "Введите значение переменной n " << endl;
                cin >> n;
                cout << "K = " << b.task2(p, y, e, n) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 3:
            // Задание 3
            try
            {
                Test b;
                double n, y;
                cout << "Введите значение переменной n " << endl;
                cin >> n;
                cout << "Введите значение переменной y " << endl;
                cin >> y;
                cout << "G = " << b.task3(n, y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 4:
            // Задание 4
            try
            {
                Test b;
                double a, t;
                cout << "Введите значение переменной a " << endl;
                cin >> a;
                cout << "Введите значение переменной t " << endl;
                cin >> t;
                cout << "D =" << b.task4(a, t) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 5:
            // Задание 5
            try
            {
                Test b;
                double x;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "L =" << b.task5(x) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 6:
            // Задание 6
            try
            {
                Test b;
                double x, e, y;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "M =" << b.task6(x, e, y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 7:
            // Задание 7
            try
            {
                Test b;
                double m;
                cout << "Введите значение переменной m" << endl;
                cin >> m;
                cout << "N =" << b.task7(m) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 8:
            // Задание 8
            try
            {
                Test b;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "T =" << b.task8(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 9:
            // Задание 9
            try
            {
                Test b;
                double n, y, x;
                cout << "Введите значение переменной n" << endl;
                cin >> n;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "V =" << b.task9(n, y, x) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 10:
            // Задание 10
            try
            {
                Test b;
                double e, y, x, k;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной k" << endl;
                cin >> k;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "U =" << b.task10(e, y, x, k) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 11:
            // Задание 11
            try
            {
                Test b;
                double y, x;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "S =" << b.task11(y, x) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 12:
            // Задание 12
            try
            {
                Test b;
                double x, t;
                cout << "Введите значение переменной t" << endl;
                cin >> t;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "K =" << b.task12(x, t) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 13:
            // Задание 13
            try
            {
                Test b;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "E =" << b.task13(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 14:
            // Задание 14
            try
            {
                Test b;
                double e, y, x;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "R =" << b.task14(e, y, x) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 15:
            // Задание 15
            try
            {
                Test b;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "H =" << b.task15(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 16:
            // Задание 16
            try
            {
                Test b;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "S =" << b.task16(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 17:
            // Задание 17
            try
            {
                Test b;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "N =" << b.task17(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 18:
            // Задание 18
            try
            {
                Test b;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Z =" << b.task18(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 19:
            // Задание 19
            try
            {
                Test b;
                double n, y, g;
                cout << "Введите значение переменной n" << endl;
                cin >> n;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной g" << endl;
                cin >> g;
                cout << "P =" << b.task19(n, y, g) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 20:
            // Задание 20
            try
            {
                Test b;
                double e, y, x, k;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной k" << endl;
                cin >> k;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "U =" << b.task20(e, y, x, k) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 21:
            // Задание 21
            try
            {
                Test b;
                double e, y, h;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной h" << endl;
                cin >> h;
                cout << "P =" << b.task21(e, y, h) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 22:
            // Задание 22
            try
            {
                Test b;
                double u, y, x, n;
                cout << "Введите значение переменной u" << endl;
                cin >> u;
                cout << "Введите значение переменной n" << endl;
                cin >> n;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "T =" << b.task22(u, y, x, n) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 23:
            // Задание 23
            try
            {
                Test b;
                double e, y, f;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной f" << endl;
                cin >> f;
                cout << "G =" << b.task23(e, y, f) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 24:
            // Задание 24
            try
            {
                Test b;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "F =" << b.task24(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 25:
            // Задание 25
            try
            {
                Test b;
                double e, y, f;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной f" << endl;
                cin >> f;
                cout << "G =" << b.task25(e, y, f) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 26:
            // Задание 26
            try
            {
                Test b;
                double p;
                cout << "Введите значение переменной p" << endl;
                cin >> p;
                cout << "Z =" << b.task26(p) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 27:
            // Задание 27
            try
            {
                Test b;
                double e, y, x, v;
                cout << "Введите значение переменной v" << endl;
                cin >> v;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной x" << endl;
                cin >> x;
                cout << "W =" << b.task27(e, y, x, v) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 28:
            // Задание 28
            try
            {
                Test b;
                double e, y, h;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной h" << endl;
                cin >> h;
                cout << "T =" << b.task28(e, y, h) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 29:
            // Задание 29
            try
            {
                Test b;
                double y;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "N =" << b.task29(y) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;
        case 30:
            // Задание 30
            try
            {
                Test b;
                double e, y, r;
                cout << "Введите значение переменной e" << endl;
                cin >> e;
                cout << "Введите значение переменной y" << endl;
                cin >> y;
                cout << "Введите значение переменной r" << endl;
                cin >> r;
                cout << "W =" << b.task30(e, y, r) << endl;
            }
            catch (const std::exception&)
            {
                cout << "Ошибка входных данных" << endl;
            }

            system("pause");

            break;

        default: cout << "Такого задания нет!" << endl;
        }

        cout << "Повторить? 1/0 - ";
        cin >> m;
    } while (m != 0);
    return 0;
}