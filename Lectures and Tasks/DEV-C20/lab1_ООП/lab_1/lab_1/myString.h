#pragma once
class MyString
{
    char* m_pStr;	//������-���� ������
public:
	MyString(const char* p_str);
	~MyString();
	const char* GetString();
	MyString(const MyString& other);
	void SetNewString(const char* p_new_str);
};

#include "Header.h"
