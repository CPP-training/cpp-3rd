#include "stdafx.h"
#include <iostream>
#include<conio.h>
#include<cmath>

using namespace std;


int main()
{
	float a;
	float b = 10000;
	float r = .03;

	for (int day = 1; day <= 30; day++)
	{
		a = b * pow(1 + r, day);
		cout << day << "-------" << a << endl;
	}

	getch();
}
