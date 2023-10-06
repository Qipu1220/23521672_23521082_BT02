#include <iostream>
using namespace std;
int DK1(int);
int DK2(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (DK1(n) == 1 || DK2(n) == 1)
		cout << "Nam nhuan";
	else
		cout << "Nam ko nhuan";
	return 0;
}

int DK1(int nn)
{
	if (nn % 4 == 0 && nn % 100 != 0)
		return 1;
}

int DK2(int nn)
{
	if (nn % 400 == 0)
		return 1;

}