// CSC 223 Review Project.cpp : This is the main file to test the CircleType Class
// This file was outlined using ChatGPT and modified by the user


#include <iostream>
#include "CircleType.h"

using namespace std;

int main()
{
    // Default constructor test
    cout << "From default constructor" << endl;
    CircleType<int> c1;
    CircleType<double> c2;
    cout << "Integer circle: ";
    c1.print();
    cout << "Double circle: ";
    c2.print();

    // Parameterized constructor test
    cout << "\nConstructor with parameters" << endl;
    CircleType<int> c3(1, 1, 3, 4);
    CircleType<double> c4(1.5, 2.5, 4.5, 5.5);
    cout << "Integer circle: ";
    c3.print();
    cout << "Double circle: ";
    c4.print();

    // Setters Test
    c3.setCenterPoint(2, 2);
    c3.setCircumferencePoint(5, 5);
    c4.setCenterPoint(3.5, 4.5);
    c4.setCircumferencePoint(7.5, 8.5);

    // Getters Test
    int cx, cy, fx, fy;
    c3.getCenterPoint(cx, cy);
    c3.getCircumferencePoint(fx, fy);
    cout << "\nNew integer circle center: (" << cx << ", " << cy << ")" << endl;
    cout << "New integer circle circumference point: (" << fx << ", " << fy << ")" << endl;

    double cxD, cyD, fxD, fyD;
    c4.getCenterPoint(cxD, cyD);
    c4.getCircumferencePoint(fxD, fyD);
    cout << "New double circle center: (" << cxD << ", " << cyD << ")" << endl;
    cout << "New double circle circumference point: (" << fxD << ", " << fyD << ")" << endl;

    // Radius, area, and circumference calculations
    cout << "\nInteger circle radius = " << c3.calcRadius() << endl;
    cout << "Integer circle area = " << c3.calcArea() << endl;
    cout << "Integer circle circumference = " << c3.calcCircumference() << endl;

    cout << "\nDouble circle radius = " << c4.calcRadius() << endl;
    cout << "Double circle area = " << c4.calcArea() << endl;
    cout << "Double circle circumference = " << c4.calcCircumference() << endl;
}
