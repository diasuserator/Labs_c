#include <stdio.h>
#include <iostream>
#include <vector>
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

/*
Функция 4 получает в качестве аргументов - одномерный статический массив и его размер,
возвращает - Максимальный элемент массива
*/

int fun4(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}


/*
Функция 5. Одномерный массив — это суммы столбцов двухмерного
*/

vector<int> fun5() {
	int rows, cols;
	cout << "Enter the number of lines: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> cols;

	vector<vector<int>> arr(rows, vector<int>(cols, 0));
	vector<int> result(cols, 0);

	cout << "Enter the elements of a two - dimensional array: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> arr[i][j];
			result[j] += arr[i][j];
		}
	}

	return result;
}



int main() {
	fun1();

	cout << "Function (2) is start. \n";
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


	cout << "Function (3) is start. \n";
	cout << "Please, Input 3 real numbers :";
	double y1, y2, y3;
	cin >> y1 >> y2 >> y3;
	fun3(y1, y2, y3);
	//printf("Numbers : %f , %f , %f \n", y1, y2, y3); // cout << " Numbers " << y1 << " " << y2 << " " << y3 << endl;

	

	cout << "Function (4) is start. \n";
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int* arr = new int[size];
	cout << "Enter array elements: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int maxElement = fun4(arr, size);
	cout << "Maximum array element: " << maxElement << endl;


	
	cout << "Function (5) is start. \n";
	vector<int> result = fun5();

	cout << "Column sums of a two-dimensional array: ";
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;

	
	return 0;
}

void fun3(double a, double b, double c)
{
	double sum = a + b + c;

	cout << "Result= " << sum << endl;
	return;
}













