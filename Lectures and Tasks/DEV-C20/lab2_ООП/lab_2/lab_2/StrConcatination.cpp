#include "Header.h"

MyString StrConcatination(const char* str, ...)
	{
	const char** p_str=&str;
	int counter = 0;
	int new_size=0;

	while (strcmp(*p_str, "end"))
		{
		counter++; //�������� ���������� �����
		new_size=new_size+(strlen(*p_str)+1); //�������� ������ �������������� ������
		p_str++;
		}
	p_str-=counter; //���������� ��������� � ������

	char* res_str=new char[new_size];//�������� ������
	strcpy(res_str, p_str[0]);

	for(int i=1;i<counter;i++)
	{
		strcat(res_str, p_str[i]);
	}

	MyString str_obj(res_str);
	return str_obj;//����������� �����������
	stop
	}