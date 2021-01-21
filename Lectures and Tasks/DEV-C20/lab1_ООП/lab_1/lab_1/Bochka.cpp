#include "Bochka.h"

Bochka::Bochka(int litr,double procent)
{
	full_litr = litr;
	spirt_procent = procent;
}

void Bochka::Pereliv(Bochka& obj)
{
	double temp_spirt_to_litr = (obj.full_litr*obj.spirt_procent) / 100 + spirt_procent / 100;//считаем сколько литров спирта получится при переливании (сколько спирта до переливания + спирт в литре)
	stop

	full_litr--;
	obj.full_litr++;

	obj.spirt_procent = (temp_spirt_to_litr*100) / obj.full_litr;//считаем процент спирта после переливания
}

double& Bochka::Get_spirt_procent()
{
	return  spirt_procent;;
}