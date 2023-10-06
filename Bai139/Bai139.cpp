#include <iostream>
using namespace std;
void PTBH(float, float);

int main()
{
	float a, b;
	cin >> a >> b;
	PTBH(a, b);
	return 0;
}

void PTBH(float aa, float bb)
{
	if (aa == 0)
	{
		if (bb == 0)
			cout << "VSN";
		else
			cout << "VN";
	}
	else
	{
		float x = -bb / aa;
		cout <<"Phuong trinh co nghiem la: "<<x;
	}
}
