#pragma once
class Base {
	int m_size;
	int m_cap;
	Pair* pBase;
public:
	Base();
	~Base();
	Data& operator[](const char* key);
	bool deletePair(const char* k);
	Base(const Base& other);
	Base& operator=(const Base& b);
	Base& operator=(Base&& other);
	

	friend ostream& operator<<(ostream& os, const Base& bd);
};