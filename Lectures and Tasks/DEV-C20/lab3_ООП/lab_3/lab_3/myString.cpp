#include "Header.h"

// Определение конструктора.
MyString::MyString()
{
	m_pStr = new char[strlen("Default") + 1];
	strcpy(m_pStr, "Default");
}
MyString::MyString(const char* p_str)
{
	stop
	if(p_str)
	{
		stop
		m_pStr = new char[strlen(p_str) + 1];
		strcpy(m_pStr, p_str);
	}
	else
	{
		strcpy(m_pStr, "Default");
	}
	
}

// Определение деструктора.
MyString::~MyString()
{
	delete[] m_pStr;
}

const char* MyString::GetString()const
{
	if(this)
	{
		return m_pStr;
	}
	else
	{
		return "Default";
	}
}

MyString::MyString(const MyString& other)
{
stop
	m_pStr = new char[strlen(other.m_pStr) + 1];
	strcpy(m_pStr, other.m_pStr);
}

void MyString::SetNewString(const char* p_new_str)
{
	stop
	delete[] m_pStr; //удалили старую строку тк новая может занимать сколько угодно памяти
	m_pStr = new char[strlen(p_new_str)+1];
	strcpy(m_pStr, p_new_str);
}

MyString::MyString(MyString&& tmp)
{
	stop
	m_pStr = tmp.m_pStr;
	tmp.m_pStr = nullptr;
}


MyString& MyString::operator=(const MyString& ref_obj)
	{
	stop
	if (this != &ref_obj)
		{
		stop
		delete[] m_pStr;
		m_pStr = new char[strlen(ref_obj.m_pStr) + 1];
		strcpy(m_pStr, ref_obj.m_pStr);
		}

	return *this;
	}

MyString MyString::operator+(const MyString& str)
{
	MyString result;
	result.m_pStr = new char[strlen(m_pStr)+strlen(str.m_pStr)+1];
	strcpy(result.m_pStr,m_pStr);
	strcat(result.m_pStr, str.m_pStr);
	stop
	return result;
}

MyString& MyString::operator+=(const MyString& ref_obj)
{
	const char* temp = m_pStr;
	m_pStr = new char[strlen(m_pStr)+strlen(ref_obj.m_pStr)+1];
	strcpy(m_pStr,temp);
	strcat(m_pStr,ref_obj.m_pStr);
	stop
	return *this;
}

