#pragma once
#include <cmath>
#include <iomanip>
#include <iostream>


using namespace std;

template <class T>
class PointType
{
private:
	T x;
	T y; 

public:
	// Default constructor
	PointType() { 
		x = 0;
		y = 0; 
		cout << fixed << setprecision(1) << showpoint;
	}
	
	// Construct with parameters
	PointType(T Ux, T Uy) {
		x = Ux;
		y = Uy;
		cout << fixed << setprecision(1) << showpoint;
	}

	// Sets value for x
	void setX(T Ux) { 
		x = Ux; 
	}

	// Sets value for y
	void setY(T Uy) { 
		y = Uy; 
	}
	void setPoint(T Ux, T Uy) {
		x = Ux;
		y = Uy;
	}

	// Getters
	T getX() { return x; }
	T getY() { return y; }


	void getPoint(T& Ux, T& Uy) {
		Ux = x;
		Uy = y;
	}

	// Overload subtraction operator to calculate distance
	double operator -(PointType<T> op2) {
		double distance = sqrt(pow(x - op2.x, 2) + pow(y - op2.y,2));
		return distance;
	}

	// Print function
	void print() 
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}

	
};

