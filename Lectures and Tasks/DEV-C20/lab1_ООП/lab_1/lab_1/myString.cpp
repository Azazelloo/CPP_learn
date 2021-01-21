#include "myString.h"

// ����������� ������������.
MyString::MyString(const char* p_str)
{
	if(p_str)
	{
		m_pStr = new char[strlen(p_str) + 1];
		strcpy(m_pStr, p_str);
	}
	else
	{
		m_pStr = new char[strlen("Default") + 1];
		strcpy(m_pStr, "Default");
	}
	
}
// ����������� �����������.
MyString::~MyString()
{
	delete[] m_pStr;
}

const char* MyString::GetString()
{
	if(m_pStr)
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
	m_pStr = new char[strlen(other.m_pStr) + 1];
	strcpy(m_pStr, other.m_pStr);
}

void MyString::SetNewString(const char* p_new_str)
{
	stop
	delete[] m_pStr; //������� ������ ������ �� ����� ����� �������� ������� ������ ������
	m_pStr = new char[strlen(p_new_str)+1];
	strcpy(m_pStr, p_new_str);
}

