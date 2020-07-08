#include<iostream>
#include"GiaSuc.h"
#include"ConBo.h"
#include"ConCuu.h"
#include"ConDe.h"
int main()
{
	system("color b");
	GiaSuc* a[4];

	cout << "Con bo:" << endl;
	a[0] = new ConBo();
	a[0]->Nhap();
	a[0]->SoLitSua();
	a[0]->SoConDe();

	cout << "Con cuu:" << endl;
	a[1] = new ConCuu();
	a[1]->Nhap();
	a[1]->SoLitSua();
	a[1]->SoConDe();

	cout << "Con de:" << endl;
	a[2] = new ConDe();
	a[2]->Nhap();
	a[2]->SoLitSua();
	a[2]->SoConDe();

	cout << "_________________________________________________" << endl;
	for (int i = 0; i < 3; i++)
	{
		a[i]->Xuat();
	}
	cout << "_________________________________________________" << endl;

	for (int i = 0; i < 25; i++)
	{
		cout << i << "h: ";
		for (int j = 0; j < 3; j++)
			if (a[j]->Keu(i) == true) {
				cout << a[j]->GetConVat() << ": " << a[j]->GetTeiengKeu();
			}
		cout << endl;
	}

	return 0;
}