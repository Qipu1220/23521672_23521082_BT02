#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void KTTC(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "TC";
	else 
		cout << "Ko TC";
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	KTTC(n);

	return 0;
}