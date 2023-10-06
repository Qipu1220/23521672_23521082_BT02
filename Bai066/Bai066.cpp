#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void KT(int nn)
{
	int flag = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Ton tai chu so chan";
	else 
	    cout << "Ko ton tai chu so chan";
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	KT(n);
	return 0;
}