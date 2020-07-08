#include<ctime>
#include "ConBo.h"
void ConBo::Nhap()
{
	GiaSuc::Nhap();
	this->ConVat = "Con Bo";
	this->TiengKeu = "Um bo...";
}
int ConBo::SoConDe()
{
	srand(time(NULL));
	this->SoCon = rand() % 50 + 1;
	return this->SoCon;
}
float ConBo::SoLitSua()
{
	srand((float)time(NULL));
	this->ChoSua = 0 + rand() %  (20 + 1 - 0);			// %(Max+1-Min)
	return this->ChoSua;
}
bool ConBo::Keu(int n)
{
	srand((int)time(0));
	int a = 0;
	for (int i = 0; i < n+5; i++)
		a = 0 + rand() % (1 + 1 - 0);				// %(Max+1-Min)
	if (a == 0)
		return false;
	return true;
}