#pragma once
class MyString
{
    char* m_pStr;	//строка-член класса
public:
	MyString();
	MyString(const char* p_str);
	~MyString();
	const char* GetString()const;
	MyString(const MyString& other);
	void SetNewString(const char* p_new_str);
};

#include "Header.h"
