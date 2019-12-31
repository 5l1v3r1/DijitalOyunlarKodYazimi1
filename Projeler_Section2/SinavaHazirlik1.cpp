#include "pch.h"
#include <iostream>
#include <locale>
#include <random>
#include <time.h>

using namespace std;

int kare(int sayi1, int sayi2);
void sayi();
int faktoriyel(int sayi);
void faktoriyel_yazdir(int sayi);
void rastgele5_toplam();

int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL)); //Program her �al��t�r�ld���nda Random ile �retilen de�erlerin farkl� de�erler olmas�n� sa�lar. Ama bu say�n�n farkl�l�klar�n� ifade etmez. Yani 5 �retildiyse tekrar �retilebilir.
	//sayi();

	cout << "faktoriyel() fonksiyonu �al���yor...\n";
	cout <<"0!=" << faktoriyel(0) << endl;
	cout <<"5!=" << faktoriyel(5) << endl;
	cout <<"-4!=" << faktoriyel(-4) << endl;
	if (faktoriyel(-4) == 0)
		cout << -4 << " say�s�n�n fakt�riyeli yoktur.\n";

	cout << "faktoriyel_yazdir() fonksiyonu �al���yor...\n";
	faktoriyel_yazdir(-4);
	faktoriyel_yazdir(0);
	faktoriyel_yazdir(6);

	cout << "rastgele5_toplam() fonksiyonu �al���yor...\n";
	rastgele5_toplam();

	system("pause");
	return 0;
}

//�rnek-1:
//Kendisine g�nderilen iki tamsay� de�erinden b�y�k olan�n karesini, say�lar e�itse say�lardan herhangi birini geri d�nd�ren fonksiyonu yaz�n�z.
int kare(int sayi1, int sayi2) {
	if (sayi1 > sayi2)
		return sayi1 * sayi1;
	else if (sayi1 < sayi2)
		return sayi2 * sayi2;
	else
		return sayi1; //return sayi2;
}
//�rnek-2:
//Girilen iki tamsay� de�erini kare fonskiyonuna g�nderip fonksiyondan gelen de�eri ekrana yazd�ran fonskiyonu yaz�n�z. 
void sayi() {
	//De�er d�nd�rmedi�i i�in void olarak tan�mlad�k
	//De�er almad��� i�in herhangi bir parametresi yok 
	//() yani parantez i�i bo� 
	int s1, s2;
	cout << "�ki say� girin:";
	cin >> s1 >> s2;
	cout << kare(s1, s2) << endl;
}

//�rnek-3:
//Kendisine g�nderilen tamsay� de�erinin fakt�riyelini geri d�nd�ren fonksiyonu yaz�n�z. E�er kendisine g�nderilen say� negatif ise 0 de�erini d�nd�relim.
//Not: 0!=1
int faktoriyel(int sayi) {
	//E�er bir de�er d�nd�rm�yor olsayd� fonksiyonu; 
	//void faktoriyel(int sayi) 
	//�eklinde tan�mlard�k
	//Fakt�riyel : �r: 5!=1*2*3*4*5 veya 5!=5*4*3*2*1
	int sonuc = 1;
	for (int i = 1; i <= sayi; i++) {
		sonuc *= i; //sonuc = sonuc * i;
	}
	/*
	//1.y�ntem:
	if (sayi < 0)
		return 0;
	else
		return sonuc;
	*/

	//2.y�ntem:
	if (sayi < 0)
		sonuc = 0;
	return sonuc;
}

//�rnek-4:
//Kendisine g�nderilen say�y� fakt�riyel fonksiyonuna g�nderip fakt�riyel fonksiyonundan gelen de�er 0 ise "... say�s�n�n fakt�riyeli yoktur.", 0 de�ilse sayi!=sonuc �r/5!=120 ��kt�s�n� versin
void faktoriyel_yazdir(int sayi) {
	int fakt = faktoriyel(sayi);
	if (fakt == 0)
		cout << sayi << " say�s�n�n fakt�riyeli yoktur.\n";
	else
		cout << sayi << "!=" << fakt << endl;
}

//�rnek-5:
//Rastgele �retilen 1-100 aras�nda 5 say�n�n toplam�n� ekrana yazd�ran fonksiyon
//Parametre (Bu fonksiyona g�nderilen de�er) : YOK (NULL)
//Geri d�nd�rd��� de�er (Return de�eri) : YOK (void)
void rastgele5_toplam() {
	int sayi, toplam = 0;
	for (int i = 1; i <= 5; i++){
		sayi = rand() % 100 + 1; 
		//Ba�lang�� de�eri = 1 (+1 ile ifade ettik)
		//Biti� de�eri = 100 (100+1-1=100) �kisinin toplam�ndan 1 de�erini� ��kararak hesaplar�z

		//�r: 31 ile 54 aras�nda �retilecek deseydik: 
		//sayi = rand() % 24 + 31;
		cout << sayi << endl;
		toplam += sayi; //toplam = toplam + sayi;
	}
	cout << "Toplam=" << toplam << endl;

}

//A�a��daki Cuma g�n� derste ��zece�iz

//�rnek-6:
//Rastgele �retilen 20 say�dan 1-100 aras�ndaki say�lardan tek olanlar� ve �ift olanlar� ayr� ayr� ekrana yazd�ran fonksiyon
//Not: De�erler bir dizide tutulmak zorundad�r
//Parametre (Bu fonksiyona g�nderilen de�er) : YOK (NULL)
//Geri d�nd�rd��� de�er (Return de�eri) : YOK (void)



//�rnek-6:
//Rastgele �retilen 5 say�n�n toplam�n� ekrana yazd�ran fonksiyon
//Parametre (Bu fonksiyona g�nderilen de�er) : YOK (NULL)
//Geri d�nd�rd��� de�er (Return de�eri) : YOK (void)

//Cuma g�n� devam edece�iz...