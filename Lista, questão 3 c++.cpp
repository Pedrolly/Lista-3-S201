#include <iostream>
using namespace std;
double area(double x)
{
	double A;
	double D;
	A = 3.14 * (x * x);
	D = 2 * x;
	cout << "Area do circulo: " << A << endl;
	cout << "Diametro do circulo: " << D << endl;
}
int main()
{
	double x;
	cout << "Entre com o raio de um circulo" << endl;
	cin >> x;
	area(x);
	return 0;
}



