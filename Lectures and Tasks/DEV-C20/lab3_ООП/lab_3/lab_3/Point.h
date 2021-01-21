#pragma once
//#include "Header.h"

class Point {
	double m_x;
	double m_y;
public:
	Point();
	Point(double x,double y);

	Point& operator+=(Point&);
	Point& operator+=(int n);
	Point operator+(int n);
	Point operator+(const Point& ref_obj);
	Point operator-(const Point& ref_obj);
	Point operator-(int n);
	Point operator-();
	Point operator+();


	friend Point operator+(double n, Point& ref_obj);
};
