/*Задаються три пари чисел, які задають трикутник на площині. Крім
того,задається ще одна пара чисел, яка задає точку на площині. Визначити, чи
лежить точка усередині трикутника, чи на одному з його ребер, чи зовні.*/

#include "pch.h"
#include <iostream>
#include <ctime>
#include<cmath>
using namespace std;

//создаем точки со случайными координатами
		//в 0 рядке хранятся Х, в 1 рядке хранятся У
const int ROW = 2;//хранятся координаты
const int COL = 4;
void coord(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3);
void setcoord(int arr[ROW][COL]);
void proverka(int &x1, int &x2, int &x3, int &y1, int &y2, int &y3);
void prisvoit(int &x1, int &x2, int &x3, int &y1, int &y2, int &y3, int &x4, int &y4, int arr[ROW][COL]);





int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int arr[ROW][COL];
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
			arr[i][j] = rand() % 11;//координатами будут случайные числа от 0 до 10
	}
	int &x1 = arr[0][0];
	int &y1 = arr[1][0];
	int &x2 = arr[0][1];
	int &y2 = arr[1][1];
	int &x3 = arr[0][2];
	int &y3 = arr[1][2];
	int &x4 = arr[0][3];
	int &y4 = arr[1][3];

	//void prisvoit(int &x1, int &x2, int &x3, int &y1, int &y2, int &y3, int &x4, int &y4, int arr[ROW][COL]);//создаем ссылки, указывающие на значения,которые хрянятся в массиве
	for (int i = 0; i <= 4; i++)
	{
		switch (i) {
		case 1: {cout << "(x1,y1)=" << "(" << arr[0][0] << "," << arr[1][0] << ")" << endl; break; }
		case 2: {cout << "(x2,y2)=" << "(" << arr[0][1] << "," << arr[1][1] << ")" << endl; break; }
		case 3: {cout << "(x3,y3)=" << "(" << arr[0][2] << "," << arr[1][2] << ")" << endl; break; }
		case 4: {cout << "(x4,y4)=" << "(" << arr[0][3] << "," << arr[1][3] << ")" << endl; break; }

		}

	}
	void proverka(int &x1, int &x2, int &x3, int &y1, int &y2, int &y3);// // проверка того, сусчествует ли такой треухгольник
	int A[2];
	int B[2];
	int C[2];
	void coord(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3);
	cout << "A (x1,y1)\t"<<A[0]<<A[1] << endl;
	cout << "B (x2,y2)\t" << endl;
	cout << "C (x3,y3)\t" << endl;
	cout << "D (x4,y4)\t" << endl;



}
void prisvoit(int &x1, int &x2, int &x3, int &y1, int &y2, int &y3, int &x4, int &y4,int arr[ROW][COL])//создаем ссылки, указывающие на значения,которые хрянятся в массиве 
{
	 x1 = arr[0][0];
	 y1 = arr[1][0];
	 x2 = arr[0][1];
	 y2 = arr[1][1];
	 x3 = arr[0][2];
	 y3 = arr[1][2];
	 x4 = arr[0][3];
	 y4 = arr[1][3];
}

void proverka(int &x1, int &x2, int &x3, int &y1, int &y2, int &y3)
			// проверка того, сусчествует ли такой треухгольник
			//если три точки лежат на одной прямой- это не трехугольник
			//если три точки совпадают, либо две из них совпадают- трехугольника не сусчествует
{
	if ((x1 == x2) && (x2 == x3))
	{
		void setcoord(int arr);//выбрать координаты, координатами будут случайные числа от 0 до 10
	}
	else if (((x1 == x2) && (y1 == y2)) || ((x2 == x3) && (y2 == y3)) || ((x1 == x2) && (y1 == y2)))
	{
		void setcoord(int arr);//выбрать координаты, координатами будут случайные числа от 0 до 10
	}
	

}
void setcoord(int arr[ROW][COL],const int ROW,const  int COL) //выбрать координаты, координатами будут случайные числа от 0 до 10
{
	
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
			arr[i][j] = rand() % 11;//координатами будут случайные числа от 0 до 10
	}
}
void coord(int &x1, int &y1, int &x2, int &y2, int &x3, int &y3, int A[],int B[],int C[] )// точки A,B,C,их координаты упорядачиваются таким образом,что А- снизу, В- почередине, С- верхняя 
{
	int min = NULL; 
	int mid = NULL;      //заполняю нулями
	int max = NULL;
	
	if ((x1 < x2) && (x2 < x3))
	{
		int A[2] = { x1, y1 };
		int B[2] = { x2, y2 };
		int C[2] = { x3, y3 };
	}
	else
	{

		if (x1 > x2)
		{
			min = x2; max = x1;
			if(x3>x1)
			{
				max = x3;
			}
			if (x2 > x3)
			{
				min = x3;
			}
		}// vrode norm
		else if (x2 > x3)
		{
			max = x2; min = x3;
				if (x1 < x3) 
				{ min = x1; }
				if (x1 > x2)
				{
				max = x1;
				}// vrode norm
		}
		else if ((x1 == x2) && (x1 < x3)) 
		{
			max = y3;
			if(y1<y2)
			{
				min = y1;
			}
			if(y1>y2)
			{
				min = y2;
			}
		}
		else if ((x1 == x2) && (x1 > x3))
		{
			min = y3;
			if(y1<y2)
			{
				max = y2;
			}
			if(y1>y2)
			{
				max = y1;
			}
		}
		else if ((x2 == x3) && (x1 < x3))
		{
			min = y1;
			if (y2 > y3)
			{
				max = y2;
			}
			if (y2 < y3)
			{
				max = y3;
			}
		}
		else if ((x2 == x3) && (x1 > x3))
		{
			max = y1;
			if (y2 > y3)
			{
				min=y3;
			}
			if (y2 < y3)
			{
				min=y2;
			}
		}
		else if ((x1 == x3) && (x1 <x2))
		{
			max = y2;
			if (y1 < y3)
			{
				min = y1;
			}
			if (y1 > y3)
			{
				min = y3;
			}
		}
		else if ((x1 == x3) && (x1 > x2))
		{
			min = y2;
			if (y1 < y3)
			{
				max=y3;
			}
			if (y1 > y3)
			{
				max = y1;
			}
		}
		if((x1 != x2) && (x2 != x3) && (x1 != x3))
		{
			mid = (x1 + x2 + x3) - (min + max);
		}
		if((x1 == x2) || (x2 == x3) || (x1 == x3))
		{
			mid = (y1 + y2 + y3) - (min + max);
		}
			if((x1==min)||(y1==min))
			{
			int A[2] = { x1,y1 };
			}
				if ((x2 == min) || (y2 == min))
				{
				int A[2] = { x2,y2 };
				}
					if ((x3 == min) || (y3 == min))
					{
					int A[2] = { x3,y3 };
					}
					/////////////////////
					if ((x1 == mid) || (y1 == mid))
					{
					int B[2] = { x1,y1 };
					}
						if ((x2 == mid) || (y2 == mid))
						{
						int B[2] = { x2,y2 };
						}
							if ((x3 == mid) || (y3 == mid))
							{
							int B[2] = { x3,y3 };
							}
					//////////////////////
							if ((x1 == max) || (y1 == max))
							{
								int C[2] = { x1,y1 };
							}
								if ((x2 == max) || (y2 == max))
								{
								int C[2] = { x2,y2 };
								}
									if ((x3 == max) || (y3 == max))
									{
									int C[2] = { x3,y3 };
									}
	}
}