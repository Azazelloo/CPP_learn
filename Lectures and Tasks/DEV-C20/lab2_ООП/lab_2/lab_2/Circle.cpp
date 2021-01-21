#include "Shape.h"
Circle::Circle()
{
	m_diametr = 0;
	m_center_x = 0;
	m_center_y = 0;
}
Circle::Circle(COLOR color, double diametr, double center_x, double center_y):Shape(color)
{
	m_diametr = diametr;
	m_center_x = center_x;
	m_center_y = center_y;
}

Circle::~Circle()
{
	cout << "Now I am in Circle's destructor!" << endl;
}

void Circle::WhereAmI()
{
	cout << "Now I am in class Circle" << endl;
}

Circle::Circle(Rect& obj): Shape(obj)
{
	m_center_x = obj.GetWidth()/2;
	m_center_y = obj.GetHeight()/2;
	m_diametr= obj.GetHeight() / 2;
	stop
}

/*void Circle::Inflate(int n)
{
	stop
	m_diametr += n;
}*/