#include <iostream>
#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "");

	//6
	
	
	
	//5
	/*float x, y, z, f, k, m, n;
	printf("Введите число x больше 0:  ");
	scanf_s("%f", &x);
	printf("Введите число y больше 0:  ");
	scanf_s("%f", &y);
	printf("Введите число z больше 0:  ");
	scanf_s("%f", &z);
	if (x < y < z) {
		k = x;
		printf("Меньшее число - %f\n", k);
		m = y;
		printf("Среднее число - %f\n", m);
		n = z;
		printf("Большее число - %f\n", n);
		f = (m*n) / k;
		printf("Функция равна - %f\n", f);
	}
	else if (y < x < z) {
		k = y;
		printf("Меньшее число - %f\n", k);
		m = x;
		printf("Среднее число - %f\n", m);
		n = z;
		printf("Большее число - %f\n", n);
		f = (m*n) / k;
		printf("Функция равна - %f\n", f);
	}
	else if (z < y < x) {
		k = z;
		printf("Меньшее число - %f\n", k);
		m = y;
		printf("Среднее число - %f\n", m);
		n = x;
		printf("Большее число - %f\n", n);
		f = (m*n) / k;
		printf("Функция равна - %f\n", f);
	}
	else if (x < z < y) {
		k = x;
		printf("Меньшее число - %f\n", k);
		m = z;
		printf("Среднее число - %f\n", m);
		n = y;
		printf("Большее число - %f\n", n);
		f = (m*n) / k;
		printf("Функция равна - %f\n", f);
	}
	else if(y<z<x){
		k = y;
		printf("Меньшее число - %f\n", y);
		m = z;
		printf("Среднее число - %f\n", m);
		n = x;
		printf("Большее число - %f\n", n);
		f = (m*n) / k;
		printf("Функция равна - %f\n", f);
		
	}
	else if (z < x < y) {
		k = z;
		printf("Меньшее число - %f\n", y);
		m = x;
		printf("Среднее число - %f\n", m);
		n = y;
		printf("Большее число - %f\n", n);
		f = (m*n) / k;
		printf("Функция равна - %f\n", f);
	}*/




	//4
	/*float f, x, y;
	printf("Введите число x больше 0:");
	scanf_s("%f", &x);
	printf("Введите число y больше 0:");
	scanf_s("%f", &y);
	if (x > y) {
		f = x / y;
		printf("Функция равна: %f", f);
	}
	else {
		f = y / x;
		printf("Функция равна: %f", f);
	}*/



	//3
	/*int f, x, y;
	printf("Введите число x:");
	scanf_s("%d", &x);
	printf("Введите число y:");
	scanf_s("%d", &y);
	if (x > y) {
		f = x - y;
		printf("Функция равна: %d", f);
	}
	else {
		f = y - x;
		printf("Функция равна: %d", f);
	}*/





	//2
	/*int f, x, y;
	printf("Введите число x:");
	scanf_s("%d", &x); 
	printf("Введите число y:");
	scanf_s("%d", &y);
	if (x == 0, y == 0) {
		printf("Функция равна 0");
	}
	else if (x > 0, y == 0) {
		f = 12 / x;
		printf("Функция равна %d", f);
	}
	else if (x == 0, y > 0) {
		f = 12 / y;
		printf("Функция равна %d", f);
	}
	else {
		f = 144 / (x*y);
		printf("Функция равна %d", f);
	}*/


	//1
	/*int d, a, q;
	double r;
	printf("Введите число а:");
	scanf_s("%d", &a);
	printf("Введите число d:");
	scanf_s("%d", &d);
	r = a % d;
	q = a / d;
	printf("Целое число: %d, остаток: %f\n", q, r);*/



	system("pause");

}