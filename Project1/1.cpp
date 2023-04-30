#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

// tasks 1, 2, var 2, Богдан Дмитрий

int funTask1() {
	double z1 = 0, z2 = 0, pi = M_PI;
	int a = 45;
	cout << "Task 1." << endl << "Input corner a = ";
	cin >> a;

	z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
	z2 = 2 * sqrt(2) * cos(a) * sin(pi / 4 + 2 * a);

	cout << "Result." << endl << "z1 = " << z1 << endl << "z2 = " << z2;

	return 0;
}

void funTask2() {
	cout << endl << "Task 2." << endl;
	double x = -4.5, y = 0.000075, z = 84.5, u = -55.6848, e = M_E;
	double v = 0;
	double v1 = pow(8 + (pow(abs(x - y), 2)) + 1, 1.0/ 3);
	double v2 = x * x + y * y + 2;
	v = v1 / v2 - (pow(e, abs(x - y))) * pow((pow(tan(z), 2) + 1), x);

	cout << "Result 2." << endl << "v = " << v;
	}
	
int main() {
	funTask1();
	funTask2();
	system("pause");
	return 0;
}