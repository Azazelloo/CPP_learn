#pragma once
enum COLOR { RED, GREEN, BLUE, WHITE };

class Shape {
protected:
	COLOR m_color;
public:
	Shape();
	Shape(COLOR color);
	virtual ~Shape();
	virtual void WhereAmI();
	//virtual void Inflate(int n)=0;
};

class Rect :public Shape {
	double m_width, m_height;
public:
	Rect();
	Rect(COLOR color,double width,double height);
	virtual ~Rect();
	virtual void WhereAmI();
	const double& GetWidth();
	const double& GetHeight();
	//virtual void Inflate(int n);
};

class Circle :public Shape {
	double m_diametr,m_center_x,m_center_y;
public:
	Circle();
	Circle(COLOR color,double diametr,double center_x,double center_y);
	virtual ~Circle();
	virtual void WhereAmI();
	Circle(Rect& obj);
	//virtual void Inflate(int n);
};

#include "Header.h"