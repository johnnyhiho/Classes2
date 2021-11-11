#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	return (i1 + i2 + i3) / 3.0;
}

int main()
{
	int n1, n2, n3;
	float a;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3;
	a = average(n1, n2, n3);
	cout << setprecision(1) << fixed << "The average is " << a << endl;
	system("pause");
	return 0;
}