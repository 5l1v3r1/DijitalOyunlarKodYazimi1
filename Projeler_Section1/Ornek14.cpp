#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	int sayilar[2][4];
	sayilar[0][0] = 10;
	sayilar[0][1] = 8;
	cout << sayilar[0][0] << endl << sayilar[0][1] << endl;
	//cout << "Say�:";
	//cin >> sayilar[0][2];
	//cout << sayilar[0][2] << endl;

	//�ki matrisin toplam�n� hesaplayan program� yaz�n�z.
	//Matrisler 5*2 boyutunda ve i�erisinde 1 ile 100 aras�nda rastgele say� tutmalar�n� sa�layal�m.
	srand(time(NULL));
	int matris1[5][2], matris2[5][2], i, j;
	cout << "1. matris:\n";
	for (i = 0; i <= 4; i++) //sat�rlar
	{
		for (j = 0; j <= 1; j++) //s�tunlar
		{
			matris1[i][j] = rand() % 100 + 1;
			cout << i << "," << j << ":" << matris1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "2.matris:\n";
	for (i = 0; i <= 4; i++) //sat�rlar
	{
		for (j = 0; j <= 1; j++) //s�tunlar
		{
			matris2[i][j] = rand() % 100 + 1;
			cout << i << "," << j << ":" << matris2[i][j] << "\t";
		}
		cout << endl;
	}
	//matris1 ve matris2 Toplamlar�
	cout << "�ki matrisin toplam�\n";
	for (i = 0; i <= 4; i++) //sat�rlar
	{
		for (j = 0; j <= 1; j++) //s�tunlar
		{
			cout << matris1[i][j]+matris2[i][j] << " ";
		}
		cout << endl;
	}


	//10*5 boyutlu matris i�erisine 20 ile 50 aras�nda rastgele de�erler atayal�m ve kullan�c�n�n girdi�i say�yla bu matrisi �arpal�m
	//Matris 2,3 olsayd� ve kullan�c� 2 girseydi;
//��kt�:
/*
	10*5 Boyutlu Matris:
	20 22 24
	21 24 25
	10*5 Boyutlu Matrisin 2 kat�:
	40 44 48
	42 48 50
*/
	int matris[10][5], sayi;
	cout << "10*5 Boyutlu Matris:\n";
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			matris[i][j] = rand() % 31 + 20;
			cout << matris[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Say�:";
	cin >> sayi;
	cout << "10 * 5 Boyutlu Matrisin " << sayi <<  " kat�:\n";
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << matris[i][j] * sayi << "\t";
		}
		cout << endl;
	}

	//Personel ad, soyad, departman bilgilerini tutan ve 4 personelin kayd�n� kullan�c�dan al�p ekrana yazd�ran program� yaz�n�z.
	
	//Dizinin i�erisine ilk de�er atamas� yapal�m:
}

