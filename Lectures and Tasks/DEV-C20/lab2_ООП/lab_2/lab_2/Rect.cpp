#include "Shape.h"

Rect::Rect()
{
	m_width = 0;
	m_height = 0;
}

Rect::Rect(COLOR color, double width, double height):Shape(color)
{
	m_width = width;
	m_height = height;
}

Rect::~Rect()
{
	cout << "Now I am in Rect's destructor!" << endl;
}

void Rect::WhereAmI()
{
	cout << "Now I am in class Rect" << endl;
}

const double& Rect::GetWidth()
{
	return m_width;
}

const double& Rect::GetHeight()
{
	return m_height;
}

/*void Rect::Inflate(int n)
{
	stop
	m_width += n;
	m_height += n;
}*/