#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	//Girilen iki say�dan b�y�k olan�n�n karesini ekrana yazd�ral�m. E�er say�lar birbirine e�itse say�lardan herhangi birini al�p, karesini yazd�rabiliriz.
	//�r:Klavyeden 10 5 say�lar� girilirse; 100 ��kt�s�n� verecek
	//�r:Klavyeden 10 10 say�lar� girilirse; 100 ��kt�s�n� verecek 
	int sayi1, sayi2;
	
	cout << "�ki say� girin:";
	cin >> sayi1 >> sayi2;
	if (sayi1 > sayi2)
		cout << "Karesi:" << sayi1 * sayi1;
	else
		cout << "Karesi:" << sayi2 * sayi2;
	cout << endl;
	
	//Girilen iki say�dan b�y�k olan�n�n karesini ekrana yazd�ral�m. E�er say�lar birbirine e�itse say�lardan birinin k�p�n� alal�m.
	//�r:Klavyeden 10 5 say�lar� girilirse; 100 ��kt�s�n� verecek
	//�r:Klavyeden 10 10 say�lar� girilirse; 1000 ��kt�s�n� verecek 
	//int sayi1, sayi2;
	
	cout << "�ki say� girin:";
	cin >> sayi1 >> sayi2;
	if (sayi1 > sayi2)
		cout << "Karesi:" << sayi1 * sayi1;
	else if (sayi2 > sayi1)
		cout << "Karesi:" << sayi2 * sayi2;
	else
		cout << "K�p�:" << sayi1 * sayi1 * sayi1;
		//cout << "K�p�:" << sayi2 * sayi2 * sayi2;
	cout << endl;
	//Klavyeden girilen 5 say�dan en b�y�k say�y� ve say�n�n 2'ye b�l�m�nden kalan�n� ekrana yazd�ral�m.
	//Not: Bu problem ��z�m�nde girilen de�erler bir de�i�kende tutulup, bu de�erler for d�ng�s�n�n i�erisinde al�nacak ve en b�y�k say� yine for d�ng�s�n�n i�erisinde hesaplanacak
	int sayi, i, mak;
	
	for (i = 1; i <= 5; i++)
	{
		cout << i << ".say�y� giriniz:";
		cin >> sayi;
		if (i == 1)
			//E�er girilen say� ilk say� ise i de�eri 1'e e�ittir
			//�lk girilen de�eri mak de�erine e�itledik
			mak = sayi;
		else if (sayi > mak)
			//E�er girilen say� mak de�erinden b�y�k ise bu say�y� mak de�eri yapt�k
			mak = sayi;
	}
	cout << "Mak:" << mak << endl << mak <<" mod 2:"<< mak%2 <<  endl;
	
	//1 ile 100 aras�ndaki 2 veya 7 say�lar�na tam b�l�nebilen say�lar� aralar�nda bo�luk b�rakarak yan yana ekrana yazd�ral�m
	//2 4 6 7 8 10 12 14..... 90 91 92 94 96 98 100 
	//int sayi;
	for (sayi = 1; sayi <= 100; sayi++)
	{
		if (sayi % 2 == 0 || sayi % 7 == 0)
			cout << sayi << " ";
	}
	cout << endl;
	//1 ile 100 aras�ndaki 2'ye tam b�l�nebilen ve 7 say�s�na tam b�l�nemeyen say�lar� aralar�nda bo�luk b�rakarak yan yana ekrana yazd�ral�m
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0 && i % 7 != 0)
			cout << i << " ";
	}
	cout << endl;
	
	//1'den kullan�c�n�n girdi�i say�ya kadar olan say�lar�n toplam�n� ekrana yazd�ral�m
	//int sayi;
	
	int toplam = 0;
	cout << "Say�:";
	cin >> sayi;
	for (i = 1; i <= sayi; i++)
	{
		toplam += i; //toplam=toplam+i;
	}
	cout << "Toplam:" << toplam << endl;
	
	//Kullan�c�n�n girdi�i 2 say� aras�ndaki 3'e tam b�l�nen say�lar�n ve 5'e tam b�l�nen say�lar�n ayr� ayr� toplam�n� yazd�ral�m
	//�lk girilen say� daha b�y�kse say�lar�n yerini de�i�tirin
	//�r: Kullan�c� 10 20 de�erlerini girerse;
	//3'e tam b�l�nenlerin toplam�: 45 (12+15+18)
	//5'e tam b�l�nenlerin toplam�: 45 (10+15+20)
	//int sayi1,sayi2;
	int toplam3 = 0, toplam5 = 0;
	cout << "2 say� girin:";
	cin >> sayi1 >> sayi2;
	if (sayi1 > sayi2)
		swap(sayi1, sayi2);
	for (i = sayi1; i <= sayi2; i++)
	{
		if (i % 3 == 0)
			toplam3 += i;
		if (i % 5 == 0)
			toplam5 += i;
	}
	cout << "3 say�s�na tam b�l�nenlerin toplam�:" << toplam3 << endl;
	cout << "5 say�s�na tam b�l�nenlerin toplam�:" << toplam5 << endl;
}


