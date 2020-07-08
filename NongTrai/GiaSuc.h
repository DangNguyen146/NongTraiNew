#include<iostream>
#include<string>
using namespace std;
#pragma once
class GiaSuc
{
protected:
	string ConVat;		//Ví dụ: Con bò, cừu, dê
	string TiengKeu;	//Tiếng kêu: Bò: Ụm bò			Dê: Bê bê			Cừu: e e e		
	int SoconGiong;		// Số con bò trưởng thành
	int SoCon;			//So con con
	float ChoSua;		//So Lit Sua
public:
	GiaSuc() :ConVat(""), SoCon(0), ChoSua(0) {}								//Gán giá trị
	GiaSuc(string a, int b, float c) :ConVat(a), SoCon(b), ChoSua(c) {}
	GiaSuc(const GiaSuc& a) :ConVat(a.ConVat), SoCon(a.SoCon), ChoSua(a.ChoSua) {}

	virtual void Nhap();
	virtual void Xuat();

	virtual bool Keu(int n);				//Kiểm tra có kêu hay khong
	virtual int SoConDe();
	virtual float SoLitSua();
	virtual int TonngSoCon();

	string GetConVat();
	string GetTeiengKeu();
};

