#include "Mathlib.h"

double mathlib::sum(double a, double b) { return a + b; }

double mathlib::diff(double a, double b) { return a - b; }

double mathlib::prod(double a, double b) { return a * b; }

double mathlib::division(double a, double b) { return a / b; }

double mathlib::degree(double a, double b)
{
	if (a > 0 && b == 0)
	{
		return 1;
	}

	double val = a;
	for (int i = 1; i < b; ++i)
	{
		val = val * a;
	}

	return val;
}