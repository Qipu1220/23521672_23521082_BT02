#include <iostream>
using namespace std;
int UocSoLeLN(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Uoc so le lon nhat: " << UocSoLeLN(n);
	return 0;
}

int UocSoLeLN(int nn)
{
	int t = nn;
	while (t % 2 == 0)
		t = t / 2;
	return t;
}