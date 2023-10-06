#include <iostream>
using namespace std;
void HoanVi(int&, int&);

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	HoanVi(a, b);
	cout << "a = " << a << endl << "b = " << b;
	return 0;
}

void HoanVi(int& aa, int& bb)
{
	int temp = aa;
	aa = bb;
	bb = temp;
}

