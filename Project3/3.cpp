#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int fTask3() {
	cout << "Task 3" << endl;
	int a = 0, b = 0;
	double x = 0, y = 0, z = 0;
	


	//x = sqrt(a * a + b * x * cos(sqrt(x))) / (x + a * b);

	if (z < a * b)
		x = sqrt(a * a + b * b * z);
	else
		x = pow(sin(z), 2) + abs(a * b * z);

	y = (a * x + b * x * cos(sqrt(x))) / (x + a * b);

	cout << "Result" << endl << "x = " << x << "y = " << y;

	return 0;
}

int main() {
	fTask3();
	system("pause");
	return 0;
}
