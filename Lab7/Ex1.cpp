#include <iostream>
#include <stdio.h>


double operator"" _Kelvin(unsigned long long int x) {
	double cx = x;
	return cx - 273.15;
}

double operator"" _Fahrenheit(unsigned long long int x) {
	double cx = x;
	return cx - 33.8;
}

int main() {

	float a = 300_Kelvin;

	float b = 120_Fahrenheit;

	std::cout << a << " " << b<<std :: endl;

	return 0;

}