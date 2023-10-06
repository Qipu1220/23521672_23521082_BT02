#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void ktm(float xxA, float yyA, float xxB, float yyB, float xxC, float yyC,float xxM,float yyM)
{
	float SABC = abs(xxA * yyB + xxB * yyC + xxC * yyA - xxB * yyA - xxC * yyB - xxA * yyC) / 2;
	float SMAB = abs(xxA * yyB + xxB * yyM + xxM * yyA - xxB * yyA - xxM * yyB - xxA * yyM) / 2;
	float SMBC = abs(xxM * yyB + xxB * yyC + xxC * yyM - xxB * yyM - xxC * yyB - xxM * yyC) / 2;
	float SMAC = abs(xxA * yyM + xxM * yyC + xxC * yyA - xxM * yyA - xxC * yyM - xxA * yyC) / 2;
	float s = SMAB + SMBC + SMAC;

	if (s = SABC)
		cout << "M trong";
	else
		cout << "M ngoai";

}

int main()
{
	float xA, yA;
	cout << "Nhap toa do diem A:" << endl;
	cout << "Nhap xA: ";
	cin >> xA;
	cout << "Nhap yA: ";
	cin >> yA;

	float xB, yB;
	cout << "Nhap toa do diem B:" << endl;
	cout << "Nhap xB: ";
	cin >> xB;
	cout << "Nhap yB: ";
	cin >> yB;

	float xC, yC;
	cout << "Nhap toa do diem C:" << endl;
	cout << "Nhap xC: ";
	cin >> xC;
	cout << "Nhap yC: ";
	cin >> yC;

	float xM, yM;
	cout << "Nhap toa do diem M:" << endl;
	cout << "Nhap xM: ";
	cin >> xM;
	cout << "Nhap yM: ";
	cin >> yM;

	ktm(xA, yA, xB, yB, xC, yC, xM, yM);

	return 0;
}