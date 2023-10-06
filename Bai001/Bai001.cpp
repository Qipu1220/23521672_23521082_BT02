#include <iostream>
#include <cmath>
#include <iomanip>
void NhapDiem(float&, float&);
float TinhKhoangCach(float, float, float, float);
void Xuat(float, float);
using namespace std;

int main()
{
	float x1, y1;
	cout << "Diem thu nhat: " << endl;
	NhapDiem(x1, y1);
	Xuat(x1, y1);
	float x2, y2;
	cout << "Diem thu hai: " << endl;
	NhapDiem(x2, y2);
	Xuat(x2, y2);
	cout << "Khoang cach cua 2 diem: "; 
	cout <<fixed<<setprecision(2)<<TinhKhoangCach(x1, y1, x2, y2);
	return 0;
}

void NhapDiem( float& xx, float& yy)
{
	cout << "Nhap hoand do: " ;
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}

float TinhKhoangCach(float x1, float y1, float x2, float y2)
{
	return  sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void Xuat(float xx, float yy)
{
	cout << "Hoang do: " << xx << endl;
	cout << "Tung do: " << yy << endl;
}