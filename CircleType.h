#pragma once
#include "PointType.h" // Ensure this file is accessible
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

template <class T>
class CircleType
{
private:
    PointType<T> centerPoint;
    PointType<T> circumferencePoint;
    static const double PI;

public:
    // Constructor with parameters
    CircleType(T cx, T cy, T fx, T fy)
        : centerPoint(cx, cy), circumferencePoint(fx, fy)
    {
        cout << fixed << setprecision(1) << showpoint;
    }

    // Setters
    void setCenterPoint(T cx, T cy) {
        centerPoint.setX(cx);
        centerPoint.setY(cy);
    }

    void setCircumferencePoint(T fx, T fy) {
        circumferencePoint.setX(fx);
        circumferencePoint.setY(fy);
    }

    // Getters
    void getCenterPoint(T& cx, T& cy) const {
        cx = centerPoint.getX();
        cy = centerPoint.getY();
    }

    void getCircumferencePoint(T& fx, T& fy) const {
        fx = circumferencePoint.getX();
        fy = circumferencePoint.getY();
    }

    // Calculate radius
    double calcRadius() const {
        return centerPoint - circumferencePoint;
    }

    // Calculate area
    double calcArea() const {
        double radius = calcRadius();
        return PI * radius * radius;
    }

    // Calculate circumference
    double calcCircumference() const {
        double radius = calcRadius();
        return 2 * PI * radius;
    }

    // Print circle properties
    void print() const {
        double radius = calcRadius();
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calcArea() << endl;
        cout << "Circumference: " << calcCircumference() << endl;
    }
};

// Initialize the static PI constant
template <class T>
const double CircleType<T>::PI = 3.141592653589793;
