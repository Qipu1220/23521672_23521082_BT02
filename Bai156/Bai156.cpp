#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void daygiatri(int nn)
{
	int t = 1;
	int i = 1;

	while (i <= nn)
	{
		t = t * i;
		cout << t << " ";
		i = i + 1;
	}
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	daygiatri(n);

	return 0;
}