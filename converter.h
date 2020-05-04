#pragma once
#include <iostream>
using namespace std;

void counterNum(int& counter)
{
	counter++;
}

double centimetersConverter(double x)
{
	double y = .3937;
	return x * y;
}

double inchesConverter(double x)
{
	double y = 2.54;
	return x * y;
}