#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;

int funTask1() {
	cout << endl << "Task 1." << endl;
	int x = 0;
	cout << "Input x" << endl;
	cin >> x;
	if (x < 2023) {
		cout << "past";
	}
	if (x == 2023) {
		cout << "the present";
	}
	if (x > 2023) {
		cout << "future";
	}
	if (x % 2 == 0) {
		cout << " honest";
	}
	if (x % 2 != 0) {
		cout << " odd";
	}
	if ((x % 400 == 0) || (x == 2000)) {
		cout << " leap year";
	}
	if ((x % 400 != 0) || (x == 1900)) {
		cout << " not a leap year";
	}

	return 0;
}

int funTask2() {
	cout << endl << "Task 2." << endl;
	int x = 0;
	cout << "Input x" << endl;
	cin >> x;
	if (x % 12 == 0) {
		cout << "monkey";
	}
	if (x % 12 == 1) {
		cout << "rooster";
	}
	if (x % 12 == 2) {
		cout << "dogs";
	}
	if (x % 12 == 3) {
		cout << "boar";
	}
	if (x % 12 == 4) {
		cout << "rats";
	}
	if (x % 12 == 5) {
		cout << "ox";
	}
	if (x % 12 == 6) {
		cout << "tiger";
	}
	if (x % 12 == 7) {
		cout << "rabbit";
	}
	if (x % 12 == 8) {
		cout << "dragon";
	}
	if (x % 12 == 9) {
		cout << "snake";
	}
	if (x % 12 == 10) {
		cout << "horse";
	}
	if (x % 12 == 11) {
		cout << "sheep";
	}

	return 0;
}


int funTask3() {
	// x = (v) ? a : b;
	cout << endl << "Task 3." << endl;

	double x = 0, y = 0;
	cout << "Input x" << endl;
	cin >> x;
	cout << "Input y" << endl;
	cin >> y;

	bool v = -2 <= y <= 1.5;

	cout << ((v) ? "Yes" : "No") << endl;

	return 0;
}

int funTask4() {
	cout << endl << "Task 4." << endl;
	int a = 0, b = 0;
	double x = 0, y = 0, z = 0;
	cout << "Input a, b, z : " << endl;
	cin >> a >> b >> z;
	if (z < a * b) {
		x = sqrt(a * a + b * b * z);
		cout << "branch - (z<a*b)" << z << '<' << a << '*' << b << endl;
	}
	else {
		x = pow(sin(z), 2) + abs(a * b * z);
		cout << "branch - (z>=a*b) " << z << ">=" << a << "*" << b << endl;
	}

	y = (a * x + b * x * cos(sqrt(x))) / (x + a * b);

	cout << "Result" << endl << "x= " << x << " y= " << y << endl;



	return 0;
}

int funTask5() {
	cout << endl << "Task 5." << endl;
	float n = 0, x = 0, y = 0, z = 0;
	cout << "Input x" << endl;
	cin >> x;
	cout << "Input y" << endl;
	cin >> y;
	cout << "Input z" << endl;
	cin >> z;

	float c1 = x + y;
	float c2 = y - z;

	float min = c1;

	if (c2 < c1) {
		min = c2;
	}

	float max = x;

	if (y > x) {
		max = y;
	}

	if ((x != y) && (y != z) && (z != x) && (max != 0)) {
		n = min / max;
		cout << "Result" << endl << "n= " << n << endl;

	}

	if (max == 0) {
		cout << "Try again. Division by zero is not possible. " << endl;
	}
	if ((x == y) || (y == z) || (z == x)) {
		cout << "Try again. 'x', 'y' or 'z' value is repeated. " << endl;
	}

		
	return 0;
}




int main() {
	//funTask1();
	//funTask2();
	//funTask3();
	//funTask4();
	funTask5();


	system("pause");
	return 0;
}