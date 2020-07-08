#include<iostream>
#include"GiaSuc.h"
using namespace std;
#pragma once
class ConCuu:public GiaSuc
{
public:

	void Nhap();
	int SoConDe();
	float SoLitSua();
	bool Keu(int n);
};

