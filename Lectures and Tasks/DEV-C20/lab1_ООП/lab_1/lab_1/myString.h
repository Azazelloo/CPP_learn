#pragma once
class MyString
{
    char* m_pStr;	//строка-член класса
public:
	MyString(const char* p_str);
	~MyString();
	const char* GetString();
	MyString(const MyString& other);
	void SetNewString(const char* p_new_str);
};

#include "Header.h"
