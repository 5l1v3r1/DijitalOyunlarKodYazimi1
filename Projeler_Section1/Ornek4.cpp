
#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	/*
	//Klavyeden girilen kelimenin karakter say�s�n� ekrana yazd�ral�m
	//Karakter say�s� 5'den k���kse karesini hesaplayal�m.
	//Karakter say�s� 5'den b�y�kse karek�k�n� hesaplayal�m.
	//Karekter say�s� 5'e e�itse kelimeyi 5 kere ekrana yazd�ral�m.
	string kelime;
	int uzunluk, i;
	cout << "Kelime...:";
	cin >> kelime;
	uzunluk = kelime.length();
	cout << "Uzunluk:" << uzunluk << endl;
	if (uzunluk < 5)
		cout << "Kare:" << pow(uzunluk, 2) << endl;
	//pow(taban,us) verilen de�erin �sse g�re kuvvetini al�r.
	else if (uzunluk > 5)
		cout << "Karek�k:" << sqrt(uzunluk) << endl;
	else
	{
		for (i = 1; i <= 5; i = i + 1)
		{
			//e�er {} kullanmasayd�k for d�ng�s� sadece 
			//kendisinden sonra gelen ad�m� �al��t�racakt�.
			cout << kelime << endl;
			cout << i << endl;
		}
		cout << "i:" << i << endl;
	}
	cout << "if blo�u sona erdi." << endl;

	*/
	//0-100 aras� girilen s�nav notunu harf notuna �eviriniz
	//E�er say� 0 ile 100 aras�nda de�ilse kullan�c�dan
	//tekrar not istenecek
	/*
	//Bu notlar ger�e�i yans�tmamaktad�r. :)
	80-100 AA
	60-79 BB
	50-59 CC
	40-49 DD
	0-39 FF
	*/
	int puan;
git:
	cout << "S�nav notu:";
	cin >> puan;
	if (puan < 0 || puan>100)
		goto git;
	else if (puan >= 80)
		cout << "Harf Notu:AA";
	else if (puan >=60)
		cout << "Harf Notu:BB";
	else if (puan>=50)
		cout << "Harf Notu:CC";
	else if (puan>=40)
		cout << "Harf Notu:DD";
	else
		cout << "Harf Notu:FF";
}
