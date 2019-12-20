#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
#include <random>
#include <time.h>

using namespace std;

void ptr();
void arttir5(int *p1, int *p2);
void kat(int *p);
void kat(int sayi);
void ptrptr();
int * rastgele();

void tersine(string *kelime);
//string t�r�nde de�er i�eren fonksiyonlar�n mutlaka using namespace std; tan�mlamas�n�n alt�nda olmas� gerekiyor. Ya da bununla ilgili olan k�t�phaneyi projenize dahil edebilirsiniz.

int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL));

	int s1=2, s2=4;

	
	ptr();
	
	cout << "Fonksiyon �a�r�lmadan �nce:\n";
	cout << "s1:" << s1 << " s2:" << s2 << endl;
	arttir5(&s1, &s2);
	cout << "Fonksiyon �a�r�ld�ktan sonra:\n";
	cout << "s1:" << s1 << " s2:" << s2 << endl;
	
	
	cout << "Say�:";
	cin >> s1;
	
	kat(s1);
	cout << "kat(s1) fonksiyonu �al���yor..\n";
	cout << "say�:" << s1 << endl;

	kat(&s1);
	cout << "kat(&s1) fonksiyonu �al���yor..\n";
	cout << "say�:" << s1 << endl;
	

	string kelime;
	cout << "Kelime:";
	cin >> kelime;
	tersine(&kelime);
	cout << "kelime:" << kelime << endl;
	
	ptrptr();
	
	int sayi;
	sayi =* rastgele();
	cout <<"sayi:" <<  sayi << endl;
	cout <<"&sayi:" << &sayi << endl;
	return 1;
}

void ptr() {
	int sayi = 10;
	int *p = &sayi; //sayi de�i�keninin bellek adresini p pointer (adres tutucuya/i�aret�iye) atad�k
	cout << "sayi:" << sayi << endl;
	cout << "&sayi:" << &sayi << endl;
	cout << "p:" << p << endl;
	cout << "*p:" << *p << endl; //*p pointer i�inde tutulan adresteki de�ere ula�mam�z� sa�lar
	cout << "&p:" << &p << endl;

	//Kullan�c�n�n girdi�i de�erin tutuldu�u bellek adresine giderek bu de�eri 5 artt�ral�m.
	cout << "Say�:";
	cin >> sayi;
	int *pointer = &sayi;
	*pointer += 5; // *pointer = *pointer + 5;
	cout << "sayi:" << sayi << endl;

}

//Kendisine g�nderilen bellek adreslerinin i�inde saklanan de�erleri 5 artt�ran fonksiyon:
void arttir5(int *p1, int *p2) {
	*p1 = *p1 + 5;
	*p2 += 5;
}

//Problem: Kullan�c�dan al�nan de�eri fonksiyon parametre olarak als�n ve 
//bu de�eri fonksiyon i�erisinde kullan�c�n�n girdi�i kata e�itlesin
//�r:main i�inde 4 girilirse, fonksiyonda 5 girilirse, mainden gelen 4 de�eri 20 olacak
void kat(int *p) {
	int k;
	cout << "Kat de�eri:";
	cin >> k;
	*p *= k; // *p = *p * k;
}

//Fonksiyona pointer yerine de�er g�ndererek de�erin main i�erisindeki durumunu g�zlemleyelim
void kat(int sayi) {
	//De�erin kopyas�n� al�p, farkl� bir bellek adresinde tutar
	//Bu nedenle kendisine g�nderilen de�er de�i�tirilemez
	int k;
	cout << "Kat de�eri:";
	cin >> k;
	sayi *= k; // sayi = sayi * k;
}

//Kendisine g�nderilen kelimenin adresini (pointer) tutan fonksiyon tan�mlayal�m. Bu kelimeyi fonksiyon i�inde tersine d�n��t�relim.
//�R: kendisine "kedi" kelimesi geldi�inde, kelime "idek" olacak.
void tersine(string *kelime) {
	string ters="";
	int uzunluk = (*kelime).length();
	for (int i = uzunluk-1; i >= 0; i--){
		ters += (*kelime)[i];	
	}
	*kelime = ters;
}

void ptrptr() {
	int var = 10;
	int *ptr = &var;
	cout << "var:" << var << endl;
	cout << "&var:" << &var << endl;
	cout << "ptr:" << ptr << endl;
	cout << "*ptr:" << *ptr << endl;

	*ptr = 20;
	cout << "*ptr = 20; i�leminden sonra..:" << endl;
	cout << "var:" << var << endl;
	cout << "*ptr:" << *ptr << endl;

	int **ptr2 = &ptr;
	**ptr2 = 30;

	var = 30;
	cout << "**ptr2 = 30; i�leminden sonra..:" << endl;
	cout << "var:" << var << endl;
	cout << "*ptr:" << *ptr << endl;
	cout << "ptr:" << ptr << endl;
	cout << "&ptr:" << &ptr << endl;
	cout << "ptr2:" << ptr2 << endl;
	cout << "*ptr2:" << *ptr2 << endl;
	cout << "**ptr2:" << **ptr2 << endl;
}

//random ile olu�turulan 1-10 aras�ndaki 10 say�n�n toplam�n�n tutuldu�u adresi �a�r�ld��� fonksiyona g�nderen fonksiyonu yazal�m.
int * rastgele() {
	int sayi, toplam=0;
	for (int i = 1; i <= 10; i++)
	{
		sayi = rand() % 10 + 1;
		cout << sayi << " ";
		toplam += sayi;
	}
	cout << endl;
	cout << "&toplam:" << &toplam << endl;
	cout << "toplam:" << toplam << endl;
	return &toplam;
}