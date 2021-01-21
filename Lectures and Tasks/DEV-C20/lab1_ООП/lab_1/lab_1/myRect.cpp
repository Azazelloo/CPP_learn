#include "myRect.h"

Rect::Rect(int left_x, int left_y, int right_x, int right_y)
{
	stop
	if (left_x>=right_x && left_y>=right_y)
	{
		cout << "Invalid value" << endl;
		m_left_x = 0;
		m_left_y = 0;
		m_right_x = 0;
		m_right_y = 0;
	}
	else
	{
		m_left_x = left_x;
		m_left_y = left_y;
		m_right_x = right_x;
		m_right_y = right_y;
	}
}

Rect::Rect()
{
	stop
	m_left_x = 0;
	m_left_y = 0;
	m_right_x = 0;
	m_right_y = 0;
}

void Rect::InflateRect(int left, int bottom, int right, int top)
{
	m_left_x -= left;
	m_left_y -= bottom;
	m_right_x += right;
	m_right_y += top;
	if (m_left_x >= m_right_x && m_left_y >= m_right_y)
	{
		cout << "Invalid value" << endl;
		m_left_x = 0;
		m_left_y = 0;
		m_right_x = 0;
		m_right_y = 0;
	}
}

Rect::Rect(const Rect& other)
{
	stop
	m_left_x = other.m_left_x;
	m_left_y = other.m_left_y;
	m_right_x = other.m_right_x;
	m_right_y = other.m_right_y;
}

void Rect::InflateRect(int p1, int p2)
{
	m_left_x -= p1;
	m_left_y -= p2;
	m_right_x += p1;
	m_right_y += p2;
	stop
		if (m_left_x >= m_right_x && m_left_y >= m_right_y)
		{
			cout << "Invalid value" << endl;
			m_left_x = 0;
			m_left_y = 0;
			m_right_x = 0;
			m_right_y = 0;
		}
}

void Rect::SetAll(int left_x, int left_y, int right_x, int right_y)
{
	m_left_x = left_x;
	m_left_y = left_y;
	m_right_x = right_x;
	m_right_y = right_y;
	if (m_left_x >= m_right_x && m_left_y >= m_right_y)
	{
		cout << "Invalid value" << endl;
		m_left_x = 0;
		m_left_y = 0;
		m_right_x = 0;
		m_right_y = 0;
	}
}

void Rect::GetAll(int&p1, int& p2, int& p3, int& p4) const
{
	p1 = m_left_x;
	p2 = m_left_y;
	p3 = m_right_x;
	p4 = m_right_y;
}

void Rect::BoundingRect(Rect& obj1, Rect& obj2)
{
	m_left_x = (obj1.m_left_x <= obj2.m_left_x) ? obj1.m_left_x : obj2.m_left_x;
	m_left_y= (obj1.m_left_y <= obj2.m_left_y) ? obj1.m_left_y : obj2.m_left_y;
	m_right_x= (obj1.m_right_x <= obj2.m_right_x) ? obj2.m_right_x : obj1.m_right_x;
	m_right_y = (obj1.m_right_y <= obj2.m_right_y) ? obj2.m_right_y : obj1.m_right_y;
}

Rect::~Rect()
{
	stop
}