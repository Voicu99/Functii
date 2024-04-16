// Functii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int suma(int var_1 , int var_2)
{
	int suma=0, a=var_1, b = var_2;
	suma = a + b;
	std::cout << "Suma este " << suma << std::endl;
	return suma;


}

int main()
{
	int skynet = suma(5,90);
	std::cout << "Valuarea lui skynet este :" << skynet << std::endl;

}


