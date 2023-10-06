#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float&, float&);
float Canh(float, float, float, float);
float DienTich(float);

int main()
{
	float x1, y1, x2, y2, x3, y3;
    cout << "Diem thu nhat: " << endl;
	Nhap(x1, y1);
	cout << "Diem thu hai: " << endl;
	Nhap(x2, y2);
	cout << "Diem thu ba: " << endl;
	Nhap(x3, y3);
	float p = (Canh(x1, y1, x2, y2) + Canh(x2, y2, x3, y3) + Canh(x1, y1, x3, y3))/2;
    float s = sqrt(p * (p - Canh(x1, y1, x2, y2)) * (p - Canh(x2, y2, x3, y3)) * (p - Canh(x1, y1, x3, y3)));
	cout << fixed << setprecision(2) << "Dien tich tam giac: " << s;
	return 0;
}

void Nhap(float& xx, float& yy)
{
	cout << "Nhap hoanh do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}

float Canh(float x1, float y1, float x2, float y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
