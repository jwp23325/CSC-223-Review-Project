// CSC 223 Review Project.cpp : This is the main file to test the CircleType Class
// This file was outlined using ChatGPT and modified by the user


#include <iostream>
#include "CylinderType.h"

using namespace std;

int main() {
    // Test default constructor
    cout << "Testing Default Constructor..." << endl;
    cout << "##########################################" << endl;
    CylinderType<int> cylinder1;
    cylinder1.print();
    cout << "##########################################" << endl;
    cout << endl;

    // Test parameterized constructor
    cout << "Testing Parameterized Constructor..." << endl;
    cout << "##########################################" << endl;
    CylinderType<int> cylinder2(0, 0, 3, 4, 10);
    cylinder2.print();
    cout << "##########################################" << endl;
    cout << endl;

    // Test setters
    cout << "Testing Setters..." << endl;
    cout << "##########################################" << endl;
    cylinder2.setHeight(15);
    cout << "Updated Cylinder.\n" << endl;
    cylinder2.print();
    cout << "##########################################" << endl;
    cout << endl;

    // Test getters
    cout << "Testing Getters..." << endl;
    cout << "##########################################" << endl;
    cout << "Height: " << cylinder2.getHeight() << endl;
    cout << "Radius: " << cylinder2.calcRadius() << endl;
    cout << "Area of Base: " << cylinder2.calcArea() << endl;
    cout << "Circumference of Base: " << cylinder2.calcCircumference() << endl;
    cout << "Surface Area: " << cylinder2.calcSurfaceArea() << endl;
    cout << "Volume: " << cylinder2.calcVolume() << endl;
    cout << "##########################################" << endl;
    cout << endl;

    // Test with floating-point values
    cout << "Testing Floating-Point Values..." << endl;
    cout << "##########################################" << endl;
    CylinderType<double> cylinder4(1.5, 2.5, 4.5, 5.5, 10.5);
    cylinder4.print();
    cout << "Height: " << cylinder4.getHeight() << endl;
    cout << "Radius: " << cylinder4.calcRadius() << endl;
    cout << "Area of Base: " << cylinder4.calcArea() << endl;
    cout << "Circumference of Base: " << cylinder4.calcCircumference() << endl;
    cout << "Surface Area: " << cylinder4.calcSurfaceArea() << endl;
    cout << "Volume: " << cylinder4.calcVolume() << endl;
    cout << "##########################################" << endl;
    cout << endl;
}
