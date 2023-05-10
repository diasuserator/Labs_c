#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

void fTask4_1() {
	cout << "Lab_4 Task_1" << endl;
	const int N = 7;
	double T[N];
	cout << "Input array N: " << endl;
	for (int i = 0; i < N; i++)
		cin >> T[i];

	// 1 вопрос
	int d1 = 0;
	for (int i = 0; i < N; i++)
		d1 += T[i];
	cout << "1. Average temperature for the entire period: " << d1 / N << endl;

	// 2 вопрос
	int d2 = T[0];
	for (int i = 0; i < N; i++)
		if (T[i] > d2) {
			d2 = T[i];
		}
	cout << "2. Maximum temperature for the period: " << d2 << endl;

	// 3 вопрос
	int d3 = T[0];
	for (int i = 0; i < N; i++)
		if (T[i] < d3) {
			d3 = T[i];
		}
	cout << "2. Minimum temperature for the period: " << d3 << endl;


	// 4 вопрос
	int d4 = 0;
	for (int i = 0; i < N; i++)
		if (T[i] < 0) d4++;
	cout << "4. Day with temp < 0: " << d4 << endl;

	// 5 вопрос
	int d5 = 0;
	for (int i = 0; i < N; i++)
		if (T[i] < T[i+1]) d5++;
	cout << "5. Warming: " << d5 << endl;

	// 6 вопрос
	int d6 = 0;
	for (int i = 0; i < N; i++)
		if (T[i] == d2) d6++;
	cout << "6. Number of days with maximum temperature: " << d6 << endl;

	// 7 вопрос
	int d7 = 0;
	for (int i = 0; i < N; i++)
		if (T[i] == d2) d7 = i+1;
	cout << "7. Day of the period with maximum temperature: " << d7 << endl;

	// 8 вопрос
	int d8 = 0;
	for (int i = 0; i < N; i++)
		if ((T[i+1] > 0) && (T[i] < 0)) {
			d8 = i+2;
			break;
		}
	cout << "8. On what day of the period did the thaw begin: " << d8 << endl;

	// 9 вопрос
	int d9 = 0;
	int b9 = 0;
	int temp;
	for (int i = 0; i < N; i++)
		if (T[i] == T[i+1]) {
			d9 += 1;
		}
		else if (d9 > b9) {
			b9 = d9;
			d9 = 0;
			temp = T[i];
		}

	cout << "9. longest sequence of days with the same temperature (number of days and temperature): " << b9+1 << ", " << temp << endl;
	}


void fTask4_2() {
	cout << "Lab_4 Task_2" << endl;
	const int N = 100;
	int Array[N];
	int a = 0, b = 0;
	cout << "Input array N: " << endl;
	cin >> a >> b;

	for (int i = a; i < b; i++)
		Array[i] = i + 1;

	for (int i = 0; i < N; i++) cout << Array[i] << "\t" << endl;

	int OT = 0;
	int K = 0;
	cout << "Input K: ";
	cin >> K;

	for (int i = 0; i < N; i++) {
		if (Array[i] > K) {
			OT += 1;
		}
	}	
	cout << "The number of elements is greater than 'K' = " << OT << endl;
}



int main() {
	//fTask4_1();
	fTask4_2();
	//fTask4_3();
	return 0;
}
