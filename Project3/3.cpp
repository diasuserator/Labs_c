#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;


void line(int lim) {
	for (int i = 0; 1 < lim; i++) printf("-"); printf("\n");
}

int fTask3_1() {
	cout << "Task 1" << endl;

	int a = 0, b = 0, c = 0;
	const float st = 0.05;
	const double eps = 0.00001;
	float x = -1;
	double f = 0;
	printf("Input a,b,c :");
	scanf_s("%d%d%d", &a, &b, &c);
	line(22);
	printf("|%5c| %10c|\n", 'x', 'f');
	line(22);
	while (x <= (1 + eps)) {
		if (a < 0 && c != 0) f = a * x * x + b * x + c;
		else if (a > 0 && c == 0) {
			if (abs(x - c) > eps) f = (-a) / (x - c);
			else printf("| %5.2f | div by 0 |\n", x);
		}
		else f = a * (x + c);

		printf("| %5.2f | %10.2f |\n", x, f);
		x += st;
	}
	line(22);
	return 0;

}

int fTask3_2()
{
	int n, i, j, k;
	cout << "Input N (0 < n < 20): ";
	cin >> n;
	if (n < 0 || n > 20 || n % 2 == 0) {
		cout << "Error!" << endl;
		return 1;
	}
	for (i = 0; i < n / 2; i++) {
		for (j = 0; j < i; j++) {
			cout << " ";
		}
		for (k = 0; k < n - 2 * i; k++) {
			cout << "*";
		}
		cout << endl;
	}
	for (i = n / 2; i >= 0; i--) {
		for (j = 0; j < i; j++) {
			cout << " ";
		}
		for (k = 0; k < n - 2 * i; k++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

void fTask3_3() {
	cout << "Task 3 of Lab 3." << endl;
	const double a = 0.1, b = 1.0, h = 0.1;
	const int n = 20;
	double x = a;
	double Y = 0, S = 0;

	line(63);
	printf("| %5c | %15s | %15s | %15s |\n", 'x', "S(x)", "Y(x)", "|Y(x)-S(x)|");
	line(63);

	while (x <= b) {
		Y = x / 2;
		S = 0;
		for (int k = 1; k < n; k++) {
			S += (pow((-1), (k + 1))) * (sin(k * x) / k);
		}
		printf("| %5.3f| %15.13f| %15.13f| %15.13f|\n", x, S, Y, abs(Y - S));
		line(63);
		x += h;
	}

	system("pause");
}


int main() {
	//fTask3_1();
	//fTask3_2();
	//fTask3_3();
	return 0;
}





