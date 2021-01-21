#include "Header.h"

Data::Data():m_age(0),m_job("empty"),m_pay(0)
	{}

Data::Data( int age, const char* job, double pay): m_job(job)
	{
		m_age=age;
		m_pay=pay;
	}
