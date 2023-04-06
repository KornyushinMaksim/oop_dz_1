#include "Fraction.h"
#include <iostream>

int Fraction::interface() {
	this->nomerator = nomerator;
	this->denomerator = denomerator;
	int key;
	do
	{
		cout << "Что хотим?\n1. сложить?\n2. вычесть?\n3. умножить?\n4. разделить?\n5. или выйти?\n(нажмите соответствующую цифру): ";
		cin >> key;
		switch (key) {
		case 1:
			enter();
			cout << endl << "Ответ: " << summa(nomerator, denomerator) << endl << endl;
			break;
		case 2:
			enter();
			cout << endl << "Ответ: " << difference(nomerator, denomerator) << endl << endl;
			break;
		case 3:
			enter();
			cout << endl << "Ответ: " << multiply(nomerator, denomerator) << endl << endl;
			break;
		case 4:
			enter();
			if (divide(nomerator, denomerator) == -1) {
				cout << endl << "Так делать нельзя! В знаменателе '0'" << endl << endl;
			}
			else {
				cout << endl << "Ответ: " << divide(nomerator, denomerator) << endl << endl;
			}
		case 5:
			return 0;
			break;
		}
	} while (key < 0 && key > 6);
}


int Fraction::enter()
{
	this->nomerator = nomerator;
	this->denomerator = denomerator;
	cout << "Введите числитель: ";
	cin >> nomerator;
	cout << "Введите знаменатель: ";
	cin >> denomerator;
	return nomerator, denomerator;
}

double Fraction::summa(int nomerator, int denomerator)
{
	this->nomerator = nomerator;
	this->denomerator = denomerator;
	return nomerator + denomerator;
}

double Fraction::difference(int nomerator, int denomerator)
{
	this->nomerator = nomerator;
	this->denomerator = denomerator;
	return nomerator - denomerator;
}

double Fraction::multiply(int nomerator, int denomerator)
{
	this->nomerator = nomerator;
	this->denomerator = denomerator;
	return nomerator * denomerator;
}

double Fraction::divide(int nomerator, int denomerator)
{
	this->nomerator = nomerator;
	this->denomerator = denomerator;
	if (denomerator != 0) {
		return nomerator / denomerator;
	}
	else {
		return -1;
	}
}
