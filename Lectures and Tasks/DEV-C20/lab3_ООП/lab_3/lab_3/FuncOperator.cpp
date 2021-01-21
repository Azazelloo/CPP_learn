#include "Header.h"

Point operator+(double n, Point& ref_obj)
{
	return Point(ref_obj.m_x+n, ref_obj.m_y + n);
}

ostream& operator<<(ostream& os, const MyString& str)
{
	stop
	//os << "Contents: "<<str.m_pStr;
	os << str.m_pStr;
	return os;
}

ostream& operator<<(ostream& os, const Data& d)
	{
	stop
		cout<<"Age->"<<d.m_age<<endl;
		cout<<"Job->"<<d.m_job<<endl;
		cout << "Pay->" << d.m_pay << endl;
		return os;
	}

ostream& operator<<(ostream& os, const Pair& p)
	{
	stop
		cout<<"Key->"<<p.key<<endl;
		cout<<"Data:"<<endl;
		cout<<p.data<<endl;
		return os;
	}

ostream& operator<<(ostream& os, const Base& bd)
	{
	stop
		for(int i=0;i<bd.m_size;i++)
			{
				cout<<bd.pBase[i]<<endl;
			}
		return os;
	}