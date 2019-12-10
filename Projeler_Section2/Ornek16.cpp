//Fonksiyonlar

#include "pch.h"
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
void merhaba();
void yazdir(string kelime);
void karsilastirma(string kelime1, string kelime2);
void kucuktenbuyuge(int a, int b);
void kuvvet(int taban, int us);

int main()
{
	setlocale(LC_ALL, "turkish");
	string k;
	int a, b;
	merhaba();
	yazdir("nas�ls�n?");
	//cout << "Yazd�r�lacak kelime:";
	//cin >> k;
	k = "Bug�n hava �ok so�uk";
	yazdir(k);
	karsilastirma("Istanbul", "Istanbul");
	karsilastirma("Kocaeli", "Istanbul");
	cout << "2 say� giriniz:";
	cin >> a >> b;
	kucuktenbuyuge(a, b);
	kuvvet(2, 3);
	kuvvet(4, 2);
	kuvvet(a, b);
	return 0;
	cout << "Deneme"; //return fonksiyonun de�er geri d�nd�rmesini sa�lar. return kodundan sonraki hi�bir kod �al��mad 
}
void merhaba()
{
	cout << "Merhaba" << endl;
}
void yazdir(string kelime)
{
	cout << kelime << endl;
}
void karsilastirma(string kelime1, string kelime2)
{
	if (kelime1 == kelime2)
		cout << kelime1 << " " << kelime2 << " Kelimeler ayn�" << endl;
	else
		cout << kelime1 << " " << kelime2 << " Kelimeler ayn� de�il" << endl;
}

//Kendisine g�nderilen iki de�er aras�ndaki de�erleri k���kten b�y��e do�ru 1'er artt�rarak ekrana yazd�ran fonksiyonu tan�mlay�n�z.
//�lk girilen say� daha b�y�kse swap(deger1,deger2) (yer de�i�tirme) fonksiyonunu kullanal�m
//�r: 3 7 girilirse; 3 4 5 6 7
//�r: 7 3 girilirse; 3 4 5 6 7
void kucuktenbuyuge(int a, int b)
{
	int i;
	if (a > b)
		swap(a, b);
		//swap(a,b): x=a; a=b; b=x;

	//1.yol:
	for (i = a; i <= b; i++)
	//Bu d�ng�de a de�eri de�i�mez
		cout << i << " ";
	cout << endl;

	//2.yol:
	for (a; a <= b; a++)
	//Bu d�ng�de a de�eri de�i�ir.
		cout << a << " ";
	cout << endl;

	//cout << a << " " << b << endl;

}

//Kendisine g�nderilen iki de�erin kuvvetini hesaplayan fonksiyon
//�r: Taban:2 Us:3 girilirse; 2^3= 8 ��kt�s�n� verecek
//�r: Taban:4 Us:2 girilirse; 4^2= 16 ��kt�s�n� verecek
void kuvvet(int taban, int us)
{
	int sonuc=1; //�arpmada etkisiz eleman 1 oldu�u i�in sonu� de�erini 1 tan�mlad�k
	for (int i = 1; i <= us; i++)
	{
		sonuc *= taban;
	}
	cout << taban << "^" << us << "= " << sonuc << endl;
}