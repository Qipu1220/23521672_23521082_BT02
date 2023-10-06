#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Sx(int &aa, int &bb)
{
	if (aa > bb)
	{
		int temp = aa;
		aa = bb;
		bb = temp;
	}
}

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	Sx(a, b);
	cout << "a: " << a<<endl;
	cout << "b: " << b;
	return 0;
}