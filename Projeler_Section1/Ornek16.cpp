#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

void yazdir();
void kelime_yazdir(string kelime);
void ilkharf_yazdir(string kelime);
void karsilastirma(string kelime1, string kelime2);
void sayilari_yazdir(int sayi1, int sayi2);
void us_alma(int taban, int us);
int topla(int s1, int s2);
int topla(int s1, int s2, int s3);
double topla(double sayi1, double sayi2);
void karakter(string kelime);
int rakam_toplami(int sayi);

int main(){
	setlocale(LC_ALL, "turkish");
	string k;
	int s1, s2;
	yazdir();
	kelime_yazdir("Bug�n hava g�zel");
	k = "Beykoz";
	//cout << "Kelime:";
	//cin >> k;
	kelime_yazdir(k);
	ilkharf_yazdir(k);
	cout << "Kelime:" << k << endl;
	karsilastirma("istanbul", "istanbul");
	karsilastirma("istanbul", "kocaeli");
	sayilari_yazdir(3, 7);
	//sayilari_yazdir(7, 3);
	s1 = 10;
	s2 = 15;
	cout << "�ki say� giriniz..:";
	cin >> s1 >> s2;
	sayilari_yazdir(s1, s2);
	//sayilari_yazdir(s2, s1);
	us_alma(2, 3);
	us_alma(4, 2);
	us_alma(s1, s2);
	cout << s1 << "+" << s2 << "=" << topla(s1, s2) << endl;
	cout << topla(s1, s2, 5) << endl;
	//int sonuc = topla(s1, s2);
	//cout << sonuc << endl;
	cout << topla(5.2, 5.4) << endl;
	karakter("beykoz");
	karakter("istanbul");
	karakter("kocaeli");
	karakter("antep");
	//cout << "Kelime:";
	//cin >> k;
	karakter(k);
	cout << "1234 Rakamlar� toplam�:" << rakam_toplami(1234) << endl;
	cout << "2345012 Rakamlar� toplam�:" << rakam_toplami(2345012) << endl;

	return 0;
	//return i�lemi fonksiyonun de�er d�nd�rmesini sa�lar. 
	//Bu ad�mdan sonraki hi�bir kod �al��maz
	cout << "Nas�ls�n?";

}

void yazdir() {
	//Ekrana merhaba yazd�ran fonksiyon
	cout << "Merhaba" << endl;
}

void kelime_yazdir(string kelime) {
	//Kendisine g�nderilen kelimeyi ekrana yazd�ran fonksiyon
	cout << kelime << endl;
}

void ilkharf_yazdir(string kelime) {
	//Kendisine g�nderilen kelimenin ilk harfini ekrana yazd�ran fonksiyon
	//cout << kelime[0];
	kelime = kelime[0];
	cout << "�lkharf:" << kelime << endl;
}

void karsilastirma(string kelime1, string kelime2) {
	//Kendisine g�nderilen iki kelimeyi birbiyle kar��la�t�r�p durumunu ekrana yazd�ran fonksiyon
	if (kelime1 == kelime2)
		cout << kelime1 << " " << kelime2 << " kelimeler ayn�" << endl;
	else
		cout << kelime1 << " " << kelime2 << " kelimeler ayn� de�il" << endl;
}

//Kendisine g�nderilen iki de�er aras�ndaki de�erleri k���kten b�y��e do�ru 1'er artt�rarak ekrana yazd�ran fonksiyonu tan�mlay�n�z.
//�lk girilen say� daha b�y�kse swap(deger1,deger2) (yer de�i�tirme) fonksiyonunu kullanal�m
//�r: 3 7 girilirse; 3 4 5 6 7
//�r: 7 3 girilirse; 3 4 5 6 7

void sayilari_yazdir(int sayi1, int sayi2) {
	if (sayi1 > sayi2)
		swap(sayi1, sayi2);
	//swap: x=sayi1; sayi1=sayi2; sayi2=x;
	for (int i = sayi1; i <= sayi2; i++)
		//sayi1 i�eri�i de�i�mez
		cout << i << " ";
	cout << endl;
	for (sayi1; sayi1 <= sayi2; sayi1++)
		//Bu d�ng�de sayi1 i�erisinde saklanan de�erin i�eri�i de�i�ir.
		//D�ng� bitiminde sayi1 sayi2'nin 1 fazlas�n� tutar.
		cout << sayi1 << " ";
	cout << endl;
	cout << sayi1 << " " << sayi2 << endl;
}

//Kendisine g�nderilen iki de�erin kuvvetini hesaplayan fonksiyon
//�r: Taban:2 Us:3 girilirse; 2^3= 8 ��kt�s�n� verecek
//�r: Taban:4 Us:2 girilirse; 4^2= 16 ��kt�s�n� verecek

void us_alma(int taban, int us) {
	int sonuc = 1, i;
	for (i = 1; i <= us; i++) {
		sonuc *= taban;
	}
	cout << taban << "^" << us << "=" << sonuc << endl;
}

//void : de�er d�nd�rmez

//Kendisine g�nderilen iki tam say�y� toplay�p toplam sonucunu geri d�nd�ren fonksiyon
int topla(int s1, int s2) {
	//2 parametre var: s1,s2
	return s1 + s2;
}

//Kendisine g�nderilen �� tam say�y� toplay�p toplam sonucunu geri d�nd�ren fonksiyon
int topla(int s1, int s2, int s3) {
	//3 parametre var: s1,s2,s3
	return s1 + s2 + s3;
}

//Kendisine g�nderilen iki ondal�kl� say�y� toplay�p sonucunu geri d�nd�ren fonksiyon
double topla(double sayi1, double sayi2) {
	return sayi1 + sayi2;
}

//Kendisine g�nderilen kelimenin karakter say�s� tek ise kelimeyi karakter say�s� kadar ekrana yazd�ran, �ift ise kelimeyi tersten 1 kez ekrana yazd�ran fonksiyon
void karakter(string kelime) {
	int uzunluk = kelime.length();
	if (uzunluk % 2 == 0) {
		for (int i = uzunluk - 1; i >= 0; i--)
			cout << kelime[i];
		cout << endl;
		/*for (int i = uzunluk; i > 0; i--)
			cout << kelime[i - 1];
		cout << endl;*/
	}
	else {
		for ( int i = 1; i <= uzunluk; i++) {
			cout << kelime << endl;
		}
	}
}

//Kendisine g�nderilen say�n�n t�m rakamlar� toplay�p toplam� geri d�nd�ren fonksiyon
//�r: 1234 gelirse; 1+2+3+4=10 hesaplay�p 10 de�erini geri d�nd�recek
int rakam_toplami(int sayi) {
	int sonuc = 0;
	while (sayi > 0)
	{
		sonuc += sayi % 10;
		sayi = (sayi- sayi % 10)/10;
	}
	return sonuc;
}
