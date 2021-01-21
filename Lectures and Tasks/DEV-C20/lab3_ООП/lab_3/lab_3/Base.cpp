#include "Header.h"

Base::Base()
	{
		m_cap=0;
		m_size=0;
		pBase=new Pair[m_cap];
	}

Base::~Base()
	{
		delete[] pBase;
	}



Data& Base::operator[](const char* key)
	{
		for(int i=0;i<m_size;i++) //ищем сотрудника по ключу
			{
				if(pBase[i]==key)
					{
						return pBase[i].data;
					}
			}
		if(m_size>=m_cap) //перераспределяем память
			{
				m_cap++;
				Pair* temp=new Pair[m_cap];
				for(int i = 0; i < m_size; i++)
					{
						temp[i]=move(pBase[i]);
					}
				delete[] pBase;
				pBase=temp;
			}

		pBase[m_size].key=key;
		//pBase[m_size].data = Data();
		m_size++;
		return pBase[m_size-1].data;
	}

bool Base::deletePair(const char* k)
	{
	for (int i = 0; i < m_size; i++) //ищем сотрудника по ключу
		{
		if (pBase[i] == k)
			{
				for(int j=i;j<m_size-1;j++)
					{
						pBase[j]= move(pBase[j+1]);
					}
				m_size--;
				return true;
			}
		}
	return false;
	}

Base::Base(const Base& other)
	{
		m_size=other.m_size;
		m_cap=other.m_cap;
		pBase=new Pair[m_cap];
		for(int i=0;i<m_size;i++)
			{
				pBase[i]=other.pBase[i];
			}
	}

Base& Base::operator=(const Base& other)
	{
	if (this != &other)
		{
		m_size = other.m_size;
		m_cap = other.m_cap;
		pBase = new Pair[m_cap];
		for (int i = 0; i < m_size; i++)
			{
			pBase[i] = other.pBase[i];
			}
		}
	return *this;
	}

Base& Base::operator=(Base&& other)
	{
		int temp_size=m_size;
		m_size=other.m_size;
		other.m_size=temp_size;

		int temp_cap = m_cap;
		m_cap = other.m_cap;
		other.m_cap = temp_cap;

		Pair* temp_p=pBase;
		pBase=other.pBase;
		other.pBase=temp_p;

		return *this;
	}

