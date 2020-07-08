#include "GiaSuc.h"
void GiaSuc::Nhap()
{
	cout << "Nhap So " << this->ConVat << " :";
	cin >> this->SoconGiong;
}
void GiaSuc::Xuat()
{
	cout << this->ConVat << ":" << endl;
	cout << "So con lon: " << this->SoconGiong << endl;
	cout << "So con con: " << this->SoCon << endl;
	cout << "==>So con " << this->ConVat << ": " << TonngSoCon() << endl;
	cout << "So lit sua: " << this->ChoSua << endl;
}
int GiaSuc::SoConDe()
{
	return this->SoCon;
}
float GiaSuc::SoLitSua()
{
	return this->ChoSua;
}
int GiaSuc::TonngSoCon()
{

	int a= this->SoconGiong + this->SoCon;
	return a;
}
bool GiaSuc::Keu(int n)
{
	return true;
}
string GiaSuc::GetConVat()
{
	return this->ConVat;
}
string GiaSuc::GetTeiengKeu()
{
	return this->TiengKeu;
}