#include <stdio.h>
#include <iostream>
using namespace std;

int x1, x2;
/*
Функция 1 - без аргументов.
Вычислить сумму всех четных чисел в диапазоне от 120 до 316
*/

int fun1()
{
	cout << "fun1 in process ... \n";
	int sum = 0;
	for (int i = 120; i <= 316;)
	{
		sum += i; // 120+122+124+126+...
		i += 2;
	}
	cout << "Result of function 1 is " << sum << endl;
	return 0;
}

/*
Функция 2.
Проверить, имеют ли два аргумента одинаковый знак
*/

bool fun2(int a, int b) {
	if ((a >= 0 && b >= 0) || (a < 0 && b < 0)) {
		return true;
	}
	else {
		return false;
	}
}

/*
Функция 3 - (по ссылке)
Найти минимум из 3-х действительных чисел и значение первого аргумента заменяет на полученный результат
*/

void fun3(double, double, double);



int main() {
	//fun1();

/*
	int num1, num2;
	cout << "enter the first number: ";
	cin >> num1;
	cout << "enter the second number: ";
	cin >> num2;
	if (fun2(num1, num2)) {
		cout << "numbers have the same sign" << endl;
	}
	else {
		cout << "numbers have different signs" << endl;
	}
*/

	cout << "Function (3) is start. \n";
	cout << "Please, Input 3 real numbers :";
	double y1, y2, y3;
	cin >> y1 >> y2 >> y3;
	fun3(y1, y2, y3);
	//printf("Numbers : %f , %f , %f \n", y1, y2, y3); // cout << " Numbers " << y1 << " " << y2 << " " << y3 << endl;

	return 0;
}

void fun3(double a, double b, double c)
{
	double sum = a + b + c;

	cout << "Result= " << sum << endl;
	return;
}













