//Problemler - �rnek 4:
//Bir �r�n�n al�� fiyat�, vergi oran� ve kar oran�na g�re
//sat�� fiyat�n� hesaplat�p ekrana yazd�r�n�z.
//a.	E�er kar oran� 0 ile 1 aras�nda bir de�er de�ilse 
//kar oran� tekrar istenecek
//b.	E�er vergi oran� 0 ile 1 aras�nda bir de�er de�ilse 
//vergi oran� tekrar istenecek
//c.	Kar eklenmi� fiyat = al�� fiyat� + al�� fiyat� * kar oran�
//d.	Sat�� fiyat� = kar eklenmi� fiyat + kar eklenmi� fiyat * vergi oran�


#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	float kar, vergi, alis, satis;
	//float: Ondal�kl� say� tan�mlamas�
	cout << "Al�� Fiyat�:";
	cin >> alis;
	gitkar: cout << "Kar Oran�:";
	cin >> kar;
	if (kar < 0 || kar>1)
	{
		cout << "0-1 aras�nda de�er giriniz." << endl;
		goto gitkar;
	}	
	gitvergi: cout << "Vergi Oran�:";
	cin >> vergi;
	if (vergi < 0 || vergi>1)
	{
		cout << "0-1 aras�nda de�er giriniz." << endl;
		goto gitvergi;
	}
	satis = alis + alis * kar; //Kar eklenmi� fiyat
	satis = satis + satis * vergi; //Vergi eklenmi� fiyat
	cout << "Sat�� Fiyat�:" << satis;
	
}

