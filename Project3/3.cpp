#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;


void line(int lim) {
	for (int i = 0; 1 < lim; i++) printf("-"); printf("\n");
}

int fTask4_1() {
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


int main() {

	fTask4_1();
	system("pause");
	return 0;
}

