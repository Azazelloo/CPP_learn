
/*************************************************************
	������������ ������� �4. �������.
	����������, �����������, �����.
	�������� ����������. ����������� ��������.
	��������� �� �������
*************************************************************/
#include <iostream>
#include <tchar.h>
//#include <cstdio>
//#include <cstdarg>
#include "other.h"


#define	  stop __asm nop

int _tmain()
{
	/*
	/////////////////////////////////////////////////////////////////////////////
	// ������� 1. ������.
	//�������� ������ �� ��� double. ����������� ������ �������� ��������



	//����������������  ��������� �������. ��� ������� �������, �����
	//linker �� ������� ������ ��� �������� exe-�����. ���������: ref - ���
	//������� �� ��������� � ������� ����� ������!
	
	//ref++;




	//���������������� ��������� ������. ��� ������� �������, �����
	//���������� �� ������� ������ 
	//int& ref1 = 1;



	//����� ���������:
	char c='A';
	char* pc = &c;
	//�������� ������ �� ���������. ����������� ������ ��������
	//�) �������� �� ������
	//�) ��� �����

	
*/
	

	//������� 2. ������� ��� �������� ���������� �) �� ��������,
	// �) �� ������, �) �� ���������
	//�������� � ���������� ��� ������� , ������� ����������� ��������
	//� ������� ��������� �������� �� 1 ( �) - IncByValue(),
	// �) - IncByPointer(), �) - IncByReference() ). 
	//��������� ������������ � ������� ���������.
	//
	//���������: ���������� ������� ������� �������� � ������������ ����
	int val =1;//�������� ���� ���������� ������ ���� ��������� � �������
				//������ �� ������� �� �������
  
	stop

/*
	//������� 2�. �������� ���������� c ������� ��������� � �� ������. 
	//������������� ����� �������.
	//�������� ������� (�������) Swap(), ������� ������ ��������
	//���������� nX � nY �������. 
	// �)������� ������ ��������� ��� ��������� �� int, �������� � 
	//�������� ������ �������� ���������� � ���������� ���������
	// �)������� ������ ��������� ��� ������ �� int 
	//��������� ������������ � ������� ������������ ���� ���������.

	int	nX = 1;
	int nY = -1;
	Swap(...  ,  ...);	//�������� ������� �������� nX � nY �
						//������� ���������� �� nX � nY
	Swap(...  ,  ...);	//� ������ ������� � ������� ������ �� nX � nY
	stop
*/
/*
//������� 3. ��������� �� ������� � �������� ����������.
//3a.�������� ��� �������� ������� ������ ���������
//1. �� ���������� ���������� �������
//2. � ������������ ���������� ������� (��� ����������� �����������)

//1.��������:
int ar[N][M] = {������ ���������������};//��������� - ��� � ��� ������ ���� ������ N � M
PrintArray(ar, ... ����� ����, ����������� �������� ��� �����-������ ������);

//3b.�������� ��� �������� ������� ������ ������������ ��������
//1. �� ���������� ���������� �������
//2. � ������������ ���������� ������� (��� ����������� �����������)

//1.��������:
int ar[N][M] = {������ ���������������};//��������� - ��� � ��� ������ ���� ������ N � M
int res = Min(ar, ... ����� ����, ����������� �������� ��� �����-������ ������);
*/
/*
//3c. �������� ������� ��������� ���� ����� - MyStrCmp():
//������� ������ ��������� ��� ��������� �� ������������
//������ (�������� �� ������ ������� �����������, ��� �������
//�� ����� ����� �������������� ���������� �����)
//������� ������ ���������� ������������� ��������, ����
//������ ������ ����������������� ������ ������, 0 - ����
//��� ����� � ������������� ��������, ���� ������ ������
//������ ������.
���������: ��� ������������������ ������� ������������ ���� ��������.
//���������, ��� ��������� ����� ������ �������� ������� ����.


//�������� ��� ������ ��� ���������:

//�������� ������� ���������

//�������� ��������� ��������� � ������� cout:

stop
*/
/*
	//������� 4.������ � �������� ����������. �������� ��������� �� ����������
	//������ � �������� ��������� �������.
	//�������� ��� ����������������� ���� ����� �������:
	//1.  ... DayOfYear(...)
	//- ����������� ���� ������ (�����,����� � ��� �������� � �������� ����������)
	//� ���������� ���� ����(������������ ��������)
	//2. ... DayOfMonth(...) - ������� ����������� ���������� ���� ���� � ���� ������
	// (��������� ��� � ���������� ���� ���� � �������� ���������� � ������ ������������
	// ���� ������ � ����� ������ � �����-�� ������� �������� ��� �������� ���������� ���������)
	
	//��������� ����������������� ����� ������� � ������� ���������� ���������:
	

	//� �������� ���������� ��� �������� ��������� "���������� - ������������" ���.
	//��� ����� ������������ � ������ ������� � �������� ������ �� ���������� ����������
	//������ ������������ ���� ����������� ������� nDayTab

	int nDayTab[2][12]={
		{31,28,31,30,31,30,31,31,30,31,30,31}, //������������ ���
		{31,29,31,30,31,30,31,31,30,31,30,31}	};	//���������� ���
	
	//����� ������� DayOfYear
	//...


	//�������� ���������� �������� �������� DayOfMonth
	//...

	stop
*/
	//������� 5*. �������� ���������� ������ (����������� ����������� � ��������
	//���������� ���������), ��������� ��� ����������.
	//�������� �������, ������� ��������� � ������ ����� �������� ������ ��� �������,
	//��� ������ �������� � ������� ��� ���. ���������: ��� ���� ������
	//������� ������ �����������!
	//��� �������� �������� �������, ������� ������� �������� ���� ��������� �� �����


/*
	//������� 6. ����������� �������. �������� ����������� ������� ����������
	//����� ������ N ����������� �����.



*/
/*
	//������� 7�. ������� � ���������� ������ ����������.
	//�������� ������� (���� ��������� VarArgs, �� ������������
	// �������), ������� ��������� ���������� ����� ����������
	// ���� int � ������� �� ������ ����� �������� ���������� �
	// �� ��������.
	// ��������� ����� ������ �������� ������� ��������.
	
	int nN1=5, nN2=11, nN3=4, nN4=7, nN5=-1;
	VarArgs(nN1,0);	
	VarArgs(nN1,nN2,0);	
	VarArgs(nN1,nN2,nN3,nN4,nN5,0);	
	stop


	//������� 7�. ������������� ������� 5� � ������� ��������
	// va_start, va_arg, va_end
*/




	//������� 8. ����������� ������.
	//�������� �������, ������� ������� ����������� �������� � �������,
	// ����� �������, ����� �� ����� ����� ���� ������������ ����� �� ����� 
	// ���������: *MyMin(���������) = 0;
	
	

	return 0;
}//main

