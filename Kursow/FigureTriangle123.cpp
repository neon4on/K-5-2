#pragma once
#include "Figure123.h"
#include <vector> // Вектор
#include <algorithm> // Find 
#include <iostream>
using namespace std;

class FigureTriangle123 : public Figure123
{
private:
    int x1; //фигура  (1) 
    int y1; //фигура  (1) 
    int x2; //фигура  (2) 
    int y2; //фигура  (2) 
    int x3; //фигура  (3) 
    int y3; //фигура  (3) 
public:
    void Create(int& num) {
        cout << "Figure " << num << " Created!";
        cout << endl;
        cout << "Start position:" << endl;
        cout << "First \t= 0,0" << endl;
        cout << "Second \t= 0,0" << endl;
        cout << "Third \t= 0,0";
        cout << endl;
        x1 = 0;
        y1 = 0;
        x2 = 0;
        y2 = 0;
        x3 = 0;
        y3 = 0;
    }
    void Delete(int& num) { // Удаление фигуры
        cout << "Figure Delited!";
        cout << endl;
    }
    void Show(int& num) { // Тип фигуры
        cout << "Triangle";
        cout << endl;
    }
    void Verification(int& num) {
        cout << "Figure Exists";
        cout << endl;
    }
    void MoveO(int& num) {
        x1 += 1;
        y1 += 0;
        x2 += 4;
        y2 += 1;
        x3 += -3;
        y3 += -4;
        cout << "Figure has been moved";
        cout << endl;
    }
    void Intersect(int& num) {
        cout << "First: " << x1 << "," << y1 << endl <<
            "Second: " << x2 << "," << y2 << endl <<
            "Third: " << x3 << "," << y3;
        cout << endl;
    }
};

