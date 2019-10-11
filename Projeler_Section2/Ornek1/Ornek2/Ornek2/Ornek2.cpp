
#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1=1,sayi2=1,toplam,ortalama;
	//sayi1 ve sayi2: ilk de�er atamas� yap�ld�
	
	//Girilen iki say�n�n toplam�n� ve ortalamas�n� 
	//ekrana yazd�r
	cout <<sayi1 << endl << "�ki say� giriniz:";
	//endl (endline) sat�r sonu ver. Yeni sat�r�n ba��na ge�
	cin >> sayi1 >> sayi2;
	cout << sayi1 << " " << sayi2 << "\n";
	
	//1.yol:
	cout << "Toplam=" << sayi1 + sayi2 << endl;
	cout << "Ortalama=" << (sayi1 + sayi2) / 2 << endl;
	//endl kodu ya da "\n" karakteri alt sat�ra 
	//ge�memizi sa�lar

	//2.yol:
	cout << "Toplam=" << sayi1 + sayi2 << endl << "Ortalama=" << (sayi1 + sayi2) / 2 << endl;
	
	//3.yol:
	toplam = sayi1 + sayi2;
	ortalama = toplam / 2;
	cout << "Toplam=" << toplam << endl;
	cout << "Ortalama=" << ortalama << endl;

	//Bir dersin vize, �dev, quiz ve final notlar�n�n girilerek 
	//ortalamas�n� hesaplay�n�z ve ekrana yazd�r�n�z. 
	//Vize notunun katk�s� %30, �dev %10, quiz %10, 
	//final notunun katk�s� %50�dir. 
	//Ortalama = vize * 30 % +�dev * 10 % +quiz * 10 % +final * 50 %
	//Ortalama = vize * 0.3 +�dev * 0.1 +quiz * 0.1 +final * 0.5
	int vize, final, quiz, odev,ort;
	cout << "Vize notu:";
	cin >> vize;
	cout << "Quiz notu:";
	cin >> quiz;
	cout << "�dev notu:";
	cin >> odev;
	cout << "Final notu:";
	cin >> final;
	ort = vize * 0.3 + odev * 0.1 + quiz * 0.1 + final * 0.5;
	cout << ort <<endl;
	
	//De�i�ken tan�mlama:
	int sayi=10;
	//Tamsay� tutar. Ondal�kl� say�lar atanamaz
	float ondaliklisayi = 10.5;
	//Ondal�kl� say�lar� tutabilir
	char harf = 'A';
	bool durum;
	//char de�i�ken t�r�ndeki bir de�i�kene de�er atarken 
	//tek t�rnak ('') i�areti kullan�l�r
	cout << "Say�:";
	cin >> sayi;
	cout << "Ondal�kl� say�:";
	cin >> ondaliklisayi;
	cout << "Harf:";
	cin >> harf;
	cout << "Say�:" << sayi << "\nOndal�kl� say�:" << ondaliklisayi;
	cout << "\nHarf:" << harf;
	cout << endl;
	if (harf == 'A')
		//E�er harf 'A' karakterine e�itse bu ad�m �al���r
		cout << "Girilen harf A'd�r";
	else
		//E�er harf 'A' karakterine e�it de�ilse bu ad�m �al���r
		//if ko�ulu sa�lanm�yorsa else durumu �al���r
		cout << "Girilen harf A de�ildir";
	cout << endl;

	if (sayi > 10)
		durum = true;
	else
		durum = false;
	cout << "Durum:" << durum << endl;

	if (durum)
		cout << "Say� 10'dan b�y�kt�r";
	else
		cout << "Say� 10'dan b�y�k de�ildir";
	cout << endl;
	//Klavyeden girilen iki say�dan b�y�k olan say�y� ekrana yazd�ral�m.
	
	/*
	1.Ba�la
	2.De�i�ken Tan�mla: sayi1,sayi2
	3.Oku sayi1,sayi2
	4.E�er sayi1>sayi2 ise Yaz sayi1 de�ilse Yaz sayi2
	5.Bitir
	*/
	//int sayi1,sayi2;
	//sayi1 ve sayi2 de�i�kenlerini yukardaki kodlarda 
	//tan�mlad���m�z i�in tekrar tan�mlam�yoruz
	cout << "�ki say� giriniz:";
	cin >> sayi1 >> sayi2;
	if (sayi1 > sayi2)
		cout << sayi1;
	else
		cout << sayi2;
	cout << endl;
	//Girilen iki say�dan hangisinin b�y�k oldu�unu veya e�itse
	//e�it olduklar�n� ekrana yazd�ral�m
	/*
	//1.y�ntem
	//Bu if blo�unda program �al��t���nda t�m ko�ullara tek tek bak�l�r.
	//Bu birbirine ba�l� ko�ullarda tercih edilmemelidir.
	if (sayi1 > sayi2)
		cout << "1.girilen say� daha b�y�kt�r";
	if (sayi1 < sayi2)
		cout << "2.girilen say� daha b�y�kt�r";
	if (sayi1 == sayi2)
		cout << "Say�lar birbirine e�ittir";
	cout << endl;
	*/
	//2.y�ntem
	//Birbirine ba�l� ko�ullar�n olmas� durumunda bu yap� tercih edilmelidir.
	//Bu ko�ul yap�s� bir ko�ulun sa�lanmas� durumunda di�er ko�ullara bakmaz.
	if (sayi1 > sayi2)
		cout << "1.girilen say� daha b�y�kt�r";
	else if (sayi1 < sayi2)
		cout << "2.girilen say� daha b�y�kt�r";
	else
		cout << "Say�lar birbirine e�ittir";
	cout << endl;
	//sayi1 ve sayi2'nin tek veya �ift oldu�unu ekrana yazd�ral�m
	// % karakteri ile bir say�n�n di�er bir say�ya b�l�m�nden kalan(mod) hesaplan�r.
	//�r. 5%2 i�leminin sonucu 1'dir. 4%2 i�leminin sonucu 0'd�r.
	//Bunu bir ko�ulda ifade etmek i�in;
	//Tek i�in: if(sayi%2==1), �ift i�in: if (sayi%2==0) ko�ul bloklar� kullan�l�r.

	if (sayi1 % 2 == 0)
		cout << "1.say� �ifttir";
	else
		cout << "1.say� tektir";
	cout << endl;
	if (sayi2 % 2 == 0)
		cout << "2.say� �ifttir";
	else
		cout << "2.say� tektir";
}	
