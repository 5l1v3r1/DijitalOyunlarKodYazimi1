#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL));
	int matris1[5][2],matris2[5][2], i, j;
	for (i=0;i<=4;i++)
	{
		for (j=0;j<=1;j++)
		{
			matris1[i][j] = rand() % 100 + 1;
			matris2[i][j] = rand() % 100 + 1;
		}
	}
	cout << "Matris 1 | Matris 2" << endl;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			cout << i << "," << j << ":";
			cout << matris1[i][j] << " " << matris2[i][j] << "\t";
		}
		cout << endl;
	}
	//Matris 1 ve Matris 2 de�erlerinin toplamlar�n� yazd�ral�m
	cout << "Matris 1 ve Matris 2 de�erlerinin toplamlar�" << endl;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			cout << matris1[i][j] + matris2[i][j] << "\t";
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
	cout << "10*5 Boyutlu Matris\n";
	for (i = 0; i <= 9; i++) //sat�r de�eri
	{
		for (j = 0; j <= 4; j++) //s�tun de�eri
		{
			matris[i][j] = rand() % 31 + 20;
			cout << matris[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Say�:";
	cin >> sayi;
	cout << "10*5 Boyutlu Matrisin " << sayi << " kat�\n";
	for (i = 0; i <= 9 ; i++)
	{
		for (j	= 0; j  <= 4; j++)
		{
			cout << matris[i][j] * sayi << "\t";
		}
		cout << endl;
	}
	//Personel ad, soyad, departman bilgilerini tutan ve 4 personelin kayd�n� kullan�c�dan al�p ekrana yazd�ran program� yaz�n�z.
	//const float PI = 3.14;
	string p[4][3];
	for (i = 0; i <= 3; i++) //Personel say�s�
	{
		cout << "Personel Bilgileri - Ad | Soyad | Departman \n:";
		for (j = 0; j <= 2; j++) //Personel Bilgilerini Tutan Alan say�s�
		{
			cin >> p[i][j];
		}
	}
	cout << "Personel Bilgileri - Ad | Soyad | Departman \n:";
	for (i = 0; i <= 3; i++) //Personel say�s�
	{
		for (j = 0; j <= 2; j++) //Personel Bilgilerini Tutan Alan say�s�
		{
			cout << p[i][j] << "\t";
		}
		cout << endl;
	}
	//Dizinin i�erisine ilk de�er atamas� yapal�m:
	int d1[5] = { 1,2,3,4,5 };
	int d2[2][3] = { { 1, 2 , 3 }, { 4, 5, 6 } };
	int d3[2][3] = { 1, 2 , 3 , 4, 5, 6 };
}
	


