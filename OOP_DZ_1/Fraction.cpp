#include "Fraction.h"
#include <iostream>

int Fraction::inter_face() {
	int key;
	int res_nom = 0,
		res_denom = 0;
	do
	{
		cout << "Что хотим?\n1. сложить?\n2. вычесть?\n3. умножить?\n4. разделить?\n5. или выйти?\n(нажмите соответствующую цифру): ";
		cin >> key;
		switch (key) {
		case 1:
			enter();
			if ((summa(nomerator, denomerator, nomerator_1, denomerator_1, res_nom, res_denom)) == 0) {
				cout << endl << "Так делать нельзя! У вас получилось деление на '0'" << endl << endl;
			}
			else {
				if (res_nom > res_denom) {
					int res_integer = res_nom / res_denom;
					if ((res_nom - res_denom * res_integer) == 0) {
						cout << endl << "Решение: " << nomerator << "/" << denomerator << " + " << nomerator_1 << "/" << denomerator_1
							<< " = " << res_integer << " цел. ";
					}
					else {
						cout << endl << "Решение: " << nomerator << "/" << denomerator << " + " << nomerator_1 << "/" << denomerator_1
							<< " = " << res_integer << " цел. "
							<< (res_nom - res_denom * res_integer) << "/" << res_denom << endl << endl;
					}
				}
				else{
					cout << endl << "Решение: " << nomerator << "/" << denomerator << " + " << nomerator_1 << "/" << denomerator_1 << " = ";
					out_res(res_nom, res_denom);
					cout << endl << endl;
				}
			}
			stop_clear();
			cout << "";//bag
			break;
		case 2:
			enter();
			if ((difference(nomerator, denomerator, nomerator_1, denomerator_1, res_nom, res_denom)) == 0) {
				cout << endl << "Так делать нельзя! У вас получилось деление на '0'" << endl << endl;
			}
			else {
				if (res_nom > res_denom) {
					int res_integer = res_nom / res_denom;
					if ((res_nom - res_denom * res_integer) == 0) {
						cout << endl << "Решение: " << nomerator << "/" << denomerator << " - " << nomerator_1 << "/" << denomerator_1
							<< " = " << res_integer << " цел. ";
					}
					else {
						cout << endl << "Решение: " << nomerator << "/" << denomerator << " - " << nomerator_1 << "/" << denomerator_1
							<< " = " << res_integer << " цел. "
							<< (res_nom - res_denom * res_integer) << "/" << res_denom << endl << endl;
					}
				}
				else {
					cout << endl << "Решение: " << nomerator << "/" << denomerator << " - " << nomerator_1 << "/" << denomerator_1 << " = ";
					out_res(res_nom, res_denom);
					cout << endl << endl;
				}
			}
			stop_clear();
			cout << "";//bag
			break;
		case 3:
			enter();
			if ((multiply(nomerator, denomerator, nomerator_1, denomerator_1, res_nom, res_denom)) == 0) {
				cout << endl << "Так делать нельзя! У вас получилось деление на '0'" << endl << endl;
			}
			else {
				if (res_nom > res_denom) {
					int res_integer = res_nom / res_denom;
					if ((res_nom - res_denom * res_integer) == 0) {
						cout << endl << "Решение: " << nomerator << "/" << denomerator << "  " << nomerator_1 << "/" << denomerator_1
							<< " = " << res_integer << " цел. ";
					}
					else {
						cout << endl << "Решение: " << nomerator << "/" << denomerator << "  " << nomerator_1 << "/" << denomerator_1
							<< " = " << res_integer << " цел. "
							<< (res_nom - res_denom * res_integer) << "/" << res_denom << endl << endl;
					}
				}
				else {
					cout << endl << "Решение: " << nomerator << "/" << denomerator << "  " << nomerator_1 << "/" << denomerator_1 << " = ";
					out_res(res_nom, res_denom);
					cout << endl << endl;
				}
			}			
			stop_clear();
			cout << "";//bag
			break;
		case 4:
			enter();
			if ((divide(nomerator, denomerator, nomerator_1, denomerator_1, res_nom, res_denom)) == 0) {
				cout << endl << "Так делать нельзя! У вас получилось деление на '0'" << endl << endl;
			}
			else {
				if (res_nom > res_denom) {
					int res_integer = res_nom / res_denom;
					if ((res_nom - res_denom * res_integer) == 0) {
						cout << endl << "Решение: " << nomerator << "/" << denomerator << " : " << nomerator_1 << "/" << denomerator_1
							<< " = " << res_integer << " цел. ";
					}
					else {
						cout << endl << "Решение: " << nomerator << "/" << denomerator << " : " << nomerator_1 << "/" << denomerator_1
							<< " = " << res_integer << " цел. "
							<< (res_nom - res_denom * res_integer) << "/" << res_denom << endl << endl;
					}
				}
				else {
					cout << endl << "Решение: " << nomerator << "/" << denomerator << " : " << nomerator_1 << "/" << denomerator_1 << " = ";
					out_res(res_nom, res_denom);
					cout << endl << endl;
				}
			}
			stop_clear();
			cout << "";//bag
			break;
		case 5:
			return 0;
		}
	} while (key < 0 && key > 6);
}

void Fraction::stop_clear()
{
	system("pause");
	system("cls");
}


void Fraction::out_res(int& res_nom, int& res_denom)
{
	cout << res_nom << "/" << res_denom;
}

int Fraction::enter()
{
	this->nomerator = nomerator;
	this->denomerator = denomerator;
	this->nomerator_1 = nomerator_1;
	this->denomerator_1 = denomerator_1;
	cout << "Введите числитель первого числа: ";
	cin >> nomerator;
	cout << "Введите знаменатель первого числа: ";
	cin >> denomerator;
	cout << "Введите числитель второго числа: ";
	cin >> nomerator_1;
	cout << "Введите знаменатель второго числа: ";
	cin >> denomerator_1;
	system("cls");
	return nomerator, denomerator, nomerator, denomerator;

}


int Fraction::summa(int nomerator, int denomerator, int nomerator_1, int denomerator_1, int& res_nom, int& res_denom)
{
	if (denomerator != 0 && denomerator_1 != 0) {
		res_nom = nomerator * denomerator_1 + nomerator_1 * denomerator;
		res_denom = denomerator * denomerator_1;
		return res_nom, res_denom;
	}
	else {
		return 0;
	}
}

int Fraction::difference(int nomerator, int denomerator, int nomerator_1, int denomerator_1, int& res_nom, int& res_denom)
{
	if (denomerator != 0 && denomerator_1 != 0) {
		res_nom = nomerator * denomerator_1 - nomerator_1 * denomerator;
		res_denom = denomerator * denomerator_1;
		return res_nom, res_denom;
	}
	else {
		return 0;
	}
}

int Fraction::multiply(int nomerator, int denomerator, int nomerator_1, int denomerator_1, int& res_nom, int& res_denom)
{
	if (denomerator != 0 && denomerator_1 != 0) {
		res_nom = nomerator * nomerator_1;
		res_denom = denomerator * denomerator_1;
		return res_nom, res_denom;
	}
	else {
		return 0;
	}

}

int Fraction::divide(int nomerator, int denomerator, int nomerator_1, int denomerator_1, int& res_nom, int& res_denom)
{
	if (denomerator != 0 && nomerator_1 != 0) {
		res_nom = nomerator * denomerator_1;
		res_denom = denomerator * nomerator_1;
		return res_nom, res_denom;
	}
	else {
		return 0;
	}
}