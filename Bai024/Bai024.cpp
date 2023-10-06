#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int ht(int nn)
{
	return (nn / 100) % 10;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout <<"Hang tram: "<<ht(n);
	return 0;
}