#include <iostream>		// консольный ввод-вывод
#include <iomanip>		// форматированный вывод на экран
#include <vector> // Вектор
#include <algorithm> // Find 
#include "FigureSexangle123.h" // Дочерняя фигура Шестиугольник
#include "FigureTriangle123.h" // Дочерняя фигура Треугольник
#include "MenuTri.h" // Меню для треугольника
#include "MenuSex.h" // Меню для шестиугольника
#include "MainM.h" // Меню для выбора
#include "MenuMain.h" // Главное Меню
using namespace std;

int main()
{
    MainM Menu; //Menu
    MenuTri Menu1; //Menu
    MenuSex Menu2; //Menu
    FigureTriangle123 A; //1 Figure
    FigureSexangle123 B; //2 Figure
    int select, selectA, selectB, num;
    setlocale(LC_ALL, "Russian");
    vector<int> v1, v2;
    do
    {
        // вызываем главное меню и выполняем выбор пользователя
        select = Menu.Menu();
        switch (select)
        {
        case 1:
        {
            do
            {
                selectA = Menu1.Menu();
                bool found;
                switch (selectA)
                {
                case 1:
                {
                    cout << "Введите номер вашего треугольника: ";
                    cin >> num;
                    if (found = find(v1.begin(), v1.end(), num) != v1.end()) {
                        cout << "Уже существует данный треугольник!" << endl;
                        system("pause");
                        break;
                    }
                    else {
                        v1.push_back(num);
                        cout << endl;
                        A.Create(num);
                        cout << endl;
                        system("pause");
                        break;
                    }
                }
                case 2:
                {
                    cout << "Введите номер вашего треугольника: ";
                    cin >> num;
                    if (found = find(v1.begin(), v1.end(), num) != v1.end()) {
                        A.Delete(num);
                        cout << endl;
                        v1.erase(std::remove(v1.begin(), v1.end(), num), v1.end());
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого треугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 3:
                {
                    cout << "Введите номер вашего треугольника: ";
                    cin >> num;
                    if (found = find(v1.begin(), v1.end(), num) != v1.end()) {
                        A.Show(num);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого треугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 4:
                {
                    cout << "Введите номер вашего треугольника: ";
                    cin >> num;
                    if (found = find(v1.begin(), v1.end(), num) != v1.end()) {
                        A.Verification(num);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого треугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 5:
                {
                    cout << "Введите номер вашего треугольника: ";
                    cin >> num;
                    if (found = find(v1.begin(), v1.end(), num) != v1.end()) {
                        A.MoveO(num);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого треугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 6:
                {
                    cout << "Введите номер вашего треугольника: ";
                    cin >> num;
                    if (found = find(v1.begin(), v1.end(), num) != v1.end()) {
                        A.Intersect(num);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого треугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                if (selectA != 22)
                {
                    cout << endl << endl;
                    system("pause");
                }
                }
            } while (selectA != 22);
            break;
        }
        case 2:
        {
            do
            {
                selectB = Menu2.Menu();
                bool found;
                switch (selectB)
                {
                case 1:
                {
                    cout << "Введите номер вашего шестиугольника: ";
                    cin >> num;
                    if (found = find(v2.begin(), v2.end(), num) != v2.end()) {
                        cout << "Уже существует данный шестиугольник!" << endl;
                        system("pause");
                        break;
                    }
                    else {
                        v2.push_back(num);
                        cout << endl;
                        B.Create(num);
                        cout << endl;
                        system("pause");
                        break;
                    }
                }
                case 2:
                {
                    cout << "Введите номер вашего шестиугольника: ";
                    cin >> num;
                    if (found = find(v2.begin(), v2.end(), num) != v2.end()) {
                        B.Delete(num);
                        cout << endl;
                        v2.erase(std::remove(v2.begin(), v2.end(), num), v2.end());
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого шестиугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 3:
                {
                    cout << "Введите номер вашего шестиугольника: ";
                    cin >> num;
                    if (found = find(v2.begin(), v2.end(), num) != v2.end()) {
                        B.Show(num);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого шестиугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 4:
                {
                    cout << "Введите номер вашего шестиугольника: ";
                    cin >> num;
                    if (found = find(v2.begin(), v2.end(), num) != v2.end()) {
                        B.Verification(num);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого шестиугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 5:
                {
                    cout << "Введите номер вашего шестиугольника: ";
                    cin >> num;
                    if (found = find(v2.begin(), v2.end(), num) != v2.end()) {
                        B.MoveO(num);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого шестиугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                case 6:
                {
                    cout << "Введите номер вашего шестиугольника: ";
                    cin >> num;
                    if (found = find(v2.begin(), v2.end(), num) != v2.end()) {
                        B.Intersect(num);
                        cout << endl;
                        system("pause");
                        break;
                    }
                    else {
                        cout << "Такого шестиугольника не существует" << endl;
                        system("pause");
                        break;
                    }
                }
                if (selectB != 22)
                {
                    cout << endl << endl;
                    system("pause");
                }
                }
            } while (selectB != 22);
            break;
        }
        }
        if (select != 111)
        {
            cout << endl << endl;
            system("pause");
        }
    } while (select != 111);
    return EXIT_SUCCESS;
}