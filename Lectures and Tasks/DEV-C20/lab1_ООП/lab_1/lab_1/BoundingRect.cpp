#include "Header.h"

Rect BoundingRect(Rect obj1, Rect obj2)
{
	Rect res_r;

	int left_x_obj1, left_y_obj1, right_x_obj1, right_y_obj1;
	obj1.GetAll(left_x_obj1, left_y_obj1, right_x_obj1, right_y_obj1);

	int left_x_obj2, left_y_obj2, right_x_obj2, right_y_obj2;
	obj2.GetAll(left_x_obj2, left_y_obj2, right_x_obj2, right_y_obj2);
	
	res_r.SetAll(((left_x_obj1<= left_x_obj2)? left_x_obj1: left_x_obj2),((left_y_obj1<= left_y_obj2)? left_y_obj1: left_y_obj2),((right_x_obj1<= right_x_obj2)? right_x_obj2: right_x_obj1),((right_y_obj1<= right_y_obj2)? right_y_obj2: right_y_obj1));
	return res_r;
}

Rect BoundingRect2(const Rect& obj1, const Rect& obj2)
{
	Rect res_r;

	int left_x_obj1, left_y_obj1, right_x_obj1, right_y_obj1;
	obj1.GetAll(left_x_obj1, left_y_obj1, right_x_obj1, right_y_obj1);

	int left_x_obj2, left_y_obj2, right_x_obj2, right_y_obj2;
	obj2.GetAll(left_x_obj2, left_y_obj2, right_x_obj2, right_y_obj2);

	res_r.SetAll(((left_x_obj1 <= left_x_obj2) ? left_x_obj1 : left_x_obj2), ((left_y_obj1 <= left_y_obj2) ? left_y_obj1 : left_y_obj2), ((right_x_obj1 <= right_x_obj2) ? right_x_obj2 : right_x_obj1), ((right_y_obj1 <= right_y_obj2) ? right_y_obj2 : right_y_obj1));
	return res_r;
}