#pragma once
#include<iostream>
#include <windows.h>
using namespace std;

class Fraction
{
private:
	int nomerator;//chislit
	int denomerator;//znamenat
	int nomerator_1;//chislit
	int denomerator_1;//znamenat
public:
	int inter_face();
	void stop_clear();
	void out_res(int& res_nom, int& res_denom);
	int enter();
	int summa(int nomerator, int denomerator, int nomerator_1, int denomerator_1, int& res_nom, int& res_denom);
	int difference(int nomerator, int denomerator, int nomerator_1, int denomerator_1, int& res_nom, int& res_denom);
	int multiply (int nomerator, int denomerator, int nomerator_1, int denomerator_1, int& res_nom, int& res_denom);
	int divide(int nomerator, int denomerator, int nomerator_1, int denomerator_1, int& res_nom, int& res_denom);
};

