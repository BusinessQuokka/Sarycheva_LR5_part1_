#include <iostream>
#include "Sarycheva_MathTask.h"

using namespace std;

int main() {
    int NumberA = 0, NumberB = 0;
    //ввод переменной А
    EnterDigit (NumberA, "input height A");
    //ввод переменной В
    EnterDigit (NumberB, "input height B");

    //вычисление площади прямоугольника
    int RectangleArea = CalcRectangleArea (NumberA, NumberB);

    //вывод значения площади
    cout << "Area of Rectangle is " << RectangleArea << endl;
    return 0;
}