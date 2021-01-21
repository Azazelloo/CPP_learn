#include "Header.h"

Pair::Pair():key("empty")
	{}

Pair::Pair(const char* k, const Data& d):key(k),data(d)
	{}


/*Pair::Pair(const char* k, double age):key(k),m_age(age)
	{}*/

bool Pair::operator==(const char* k)const
	{
		if(strcmp(key.m_pStr,k)==0)
			{
				return true;
			}
		return false;
	}
////
Pair::Pair(Pair&& temp)
	{
	stop
		key=temp.key;
		data=temp.data;
		//m_age=temp.m_age;
	}
Pair& Pair::operator=(Pair&& temp)
	{
		if(this!=&temp)
			{
			stop
				key=temp.key;
				data=temp.data;
			}
	return *this;
	}

Pair& Pair::operator=(const Pair& p)
	{
	if (this != &p)
		{
		key=p.key;
		data=p.data;
		}
		return *this;
	}

