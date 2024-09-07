#pragma once
#include "CircleType.h"
#include <iostream>

// This file was outlined using ChatGPT and modified by the user

using namespace std;

template <class T>
class CylinderType : public CircleType<T> {
private:
    T height;

public:
    // Default constructor
    CylinderType()
        : CircleType<T>(), height(0) {}

    // Constructor with parameters for CircleType and height
    CylinderType(T xCenter, T yCenter, T xCircumference, T yCircumference, T h)
        : CircleType<T>(xCenter, yCenter, xCircumference, yCircumference), height(h) {}

    // Constructor with PointType for CircleType and height
    CylinderType(PointType<T> center, PointType<T> circumference, T h)
        : CircleType<T>(center, circumference), height(h) {}

    // Setter for height
    void setHeight(T h) {
        height = h;
    }

    // Getter for height
    T getHeight() {
        return height;
    }

    // Calculate surface area
    double calcSurfaceArea() {
        double baseArea = CircleType<T>::calcArea();
        double baseCircumference = CircleType<T>::calcCircumference();
        return (baseCircumference * height) + (2 * baseArea);
    }

    // Calculate volume
    double calcVolume() {
        return CircleType<T>::calcArea() * height;
    }

    // Print the cylinder's properties
    void print() {
        cout << "Base Circle Properties: " << endl;
        cout << "--------------------------" << endl;
        // Call the print function of the base class
        CircleType<T>::print();
        cout << "--------------------------" << endl;
        // Print cylinder properties
        cout << "\nCylinder Properties:" << endl;
        cout << "--------------------------" << endl;
        cout << "Height: " << height << endl;
        cout << "Surface Area: " << calcSurfaceArea() << endl;
        cout << "Volume: " << calcVolume() << endl;
        cout << "--------------------------" << endl;
    }
};


