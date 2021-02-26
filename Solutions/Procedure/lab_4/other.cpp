#include "other.h"

///////////////////////////////////////////////////

int IncByValue(int val) {
	return ++val;
	}

void IncByPointer(int* val) {
	(*val)++;
	}

void IncByReference(int& val) {
	val++;
	}


void Swap(int* pVal1, int* pVal2) {
	int tmpVal = *pVal1;
	*pVal1 = *pVal2;
	*pVal2 = tmpVal;
	}

void Swap(int& rVal1, int& rVal2) {
	int tmpVal = rVal1;
	rVal1 = rVal2;
	rVal2 = tmpVal;
	}


void PrintArray(int* pArray,const int& rowSize,const int& colSize) {
	for (int i = 0; i < rowSize;i++) {
		for (int j = 0; j < colSize;j++) {
			std::cout << pArray[j + colSize * i]<<" ";
			}
		std::cout << std::endl;
		}
	}

void PrintArray() {

	}

int Min(int* pArray, const int& rowSize, const int& colSize) {
	int min = pArray[0];
	for (int i = 1; i < rowSize*colSize;i++) {
		if (pArray[i] < min) min = pArray[i];
		}
	return min;
	}


//Подсказка-заготовка для задания 5а
//Без использования макросов
/*
void VarArgs(int arg1,...)
{
	int number = 0;	//счетчик элементов
	//Объявите указатель на int и инициализируйте его адресом
	//первого аргумента
	
	//Пока не достигнут конец списка:
	// а) печать значения очередного аргумента
	// б) модификация указателя (он должен указывать на
	//следующий аргумент списка)
	// в) увеличить счетчик элементов




	//Печать числа элементов

}
*/


