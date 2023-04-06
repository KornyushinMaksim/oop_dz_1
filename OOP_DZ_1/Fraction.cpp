#include "Fraction.h"
#include <iostream>

int Fraction::interface() {
	this->nomerator = nomerator;
	this->denomerator = denomerator;
	int key;
	do
	{
		cout << "��� �����?\n1. �������?\n2. �������?\n3. ��������?\n4. ���������?\n5. ��� �����?\n(������� ��������������� �����): ";
		cin >> key;
		switch (key) {
		case 1:
			enter();
			cout << endl << "�����: " << summa(nomerator, denomerator) << endl << endl;
			break;
		case 2:
			enter();
			cout << endl << "�����: " << difference(nomerator, denomerator) << endl << endl;
			break;
		case 3:
			enter();
			cout << endl << "�����: " << multiply(nomerator, denomerator) << endl << endl;
			break;
		case 4:
			enter();
			if (divide(nomerator, denomerator) == -1) {
				cout << endl << "��� ������ ������! � ����������� '0'" << endl << endl;
			}
			else {
				cout << endl << "�����: " << divide(nomerator, denomerator) << endl << endl;
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
	cout << "������� ���������: ";
	cin >> nomerator;
	cout << "������� �����������: ";
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
