#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	int A = 10, B = 5, C = 5, D = -10, i;
	cout << (A >= B + C) << endl;
	//while d�ng�s�
	for (i = 1; i <= 10; i++)
		cout << i << endl;
	//i=11;
	cout << "While d�ng�s� ba�lad�" << endl;
	i = 1;
	while (i <= 10)
		//�art do�ru oldu�u s�rece �al���r
		cout << i++ << endl;
	//Kullan�c� 0 (s�f�r) girene kadar kullan�c�dan de�er isteyelim
	//Girdi�i de�erlerin toplamlar�n� ekrana yazd�ral�m
	int sayi,toplam=0;
	/*
	do
	{
		//En az 1 kez �al���r
		cout << "Say�:";
		cin >> sayi;
		toplam += sayi;
		//�art do�ru oldu�u s�rece �al���r
	} while (sayi!=0);
	cout << "Toplam:" << toplam << endl;
*/

	//Kullan�c� 0 (s�f�r) girene kadar kullan�c�dan de�er isteyelim
	//Girdi�i de�erlerden �iftlerin toplamlar�n� ve teklerin toplamlar�n� ekrana yazd�ral�m
	int ttoplam = 0, ctoplam=0;
	/*
	do
	{
		cout << "Say�:";
		cin >> sayi;
		if (sayi % 2 == 0)
			ctoplam += sayi;
		else
			ttoplam += sayi;
	} while (sayi != 0);
	cout << "�iftlerin Toplam�:" << ctoplam << endl;
	cout << "Teklerin Toplam�:" << ttoplam << endl;
*/
	//Kullan�c� 0 (s�f�r) girene kadar kullan�c�dan de�er isteyelim
	//Girdi�i de�erlerden negatiflerin toplamlar�n� ve pozitiflerin toplamlar�n� ekrana yazd�ral�m
	int ptoplam = 0, ntoplam = 0;
	/*
	do
	{
		cout << "Say�:";
		cin >> sayi;
		if (sayi > 0)
			ptoplam += sayi;
		else
			ntoplam += sayi;
	} while (sayi != 0);
	cout << "Pozitiflerin Toplam�:" << ptoplam << endl;
	cout << "Negatiflerin Toplam�:" << ntoplam << endl;
	*/

	//Girdi�i de�erlerden negatiflerin �arp�mlar�n� ve pozitiflerin �arp�mlar�n� ekrana yazd�ral�m
	int ncarpim=1, pcarpim = 1;
	/*
	do
	{
		cout << "Say�:";
		cin >> sayi;
		if (sayi < 0)
			ncarpim *= sayi;
		else if (sayi > 0)
			pcarpim *= sayi;
	} while (sayi!=0);
	cout << "Pozitiflerin �arp�m�:" << pcarpim << endl;
	cout << "Negatiflerin �arp�m�:" << ncarpim << endl;
*/
	//Girilen say�n�n tersten okunu�u kendisine e�it mi?
	//int sayi;
	int keysayi;
	int terssayi=0;
	cout << "Say�:";
	cin >> keysayi;
	sayi = keysayi;
	do
	{
		terssayi = sayi % 10 + terssayi*10;
		sayi = sayi / 10;
		//cout << terssayi << endl << sayi << endl;
		
	} while (sayi >= 10);
	terssayi = terssayi * 10 + sayi;
	cout << "Say�n�n tersi:" << terssayi << endl;
	if (keysayi == terssayi)
		cout << keysayi << " polindrom say�d�r" << endl;
	else
		cout << keysayi << " polindrom say� de�ildir" << endl;
	
		
	//�� basamakl� 2 say�n�n �arp�m� polindrom olan en b�y�k iki say�n�n �arp�mlar� bulal�m
	//int sayi,i;
	int j, mak=0,s1,s2;
	bool kontrol = false;
	for (i = 999; i >= 900; i--)
	{
		for (j = 999; j >= 900; j--)
		{
			terssayi = 0;
			keysayi = i * j;
			sayi = keysayi;
			do
			{
				terssayi = sayi % 10 + terssayi * 10;
				sayi = sayi / 10;
				//cout << terssayi << endl << sayi << endl;
			} while (sayi >= 10);
			terssayi = terssayi * 10 + sayi;
			if (keysayi == terssayi && mak < terssayi)
			{
				mak = terssayi;
				s1 = i;
				s2 = j;
			}
				
		}
	}
	cout << "Say�lar:" << s1 << " " << s2 << endl;
	cout << "�arp�mlar�:" << mak << endl;
	


}

