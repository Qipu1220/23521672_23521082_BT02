#include <iostream>
#include <iomanip>
void Nhap(float&);
float ChuyenDoi(float);
using namespace std;

int main()
{
	float f;
	Nhap(f);
	cout << "Nhiet do C: ";
	cout << fixed << setprecision(2) << ChuyenDoi(f);
	return 0;
}

void Nhap(float& ff)
{
	cout << "Nhap nhiet do F: ";
	cin >> ff;
}

float ChuyenDoi(float ff)
{
	return 5 * (ff - 32) / 9;
}