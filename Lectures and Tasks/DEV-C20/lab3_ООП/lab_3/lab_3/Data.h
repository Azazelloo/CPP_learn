#pragma once

class Data {
public:
	enum Sex{UNDEF,MALE,FEMALE};
private:
	//Sex m_sex;
	int m_age;
	MyString m_job;
	double m_pay;
public:
	Data();
	Data(int age,const char* job,double pay);

	friend ostream& operator<<(ostream& os, const Data& d);
};

