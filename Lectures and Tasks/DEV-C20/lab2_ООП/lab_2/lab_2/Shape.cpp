#include "Shape.h"
Shape::Shape()
{
	m_color = RED;

}
Shape::Shape(COLOR color)
{
	m_color = color;

}

Shape::~Shape()
{
	cout << "Now I am in Shape's destructor!" << endl;
}

void Shape::WhereAmI()
{
	cout << "Now I am in class Shape" << endl;
}