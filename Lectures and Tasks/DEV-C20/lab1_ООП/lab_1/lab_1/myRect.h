#pragma once

class Rect{
	int m_left_x, m_left_y, m_right_x, m_right_y;
public:
	Rect();
	Rect(int left_x, int left_y, int right_x, int right_y);
	void InflateRect(int left, int bottom, int right, int top);
	Rect(const Rect& other);

	void InflateRect(int p1=1,int p2=1);

	void SetAll(int left_x, int left_y, int right_x, int right_y);

	void GetAll(int&p1, int& p2, int& p3, int& p4) const;

	void BoundingRect(Rect& obj1,Rect& obj2);

	~Rect();
};

#include "Header.h"