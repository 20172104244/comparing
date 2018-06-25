// comparing.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
double Max(double f1, double f2)
{
	if (f1 > f2)
		return f1;
	else
		return f2;
}
int Max(int n1, int n2)
{
	if (n1 > n2)
		return n1;
	else
		return n2;
}
double Max(double f1, double f2, double f3)
{
	double temp;
	if (f1 > f2)
		temp = f1;
	else
		temp = f2;
	if (f3 > temp)
		return f3;
	else
		return temp;
}
int Max(int n1, int n2,int n3)
{
	int temp;
	if (n1 > n2)
		temp = n1;
	else
		temp = n2;
	if (n3 > temp)
		return n3;
	else
		return temp;
}
int main()
{
	cout << Max(1.2, 3.6) << endl;
	cout << Max(1.2, 6.5, 4.3) << endl;
	cout << Max(6,4) << endl;
	cout << Max(5, 6,9) << endl;
	return 0;
}

