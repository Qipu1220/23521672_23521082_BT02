#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void SNT(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 1;
	}
	if (dem == 2)
		cout << "NT";
	else
		cout << "Ko NT";

}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	SNT(n);

	return 0;
}