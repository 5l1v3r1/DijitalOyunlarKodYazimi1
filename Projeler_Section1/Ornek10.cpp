#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	int i;
	/*
	for (i = 1; i <= 10; i++)
		cout << i << endl;
	//i=11
	cout << "while d�ng�s� ba�lad�" << endl;
	i = 1;
	while (i <= 10)
		//Do�ru oldu�u s�rece �al���r
		cout << i++ << endl;

	//Kullan�c� 0 (s�f�r) girene kadar kullan�c�dan de�er isteyelim
	//Girdi�i de�erlerin toplamlar�n� ekrana yazd�ral�m
	int sayi, toplam=0;
	do
	{
		//En az 1 kez �al���r
		//Do�ru oldu�u s�rece �al���r
		cout << "Say�:";
		cin >> sayi;
		toplam += sayi;
	} while (sayi != 0);
	cout << "Toplam:" << toplam << endl;


	//Kullan�c� 0 (s�f�r) girene kadar kullan�c�dan de�er isteyelim
	//Girdi�i de�erlerden �iftlerin toplamlar�n� ve teklerin toplamlar�n� ekrana yazd�ral�m
	int ttoplam = 0, ctoplam = 0;
	do
	{
		cout << "Say�:";
		cin >> sayi;
		if (sayi % 2 == 0)
			ctoplam += sayi;
		else
			ttoplam += sayi;
	} while (sayi != 0);
	cout << "Teklerin toplam�:" << ttoplam << endl;
	cout << "�iftlerin toplam�:" << ctoplam << endl;

	//Kullan�c� 0 (s�f�r) girene kadar kullan�c�dan de�er isteyelim
	//Girdi�i de�erlerden negatiflerin toplamlar�n� ve pozitiflerin toplamlar�n� ekrana yazd�ral�m
	int ptoplam = 0, ntoplam = 0;
	do
	{
		cout << "Say�:";
		cin >> sayi;
		if (sayi > 0)
			ptoplam += sayi;
		else
			ntoplam += sayi;
	} while (sayi != 0);
	cout << "Pozitiflerin toplam�:" << ptoplam << endl;
	cout << "Negatiflerin toplam�:" << ntoplam << endl;


	//Girdi�i de�erlerden negatiflerin �arp�mlar�n� ve pozitiflerin �arp�mlar�n� ekrana yazd�ral�m
	int pcarpim = 1, ncarpim = 1;
	do
	{
		cout << "Say�:";
		cin >> sayi;
		if (sayi > 0)
			pcarpim *= sayi;
		else if (sayi < 0)
			ncarpim *= sayi;
	} while (sayi != 0);
	cout << "Pozitiflerin �arp�m�:" << pcarpim << endl;
	cout << "Negatiflerin �arp�m�:" << ncarpim << endl;

*/
	//Girilen say�n�n tersten okunu�u kendisine e�it mi?
	//say�=1234
	//ters=0
	//ters*10   + sayi%10 = 4   
	//ters=4
	//sayi=1234/10=123
	//ters*10=40  +   sayi%10=3 =  43
	//ters= 43
	//sayi=123/10=12
	//ters*10=430 + sayi%10=2 = 432
	//sayi=1
	//Say� 10'dan k���kse d�ng� sona erer
	//ters*10=4320 + sayi =4321
	int ters=0,anasayi,sayi;
	
	/*
	cout << "Say�:";
	cin >> sayi;
	anasayi = sayi;
	do
	{
		ters = ters*10 + sayi % 10;
		sayi = sayi / 10;
	} while (sayi >= 10);
	ters = ters * 10 + sayi;
	cout << "Say�n�n tersi:" << ters << endl;
	if (anasayi == ters)
		cout << anasayi << " Polindrom say�d�r\n";
	else
		cout << anasayi << " Polindrom say� de�ildir\n";
*/
	//�� basamakl� 2 say�n�n �arp�m� polindrom say�lar�n en b�y��� olan iki say�n�n �arp�mlar�n� bulal�m
	int j, carpim, mak = 0;
	for (i = 999; i >= 900; i--)
	{
		for (j = 999; j >= 900; j--)
		{
			ters = 0;
			carpim = i * j;
			sayi = carpim;
			do
			{
				ters = ters * 10 + sayi % 10;
				sayi = sayi / 10;
			} while (sayi >= 10);
			ters = ters * 10 + sayi;
			if (ters == carpim && mak < carpim)
				mak = carpim;
		}
	}
	cout << "Mak:" << mak << endl;

}