#include<ctime>
#include "ConCuu.h"
void ConCuu::Nhap()
{
	GiaSuc::Nhap();
	this->ConVat = "Con Cuu";
	this->TiengKeu = "e e...";
}
int ConCuu::SoConDe()
{
	srand(time(NULL));
	this->SoCon = rand() % 50 + 1;
	return this->SoCon;
}
float ConCuu::SoLitSua()
{
	srand((float)time(NULL));
	this->ChoSua = 0 + rand() % (5 + 1 - 0);				// 0+rand() %(Max+1-Min)
	return this->ChoSua;
}
bool ConCuu::Keu(int n)
{
	srand((int)time(NULL));
	int a = 0;
	for (int i = 0; i < n+2; i++)
		a = 0 + rand() % (1 + 1 - 0);				// %(Max+1-Min)
	if (a == 0)
		return false;
	return true;
}