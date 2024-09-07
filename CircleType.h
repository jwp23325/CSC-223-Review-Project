#pragma once
#include "PointType.h" // Ensure this file is accessible
#include <cmath>
#include <iomanip>
#include <iostream>

// This file was outlined by ChatGPT and modified by the User

using namespace std;

template <class T>
class CircleType
{
private:
    PointType<T> centerPoint;
    PointType<T> circumferencePoint;
    static const double PI;

public:
    // Default constructor
    CircleType() {
        centerPoint.setPoint(0, 0);
        circumferencePoint.setPoint(1, 0);
        cout << fixed << setprecision(2) << showpoint;

    }

    // Constructor with coordinates sent in
    CircleType(T cx, T cy, T fx, T fy) {
        centerPoint.setPoint(cx, cy);
        circumferencePoint.setPoint(fx, fy);
        cout << fixed << setprecision(2) << showpoint;

    }
   
    // Construct with points sent in
    CircleType(PointType<T> center, PointType<T> circumference) {
        centerPoint = center;
        circumferencePoint = circumference;
    }

    // Sets the center point
    void setCenterPoint(T cx, T cy) {
        centerPoint.setPoint(cx, cy);
    }

    // Sets the circumference point
    void setCircumferencePoint(T fx, T fy) {
        circumferencePoint.setPoint(fx, fy);
    }

    // Gets the center point
    void getCenterPoint(T& cx, T& cy) {
        centerPoint.getPoint(cx, cy);
    }

    // Gets the circumference point
    void getCircumferencePoint(T& fx, T& fy) {
        circumferencePoint.getPoint(fx, fy);
    }

    // Calculates the radius
    double calcRadius() {
        return centerPoint - circumferencePoint;
    }

    // Calculates the  area
    double calcArea() {
        double radius = calcRadius();
        return PI * radius * radius;
    }

    // Calculates the circumference
    double calcCircumference() {
        double radius = calcRadius();
        return 2 * PI * radius;
    }

    // Print the circle properties
    void print() {
        double radius = calcRadius();

        cout << "Center Point: ";
        centerPoint.print();
        cout << "Circumference Point: ";
        circumferencePoint.print();
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calcArea() << endl;
        cout << "Circumference: " << calcCircumference() << endl;
    }
};

template <class T>
const double CircleType<T>::PI = 3.1415926535;  // Definition and initialization of PI
