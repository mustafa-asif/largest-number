// largest number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c || a == b && a > c || a == c && a > b)
	{
		cout << "the largest number is" << a << endl;
	}
	else if (b > a && b > c || b == a && b > c || b == c && b > a)
	{
		cout << "the largest number is : " << b << endl;
	}
	else if (c > a && c > b || c == a && c > b || c == b && c > a)
	{
		cout << "the largest integer is : " << c << endl;

	}
	return 0;
}
