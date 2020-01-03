#include "pch.h"
#include <iostream>
#include <random>
#include <time.h>
#include <locale>
#include <string>

using namespace std;

void rastgele();
void rastgele2();
int rastgele3(int miktar, int baslangic, int bitis);
void maks();
void farklar();
int giris();
bool giris2();

int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL));
	int t;
	
	rastgele();
	rastgele2();
	cout << "Toplam:" << rastgele3(5, 20, 50) << endl;
	t = rastgele3(3, 3, 5);
	cout << "Toplam:" << t << endl;
	cout << "De�er s�f�r girilene kadar d�ng� devam ediyor...\n";
	maks();
	cout << "De�er s�f�r girilene kadar d�ng� devam ediyor...\n";
	farklar();
	cout << "Kullan�c� ad�: admin Parola: nimda" << endl;
	cout << "Hatal� giri� say�s�:" << giris() << endl;
	if (giris2())
		cout << "Giri� ba�ar�l�\n";
	else
		cout << "Giri� ba�ar�s�z\n";
}

//�rnek-6:
//Rastgele �retilen 20 say�dan 1-100 aras�ndaki say�lardan tek olanlar� ve �ift olanlar� ayr� ayr� ekrana yazd�ran fonksiyon
//Not: De�erler bir dizide tutulmak zorundad�r
//Parametre (Bu fonksiyona g�nderilen de�er) : YOK (NULL)
//Geri d�nd�rd��� de�er (Return de�eri) : YOK (void)
void rastgele() {
	int sayilar[20], i;
	for (i = 0; i < 20; i++){
		sayilar[i] = rand() % 100 + 1;
	}
	cout << "Tek say�lar\n";
	for (i = 0; i < 20; i++){
		if (sayilar[i] % 2 == 1) {
			cout << sayilar[i] << endl;
		}
	}
	cout << "�ift say�lar\n";
	for (i = 0; i < 20; i++) {
		if (sayilar[i] % 2 == 0) {
			cout << sayilar[i] << endl;
		}
	}
}

//�rnek-7:
//Rastgele �retilen  1-100 aras�ndaki 20 say�dan tek olanlar� ve �ift olanlar� ayr� ayr� ve alt alta ekrana yazd�ran,
//tek ve �ift say�lar�n toplamlar�n� ekrana yazd�ran fonksiyon
//Not: De�erler bir dizide tutulmak zorundad�r
//Parametre (Bu fonksiyona g�nderilen de�er) : YOK (NULL)
//Geri d�nd�rd��� de�er (Return de�eri) : YOK (void)
void rastgele2() {
	int sayilar[20], i, tektoplam=0, cifttoplam=0;
	for (i = 0; i < 20; i++) {
		sayilar[i] = rand() % 100 + 1;
	}
	cout << "Tek say�lar\n";
	for (i = 0; i < 20; i++) {
		if (sayilar[i] % 2 == 1) {
			cout << sayilar[i] << endl;
			tektoplam += sayilar[i]; //tektoplam = tektoplam + sayilar[i];
		}
	}
	cout << "Tek say�lar�n toplam�:" << tektoplam << endl;
	cout << "�ift say�lar\n";
	for (i = 0; i < 20; i++) {
		if (sayilar[i] % 2 == 0) {
			cout << sayilar[i] << endl;
			cifttoplam += sayilar[i];
		}
	}
	cout << "�ift say�lar�n toplam�:" << cifttoplam << endl;
}

//�rnek-8:
//Fonksiyona gelen say� kadar, fonksiyona gelen say� aral���nda de�er �reten ve bu say�lar� alt alta ekrana yazd�r�p, say�lar�n toplam�n� geri d�nd�ren fonksiyon
//Parametre (Bu fonksiyona g�nderilen de�er) : int miktar, int baslangic, int bitis
//Geri d�nd�rd��� de�er (Return de�eri) : int (toplam)
int rastgele3(int miktar, int baslangic, int bitis) {
	int sayi, toplam = 0;
	for (int i = 1; i <= miktar; i++){
		sayi = rand() % (bitis-baslangic+1) +baslangic;
		cout << sayi << endl;
		toplam += sayi;
	}
	return toplam;
}

//�rnek-9:Kullan�c� 0 say�s�n� girene kadar (say� 0 olmad��� s�rece) say� girmesini sa�lay�p, bu say�lar�n en b�y���n� (s�f�r say�s�n� dahil etmeden b�y�k say� bulunmal�d�r) ekrana yazd�ran fonksiyon
void maks() {
	int sayi, mak = INT_MIN;
	//mak de�eri kar��la�t�r�rken (sayi > mak) ilk de�erine ihtiyac�m�z var. 
	do
	{
		cout << "Say�:";
		cin >> sayi;
		if (sayi > mak && sayi!=0)
			mak = sayi;
	} while (sayi!=0);
	cout << "Maksimum de�er:" << mak << endl;
}

//�rnek-10:Kullan�c� 0 say�s�n� girene kadar say� girmesini sa�lay�p, bu say�lar�n farklar�n� ekrana yazd�ran fonksiyon
//�r: 3 4 girdi�inde ��kt�:-1, 6 girdi�inde ��kt�:-2, 0 girdi�inde ��kt�:6 program sonlan�r.
void farklar() {
	int sayi, ilksayi;
	cout << "�lk say�:";
	cin >> ilksayi;
	do
	{
		cout << "Say�:";
		cin >> sayi;
		cout << "Fark:" << ilksayi - sayi << endl;
		ilksayi = sayi;
		cout << "�lk say�:" << ilksayi << endl;
	} while (sayi!=0);
}


//�rnek-11:Kullan�c� ad� ve parola giri�i do�ru olana kadar (her iki bilgi de do�ru olmad��� s�rece) kontrol edip, kullan�c� ad� ve parola bilgisinin ka� kere yanl�� girildi�ini geri d�nd�ren fonksiyon
int giris() {
	string k_adi, parola;
	int miktar = 0;
	do
	{
		cout << "Kullan�c� ad�:";
		cin >> k_adi;
		cout << "Parola:";
		cin >> parola;
		if (k_adi == "admin" && parola == "nimda") {
			//g�venli bir kontrol yapm�yoruz! G�venli olmas� ad�na burada kullan�c� ad� ve parola a��k bir �ekilde yaz�lmamas� daha uygundur
			cout << "Giri� ba�ar�l�\n";
			break;
		}
		else {
			miktar++;
			cout << "Hatal� giri�\n";
		}
			
	} while (true);
	return miktar;
}

//�rnek-12:Kullan�c�dan kullan�c� ad� ve parola giri�i al�p  kontrol edelim, 3 yanl�� yapma hakk� olsun. Giri�in ba�ar�l� bir �ekilde olup olmad���n� (bool de�er) d�nd�rs�n ve ka� hakk� kald���n� ekrana yazd�rs�n
bool giris2() {
	string k_adi, parola;
	int hak = 3;
	bool kontrol = false;
	do
	{
		cout << "Kullan�c� ad�:";
		cin >> k_adi;
		cout << "Parola:";
		cin >> parola;
		if (k_adi == "admin" && parola == "nimda") {
			//G�venli bir kontrol yapm�yoruz! G�venli olmas� ad�na burada kullan�c� ad�n�n ve parolan�n a��k bir �ekilde yaz�lmamas� daha uygundur
			kontrol = true;
			break;
		}
		else {
			hak--;
			cout << "Kalan hakk�n�z:" << hak << endl;
		}
	} while (hak>0);
	return kontrol;
}