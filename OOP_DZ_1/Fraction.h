#pragma once
#include<iostream>
using namespace std;

class Fraction
{
private:
	double nomerator;//chislit
	double denomerator;//znamenat
public:
	int interface();
	int enter();
	double summa(int nomerator, int denomerator);
	double difference(int nomerator, int denomerator);
	double multiply (int nomerator, int denomerator);
	double divide(int nomerator, int denomerator);
};

