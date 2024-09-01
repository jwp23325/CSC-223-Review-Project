// CSC 223 Review Project.cpp : This is the main to test the PointType class
//

#include <iostream>
#include "PointType.h"

using namespace std;

int main()
{
    // Default constructor test
    cout << "From default constructor" << endl;
    PointType<int> p1I;
    PointType<double> p1D;
    cout << "Integer point: ";
    p1I.print();
    cout << "Double point: ";
    p1D.print();

    // Parameterized constructor test
    cout << "/nConstructor with parameters" << endl;
    PointType<int> p2I(3, 5);
    PointType<double> p2D(3.5, 5.5);
    cout << "Integer point: ";
    p2I.print();
    cout << "Double point: ";
    p2D.print();

    // Distance calculation test
    cout << "\n(integer) Distance = ";
    double distance = p1I - p2I;
    cout << distance << endl;

    cout << "\n(double) Distance = ";
    distance = p1D - p2D;
    cout << distance << endl;

    // Setting individual point test
    p1I.setX(7);
    p1I.setY(9);
    p1D.setX(4.4);
    p1D.setY(6.6);

    // Getting individual point test
    cout << "\nNew integer point: (" << p1I.getX() << ", " << p1I.getY() << ")" << endl;
    cout << "New double point: (" << p1D.getX() << ", " << p1D.getY() << ")" << endl;

    // Setting and getting intger points test
    p1I.setPoint(15, 25);
    int xI, yI;    
    p1I.getPoint(xI, yI);
    cout << "\nNew integer point: (" << xI << ", " << yI << ")" << endl;
    

    // Test with double points
    p1D.setPoint(7.7, 8.8);
    double xD, yD;
    p1D.getPoint(xD, yD);
    cout << "New double point: (" << xD << ", " << yD << ")" << endl;




  }

