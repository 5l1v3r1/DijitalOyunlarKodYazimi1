#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>

void ptr();
void kat(int *p);
void ptr2();

using namespace std;

void kelimenin_tersi(string *kelime);

int main()
{
	setlocale(LC_ALL, "turkish");
	//Pointer - ��aret�iler
	//& -> adresi getirir
	//* -> adresin i�erisindeki de�eri getirir
	// pointer tan�mlarken ba��na * sembol� koyulur.Pointer'�n i�erisinde tutulan adresteki bilgiye ula��rken yine �n�ne * konulur.
	/*
	ptr();
	int sayi;
	cout << "Say�:";
	cin >> sayi;
	cout << "Say�:" << sayi << endl;
	kat(&sayi);
	cout << "Say�:" << sayi << endl;
	*/
	ptr2();
	string kelime;
	cout << "Kelime giriniz..:";
	cin >> kelime;
	kelimenin_tersi(&kelime);
	cout << "Main fonksiyonundaki kelime:" << kelime;
}

void ptr() {
	int sayi = 10;
	int *p = &sayi;
	cout << "Say�:" << sayi << endl;
	cout << "Say� konum:" << &sayi << endl;
	cout << "p:" << p << endl;
	cout << "p konum:" << &p << endl;
	*p = 11;
	cout << "p:" << p << endl;
	cout << "p+1:" << p + 1 << endl;
	cout << "*p:" << *p << endl;
	cout << "Say�:" << sayi << endl;
}

//Problem: Kullan�c�dan al�nan de�eri fonksiyon parametre olarak als�n ve bu de�eri fonksiyon i�erisinde kullan�c�n�n girdi�i kata e�itlesin
//�r:main i�inde 4 girilirse, fonksiyonda 5 girilirse, mainden gelen 4 de�eri 20 olacak

void kat(int *p) {
	int k, sonuc;
	cout << "Kat de�eri:";
	cin >> k;
	sonuc = *p * k;
	*p = sonuc;
}

void ptr2() {
	int var = 10;
	cout <<"var:" << var << endl;
	int *ptr = &var;
	*ptr = 20;
	cout << "var:" << var << endl;
	int **ptr2 = &ptr;
	**ptr2 = 30;
	cout << "var:" << var << endl;
	cout << "&var:" << &var << endl;
	cout << "ptr:" << ptr << endl;
	cout << "*ptr:" << *ptr << endl;
	cout << "&ptr:" << &ptr << endl;
	cout << "ptr2:" << ptr2 << endl;
	cout << "*ptr2:" << *ptr2 << endl;
	cout << "**ptr2:" << **ptr2 << endl;
	cout << "&ptr2:" << &ptr2 << endl;
}

//Kendisine g�nderilen pointer bir kelime tutuyor. Bu kelimeyi tersine d�n��t�ren fonksiyon:
//�R: kendisine "kedi" kelimesi geldi�inde, kelime "idek" olacak.
void kelimenin_tersi(string *kelime) {
	string ters = "";
	cout << "Kelime:" << *kelime << endl;
	cout << "Kelime adresi:" << &kelime << endl;
	int uzunluk = (*kelime).length() - 1;
	//cout << "Uzunluk:" << uzunluk << endl;
	//uzunluk de�erini kelimenin uzunlu�unun 1 eksi�ini tutuyor. Bunun nedeni; indis de�erinin 0'dan ba�lamas�d�r.

	for (int i = uzunluk; i >= 0; i--) {
		ters = ters + (*kelime)[i]; //ters+=(*kelime)[i];
		//Kelimenin tersini ters diye bir de�i�kende tutuyoruz. 

		//*kelime = *kelime + (*kelime)[i]; 
		//E�er ters = ters + (*kelime)[i]; *kelime = ters; ad�mlar�n�n yerine; yukar�daki ad�m� ger�ekle�tirirsek (yani pointer'�n i�aret etti�i adresteki verinin yan�na kelimenin tersini ekle dersek) kelimemizin yan�na tersi eklenmi� olur.
	}
	*kelime = ters;
	cout << "Fonksiyondaki kelime:" << *kelime << endl;
}


