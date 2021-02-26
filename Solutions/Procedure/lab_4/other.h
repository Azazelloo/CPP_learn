#pragma once
//Прототипы используемых в данном задании функций:

#include <iostream>
#include <tchar.h>
//#include <cstdio>
//#include <cstdarg>



#define	  stop __asm nop

extern double& ref;

int IncByValue(int val);
void IncByPointer(int* val);
void IncByReference(int& val);

void Swap(int* pVal1, int* pVal2);
void Swap(int& rVal1,int& rVal2);

void PrintArray(int* pArray,const int& rowSize,const int& colSize);


int Min(int* pArray, const int& rowSize, const int& colSize);