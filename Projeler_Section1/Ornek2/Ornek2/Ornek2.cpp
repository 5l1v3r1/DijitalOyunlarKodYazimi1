#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	//�rnek-1.	Klavyeden girilen iki say�n�n toplam�n� ve ortalamas�n� ekrana yazd�r�n�z.

	setlocale(LC_ALL, "Turkish");
	
	int sayi1, sayi2, toplam, ort;
	cout << "�ki say� giriniz\n";
	cin >> sayi1 >> sayi2;
	//1.y�ntem:
	toplam = sayi1 + sayi2;
	ort = toplam / 2;
	cout << "Toplama:" << toplam << endl;
	cout << "Ortalama:" << ort;
	
	//2.y�ntem:
	cout << "Toplama:" << sayi1+sayi2 << endl;
	cout << "Ortalama:" << (sayi1 + sayi2) / 2;
	
	//3.y�ntem:
	cout << "Toplama:" << sayi1 + sayi2 << endl << "Ortalama:" << (sayi1 + sayi2) / 2 << endl;

	//Bir dersin vize, �dev, quiz ve final notlar�n�n girilerek ortalamas�n�n hesaplay�n�z ve ekrana yazd�r�n�z. Vize notunun katk�s� %30, �dev %10, quiz %10, final notunun katk�s� %50�dir. 
	//Ortalama = vize * 30 % +�dev * 10 % +quiz * 10 % +final * 50 %

	
	int vize, final, quiz, odev,ortalama;
	cout << "Vize:";
	cin >> vize;
	cout << "Final:";
	cin >> final;
	cout << "Quiz:";
	cin >> quiz;
	cout << "�dev:";
	cin >> odev;
	ortalama = int(vize * 0.3 +final * 0.5 +quiz * 0.1 +odev * 0.1) ;
	cout << "Ortalama:" << ortalama << endl;
	
	
	//De�i�ken tan�mlama:
	int sayi=10;
	float ondaliklisayi=10.5;
	char harf;
	bool durum;
	cout << "Tam say�:";
	cin >> sayi ;
	cout << "Say�:"<< int(sayi) << endl;
	cout << "Ondal�kl� say�:";
	cin >> ondaliklisayi;
	cout <<"Ondal�kl�:" <<ondaliklisayi << endl;
	cout << "Harf:";
	cin >> harf;
	cout << "Harf:" << harf << endl;
	
	if (sayi > 10)
		durum = true;
	else
		durum = false;
	cout << "Say� 10'dan b�y�k m�?:" << durum << endl;
	if (harf == 'A')
		cout << "A girildi";
	else
		cout << "A girilmedi";
	cout << endl;
	//Girilen iki say�dan b�y�k olan say�y� ekrana yazd�ral�m.
	//int sayi1, sayi2;
	//sayi1 ve sayi2 daha �nceden tan�mland��� i�in tekrar tan�mlam�yoruz.
	cout << "�ki say� giriniz:";
	cin >> sayi1 >> sayi2;
	if (sayi1 > sayi2)
		cout << "B�y�k say�:" << sayi1 << endl;
	else
		cout << "B�y�k say�:" << sayi2 << endl;
	//Girilen iki say�dan hangisinin b�y�k oldu�unu veya e�itse
	//e�it olduklar�n� ekrana yazd�ral�m
	//1.y�ntem
	//Bu if blo�unda program �al��t���nda t�m ko�ullara tek tek bak�l�r.
	//Bu birbirine ba�l� ko�ullarda tercih edilmemelidir.
	/*
	if (sayi1 > sayi2)
		cout << "1.say� 2.say�dan daha b�y�kt�r";
	if (sayi1 < sayi2)
		cout << "2.say� 1.say�dan daha b�y�kt�r";
	if (sayi1 == sayi2)
		cout << "Say�lar birbirine e�it";
	cout << endl;
	*/
	//2.y�ntem:
	//Birbirine ba�l� ko�ullar�n olmas� durumunda bu yap� tercih edilmelidir.
	//Bu ko�ul yap�s� bir ko�ulun sa�lanmas� durumunda di�er ko�ullara bakmaz.
	if (sayi1 > sayi2)
		cout << "1.say� 2.say�dan daha b�y�kt�r";
	else if (sayi1 < sayi2)
		cout << "2.say� 1.say�dan daha b�y�kt�r";
	else
		cout << "Say�lar birbirine e�it";
	cout << endl;
	//sayi1 ve sayi2'nin tek veya �ift oldu�unu ekrana yazd�ral�m
	// % karakteri ile bir say�n�n di�er bir say�ya b�l�m�nden kalan(mod) hesaplan�r.
	//�r. 5%2 i�leminin sonucu 1'dir. 4%2 i�leminin sonucu 0'd�r.
	//Bunu bir ko�ulda ifade etmek i�in;
	//Tek i�in: if(sayi%2==1), �ift i�in: if (sayi%2==0) ko�ul bloklar� kullan�l�r.
	if (sayi1 % 2 == 0)
	{
		//Birden fazla kod sat�r�n�n �al��mas� i�in kodlar {} aras�nda yaz�l�r.
		cout << sayi1;
		cout << " �ifttir\n";
	}
	else
		cout << sayi1 << " Tektir" << endl;

	if (sayi2 % 2 == 0)
		cout << sayi2 << " �ifttir\n";
	else
		cout << sayi2 << " Tektir\n";

	
}
