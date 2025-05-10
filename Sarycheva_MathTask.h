#ifndef _SURNAME_MATHTASK_H_
#define _SURNAME_MATHTASK_H_

#include <iostream>
#include <string>

using namespace std;

bool UserInput (string input) {
    if (input.empty()) return false;
    try {
        int number = stoi(input);
        if (number < 0) return false; // Добавляем проверку на отрицательные числа
        for(char c : input){
            if(!isdigit(c) && c != '-'){
                return false; //Проверка на нецифровые символы
            }
        }
    }
    catch (...) { return false; }
    return true;
}
//метод ввода данных
void EnterDigit(int& varLink, const string& label) {
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);
    while (!UserInput (raw_input)) {
        cout << label << " = ";
        getline(cin, raw_input);
    }
    varLink = stoi(raw_input);
}

//вычисление площади прямоугольника
int CalcRectangleArea (int NumberA, int NumberB) {
    return NumberA * NumberB;
}

#endif