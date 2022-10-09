//Lab4_4.c: Обрахунок функції з виведенням результатiв в таблицю.//
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<locale.h>
#include <math.h>
#include <conio.h>

int main(void)
{
	float a, b, x, bx;
	double y;
	setlocale(LC_CTYPE, "ukr");
	do
	{
		printf("\n Введiть значення початку дiапазону обрахунку a="); scanf("%f", &a);
		printf(" Введiть значення кiнця дiапазону обрахунку b="); scanf("%f", &b);
		printf(" Введiть значення кроку для проведення обрахунку bx="); scanf("%f", &bx);
		if ((b-a)/bx < 2) printf("\n Введений Вами дiапазонi [а=%.3f, b=%.3f] та крок bx=%.3f \n При цьому обрахунок не має сенсу \n Задайте iншi числа \n", a, b, bx);
		else if (a < 0) printf("\n Веддене Вами число а= %.3f Не дозволить обрахувати корiнь квадратний з 2*х \n Задайте iншi числа \n", a);
	} 
	while (((b-a)/bx)<2 || a<0);
	printf("\n _________________________________________________________");
	printf("\n | \t Значення x \t | \t Значення у = f(x) \t |");
	printf("\n ---------------------------------------------------------");
	x = a;
	for (float x = a; x <= b; x +=bx)
	{
		y = (exp (sqrt(2 * x))) * pow(x, 2);
		printf("\n | \t %.3f \t \t | \t %.3lf \t \t |", x, y);
	}
	printf("\n ---------------------------------------------------------");
	int getch(); getch();
	return 0;
}
