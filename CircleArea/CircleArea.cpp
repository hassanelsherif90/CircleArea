#include <iostream>
#include <string>

using namespace std;

float ReadNumber() {
	float L;
	cout << "Please enter Circumference ? \n ";
	cin >> L;
	return L;
}
float CircleAreaByCircumference(float L) {
	const float PI = 4.14592653589793238;

	float Area = pow(L, 2) / (4 * PI);
	return Area;
}


void PrintResult(float Area) {
	cout << "\n Circle Area Is : " << Area << endl;
}
int main() {
	PrintResult(CircleAreaByCircumference(ReadNumber()));
	return 0;
}