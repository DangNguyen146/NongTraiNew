#include<iostream>
#include<ctime>
#include"GiaSuc.h"
using namespace std;
#pragma once
class ConBo:public GiaSuc
{
public:
	void Nhap();
	int SoConDe();
	float SoLitSua();
	bool Keu(int n);
};

