#include <iostream>
using namespace std;
void ThuTu(float&, float&);

int main()
{
	float a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	ThuTu(a, b);
	ThuTu(b, c);
	ThuTu(a, c);
	ThuTu(a, b);
	cout << "Thu tu tang dan: " << a << b << c;
	return 0;
}

void ThuTu(float& aa, float& bb)
{
	int temp = 0;
	if (aa > bb)
	{
		temp = aa;
		aa = bb;
		bb = temp;
	}
}