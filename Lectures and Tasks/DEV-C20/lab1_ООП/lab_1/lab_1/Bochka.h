#pragma once
class Bochka {

	int full_litr;
	double spirt_procent;
public:
	Bochka(int full_litr,double spirt_procent);
	void Pereliv(Bochka& obj);
	double& Get_spirt_procent();
};

#include "Header.h"