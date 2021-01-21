// functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\lib\Header.h"
#include <conio.h>





int _tmain(int argc, _TCHAR* argv[])
{
	

	StartDemo();
	getch();
	//Задание размерностей двухмерного массива
	int Rows = 15, Columns = 17;
	SetDimensions(Rows, Columns);
	getch();
	static int* p = new int[Rows * Columns];
	static int** pp = new int*[Rows];
		for (int i = 0; i < Rows * Columns; i++)
		{
			p[i] = EMPTY;
		}

		for (int i = 0; i < Rows; i++)
		{
			pp[i] = p + i*Columns;
		}
		/*
	//По периметру по часовой стрелке:
		for (int i = 0; i < Columns; i++)
		{
			pp[0][i] = RED;
			DrawBalls( p, Rows, Columns);
			//DrawBalls(p, 11, Columns);
			pause(200);
			pp[0][i] = EMPTY;
		}
		for (int i = 0; i < Rows; i++)
		{
			pp[i][Columns-1] = RED;
			DrawBalls(p, Rows, Columns);
			pause(200);
			pp[i][Columns - 1] = EMPTY;
		}
		for (int i = Columns-1; i >=0 ; i--)
		{
			pp[Rows-1][i] = RED;
			DrawBalls(p, Rows, Columns);
			pause(200);
			pp[Rows - 1][i] = EMPTY;
		}
		for (int i = Rows-1; i >=0; i--)
		{
			
			pp[i][0] = RED;
			DrawBalls(p, Rows, Columns);
			pause(200);
			pp[i][0] = EMPTY;
		}
	//Отрисовка шариков
	//DrawBalls( p, Rows, Columns);
	

	getch();
	for (int i = Rows - 1; i >= 0; i--)
	{
		for (int j = Rows - 1; j >= 0; j--)
		{
			pp[i][j] = RED;
			DrawBalls(p, Rows, Columns);
			pause(200);
		}
		
	}
	*/

	getch();
	for (int i = Rows - 1; i >= 0; i--)
	{
	//	for (int j = Columns - 1; j >= 0; j--)
	//	{
			//if (i == j)
			{
				pp[i][i] = RED;
				DrawBalls(p, Rows, Columns);
				pause(200);
			}
	}
		for (int i = Rows - 1; i >= 0; i--)
		{
	
	
			{
			pp[i][Rows - 1 - i] = GREEN;
			DrawBalls(p, Rows, Columns);
			pause(200);
			}
			
	//	}

	}
	getch();


	FinishDemo();

	return 0;
}

