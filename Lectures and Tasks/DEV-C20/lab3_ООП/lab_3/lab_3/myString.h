#pragma once
//#include "Header.h"
#include <iostream>

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
	MyString(MyString&& temp);
	MyString& operator=(const MyString& ref_obj);
	MyString operator+(const MyString& str);
	MyString& operator+=(const MyString& ref_obj);

	friend class Pair;
	friend ostream& operator<<(ostream &os, const MyString& str);
};

