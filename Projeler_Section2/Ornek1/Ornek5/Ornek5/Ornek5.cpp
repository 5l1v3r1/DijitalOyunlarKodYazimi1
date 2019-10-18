
#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
//std isim uzay�n� projemize dahil ettik
int main()
{
	setlocale(LC_ALL, "Turkish");
	//Kullan�c�dan haftan�n ka��nc� g�n� bilgisini alal�m
	//G�n� ekrana getirelim. (Pazartesi haftan�n 1.g�n�)
	//�r. 7 dedi�inde Pazar, 3 dedi�inde �ar�amba ekrana yazd�r�lacak
	
	int gun;
	cout << "Haftan�n ka��nc� g�n�:";
	cin >> gun;
	
	//1.Y�ntem: (if else ile ��z�m�)
	//If switch case yap�s�na g�re daha yava�t�r. if ko�ulu do�ru olana kadar t�m if'ler tek tek kontrol edilir.
	if (gun == 1)
		cout << "Pazartesi";
	else if (gun == 2)
		cout << "Sal�";
	else if (gun == 3)
		cout << "�ar�amba";
	else if (gun == 4)
		cout << "Per�embe";
	else if (gun == 5)
		cout << "Cuma";
	else if (gun == 6)
		cout << "Cumartesi";
	else if (gun == 7)
		cout << "Pazar";
	else
		//if'lerin hi�biri do�ru de�ilse else �al���r.
		cout << "Ge�ersiz de�er";
	cout << endl;
	

	//2.Y�ntem (switch case ile ��z�m�)
	//if else yap�s�na g�re daha h�zl�d�r. Direk do�ru olan case �al���r, tek tek case'leri kontrol etmez.
	switch (gun)
	{
	case 1:
		cout << "Pazartesi";
		break;
		//break swich case blo�unu k�rar. E�er gun de�eri 1'e e�itse ve break kullanmam��sak break ifadesini g�rene kadar di�er case'ler de �al���r.
	case 2:
		cout << "Sal�";
		break;
	case 3:
		cout << "�ar�amba";
		break;
	case 4:
		cout << "Per�embe";
		break;
	case 5:
		cout << "Cuma";
		break;
	case 6:
		cout << "Cumartesi";
		break;
	case 7:
		cout << "Pazar";
		break;
	default:
		//Case'lerin hi�biri do�ru de�ilse default �al���r.
		cout << "Ge�ersiz de�er";
		break;
	}
	cout << endl;
	

	//3. Y�ntem: (dizi ile ��z�m�)
	string  gunler[7] = { "Pazartesi", "Sal�", "�ar�amba", "Per�embe", "Cuma", "Cumartesi", "Pazar" };
	//7 eleman tutan bir string dizi tan�mlad�k
	
	if (gun >= 1 && gun <= 7)
		cout << gunler[gun - 1];
		//Dizilerde indis de�eri 0'dan ba�lar. Bu y�zden gun de�erinden 1 ��kard�k
	else
		cout << "Ge�ersiz de�er";
	cout << endl;
	// Kullan�c�n�n girdi�i de�ere g�re g�n bilgisini getirelim
	//�rn. 3 girilirse �ar�amba, 12 girilirse Cuma, 20 girilirse Cumartesi
	cout << gunler[gun % 7 - 1] << endl;
	//�ndis de�eri 0'dan ba�lad��� i�in 1 eksi�ini ald�k
	

	//Girilen ay bilgisine g�re mevsimleri ekrana getiren program
	//12-1-2 K��
	//3-4-5 �lkbahar
	//6-7-8 Yaz
	//9-10-11 Sonbahar
	
	//veya ko�ulu i�in || (AltGr+<>) sembol� kullan�l�r
	//ve ko�ulu i�in && (Shift+6) sembol� kullan�l�r
	int ay;
gitay1:
	cout << "Ay de�erini say�sal olarak giriniz:";
	cin >> ay;
	if (ay == 12 || ay == 1 || ay == 2)
		cout << "K��";
	else if (ay >= 3 && ay <= 5)
	//else if (ay==3 || ay==4 || ay==5)
	
	//bu �ekilde de yazabilirdik
		cout << "�lkbahar";
	else if (ay >= 6 && ay <= 8)
		cout << "Yaz";
	else if (ay >= 9 && ay <= 11)
		cout << "Sonbahar";
	else
	{
		cout << "Ge�ersiz de�er girdiniz"<<endl;
		goto gitay1;
	}
	cout << endl;
	//Girilen do�um y�l�,ay� ve bulundu�u y�l,ay bilgisine g�re ya�� hesaplayan program
	//Do�um y�l� bulundu�u y�ldan b�y�k olamaz!
	//Do�um y�l� bulundu�u y�la e�itse do�um ay� bulundu�u aydan b�y�k olamaz!
	//E�er do�um y�l� bulundu�u y�la e�itse aya g�re hesaplama yap�lacakt�r.
	//Ay sonucu negatif olmamal�.E�er ay sonucu negatif (-) ��karsa, 
	//1.y�ntem:yil sonucunu 12 ile �arp�p ay sonucunu bu de�erden ��kar�p ay sonucunu bulal�m. 
	//2.y�ntem: ay bilgisine 12 ekleyip, y�ldan 1 ��kartabiliriz
	//�rn; do�um y�l� 2009, bulundu�u y�l 2019, do�um ay� 1, bulundu�u ay 12 de�erleri girilirse; ��kt�: "10 ya� 11 ay"
	//�rn; do�um y�l� 2009, bulundu�u y�l 2019, do�um ay� 12, bulundu�u ay 1 de�erleri girilirse; ��kt�: "9 ya� 1 ay"
	//�rn; do�um y�l� 2019, bulundu�u y�l 2019, do�um ay� 1, bulundu�u ay 12 de�erleri girilirse; ��kt�: "0 ya� 11 ay"
	//�rn; do�um y�l� 2019, bulundu�u y�l 2019, do�um ay� 12, bulundu�u ay 1 de�erleri girilirse; ��kt�: "Hatal� giri�", ay bilgisi tekrar istenecek
	//�rn; do�um y�l� 2020, bulundu�u y�l 2019, ��kt�: "Hatal� giri�", y�l bilgisi tekrar istenecek
	int b_yil, d_yil, b_ay, d_ay, yas, aylik;
gityil:
	cout << "Bulundu�un y�l:";
	cin >> b_yil;
	cout << "Do�um y�l�:";
	cin >> d_yil;
	if (d_yil > b_yil)
	{
		cout << "Hatal� giri�" << endl;
		goto gityil;
	}
gitay:
	cout << "Bulundu�un ay:";
	cin >> b_ay;
	cout << "Do�um ay�:";
	cin >> d_ay;
	if (b_yil==d_yil && d_ay > b_ay)
	{
		cout << "Hatal� giri�" << endl;
		goto gitay;
	}
	yas = b_yil - d_yil;
	aylik = b_ay - d_ay;
	if (aylik < 0)
	{
		yas = yas - 1;
		aylik = aylik + 12;
	}
	cout << yas << " ya� " << aylik << " aylik" << endl;

}
