#include "Header.h"

Point::Point()
{
	m_x = 0;
	m_y = 0;
}

Point::Point(double x,double y)
{
	m_x = x;
	m_y = y;
}

Point& Point::operator+=(Point& ref_obj)
{
	m_x += ref_obj.m_x;
	m_y += ref_obj.m_y;
	return *this;
}

Point& Point::operator+=(int n)
{
	m_x += n;
	m_y += n;
	return *this;
}

Point Point::operator+(int n)
{
	return Point(m_x+n,m_y+n);
}

Point Point::operator+(const Point& ref_obj)
{
	return Point(m_x + ref_obj.m_x, m_y + ref_obj.m_y);
}

Point Point::operator-(const Point& ref_obj)
{
	return Point(m_x - ref_obj.m_x, m_y - ref_obj.m_y);
}

Point Point::operator-(int n)
{
	return Point(m_x - n, m_y - n);
}

Point Point::operator-()
{
	return Point(-m_x,-m_y);
}

Point Point::operator+()
{
	return Point(+m_x, +m_y);
}