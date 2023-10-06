#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Cv(int xx1, int yy1, int xx2, int yy2, int xx3, int yy3)
{
	float a = sqrt(pow(xx2 - xx1, 2) + pow(yy2 - yy1, 2));
	float b = sqrt(pow(xx3 - xx2, 2) + pow(yy3 - yy2, 2));
	float c = sqrt(pow(xx3 - xx1, 2) + pow(yy3 - yy1, 2));
	float p = a + b + c;
	return p;
}

int main()
{
	int x1, y1, x2, y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2>>x3>>y3;
	cout <<"Chu vi tam giac: " << fixed << setprecision(2) <<Cv(x1,y1,x2,y2,x3,y3);
	return 0;
}