#include <iostream>
#include <locale.h>
#include <stdio.h>

int main() {
	setlocale(LC_ALL, "");

	//6
	
	
	
	//5
	/*float x, y, z, f, k, m, n;
	printf("������� ����� x ������ 0:  ");
	scanf_s("%f", &x);
	printf("������� ����� y ������ 0:  ");
	scanf_s("%f", &y);
	printf("������� ����� z ������ 0:  ");
	scanf_s("%f", &z);
	if (x < y < z) {
		k = x;
		printf("������� ����� - %f\n", k);
		m = y;
		printf("������� ����� - %f\n", m);
		n = z;
		printf("������� ����� - %f\n", n);
		f = (m*n) / k;
		printf("������� ����� - %f\n", f);
	}
	else if (y < x < z) {
		k = y;
		printf("������� ����� - %f\n", k);
		m = x;
		printf("������� ����� - %f\n", m);
		n = z;
		printf("������� ����� - %f\n", n);
		f = (m*n) / k;
		printf("������� ����� - %f\n", f);
	}
	else if (z < y < x) {
		k = z;
		printf("������� ����� - %f\n", k);
		m = y;
		printf("������� ����� - %f\n", m);
		n = x;
		printf("������� ����� - %f\n", n);
		f = (m*n) / k;
		printf("������� ����� - %f\n", f);
	}
	else if (x < z < y) {
		k = x;
		printf("������� ����� - %f\n", k);
		m = z;
		printf("������� ����� - %f\n", m);
		n = y;
		printf("������� ����� - %f\n", n);
		f = (m*n) / k;
		printf("������� ����� - %f\n", f);
	}
	else if(y<z<x){
		k = y;
		printf("������� ����� - %f\n", y);
		m = z;
		printf("������� ����� - %f\n", m);
		n = x;
		printf("������� ����� - %f\n", n);
		f = (m*n) / k;
		printf("������� ����� - %f\n", f);
		
	}
	else if (z < x < y) {
		k = z;
		printf("������� ����� - %f\n", y);
		m = x;
		printf("������� ����� - %f\n", m);
		n = y;
		printf("������� ����� - %f\n", n);
		f = (m*n) / k;
		printf("������� ����� - %f\n", f);
	}*/




	//4
	/*float f, x, y;
	printf("������� ����� x ������ 0:");
	scanf_s("%f", &x);
	printf("������� ����� y ������ 0:");
	scanf_s("%f", &y);
	if (x > y) {
		f = x / y;
		printf("������� �����: %f", f);
	}
	else {
		f = y / x;
		printf("������� �����: %f", f);
	}*/



	//3
	/*int f, x, y;
	printf("������� ����� x:");
	scanf_s("%d", &x);
	printf("������� ����� y:");
	scanf_s("%d", &y);
	if (x > y) {
		f = x - y;
		printf("������� �����: %d", f);
	}
	else {
		f = y - x;
		printf("������� �����: %d", f);
	}*/





	//2
	/*int f, x, y;
	printf("������� ����� x:");
	scanf_s("%d", &x); 
	printf("������� ����� y:");
	scanf_s("%d", &y);
	if (x == 0, y == 0) {
		printf("������� ����� 0");
	}
	else if (x > 0, y == 0) {
		f = 12 / x;
		printf("������� ����� %d", f);
	}
	else if (x == 0, y > 0) {
		f = 12 / y;
		printf("������� ����� %d", f);
	}
	else {
		f = 144 / (x*y);
		printf("������� ����� %d", f);
	}*/


	//1
	/*int d, a, q;
	double r;
	printf("������� ����� �:");
	scanf_s("%d", &a);
	printf("������� ����� d:");
	scanf_s("%d", &d);
	r = a % d;
	q = a / d;
	printf("����� �����: %d, �������: %f\n", q, r);*/



	system("pause");

}