#pragma once
class Pair {
	MyString key;
	//double m_age;
	Data data;
public:
	Pair();
	Pair(const char* k,const Data& d);
	//Pair(const char* k,double age);

	bool operator==(const char* k)const;

	Pair(Pair&& temp);
	Pair& operator=(Pair&& temp);
	Pair& operator=(const Pair& p);

	
	friend class Base;
	friend ostream& operator<<(ostream& os, const Pair& p);
};