#include<ctime>
#include "ConDe.h"
void ConDe::Nhap()
{
	GiaSuc::Nhap();
	this->ConVat = "Con Bo";
	this->TiengKeu = "Be be";
}
int ConDe::SoConDe()
{
	srand(time(NULL));
	this->SoCon = rand() % 50 + 1;
	return this->SoCon;
}
float ConDe::SoLitSua()
{
	srand((float)time(NULL));
	this->ChoSua = 0 + rand() % (10 + 1 - 0);				// min+ rand() %(Max+1-Min
	return this->ChoSua;
}
bool ConDe::Keu(int n)
{
	srand((int)time(NULL));
	int a = 0;
	for (int i = 0; i < n; i++)
		a = 0 + rand() % (1 + 1 - 0);				// %(Max+1-Min)
	if (a == 0)
		return false;
	return true;
}