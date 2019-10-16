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
	/*
	int gun;
	cout << "Haftan�n ka��nc� g�n�:";
	cin >> gun;
	
	//1. y�ntem (Uzun Yol-dizi ve for d�ng�s� kullanmadan ��z�m):
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
		cout << "Ge�ersiz de�er girdiniz";
	cout << endl;
	*/

	/*
	//2.Y�ntem (switch case ile ��z�m):
	switch (gun)
	{
	case 1:
		cout << "Pazartesi";
		break;
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
		//case durumlar�n�n sa�lanmamas� durumunda default �al���r.
		cout << "Ge�ersiz de�er girdiniz";
		break;
	}
	cout << endl;
	
	//3. y�ntem dizi ile ��z�m�
	string gunler[7] = { "Pazartesi", "Sal�", "�ar�amba", "Per�embe", "Cuma", "Cumartesi","Pazar" };
	//7 de�er tutabilen string bir dizi tan�mlad�k
	if (gun >= 1 && gun <= 7)
		cout << gunler[gun - 1];
		//gunler dizisi 0.indisten ba�lar. Bu y�zden gun de�erinin 1 eksi�ini ald�k.
		//Dizi elemanlar�na ula�mak i�in dizi_ad�[indis de�eri] �eklinde kullan�l�r.
	else
		cout << "Ge�ersiz de�er girdiniz";
	cout << endl;
	//Kullan�c�n�n girdi�i de�ere g�re g�n bilgisini getirelim
	//�rn. 3 girilirse �ar�amba, 12 girilirse Cuma, 20 girilirse Cumartesi
	cout << gunler[(gun % 7)-1];
	//1 eksi�ini almam�z�n sebebi dizilerin 0. indisten ba�lamas�d�r.
	

	//Girilen ay bilgisine g�re mevsimleri ekrana getiren program
	//12-1-2 K��
	//3-4-5 �lkbahar
	//6-7-8 Yaz
	//9-10-11 Sonbahar
	
	int ay;
	cout << "Ay de�erini say�sal olarak giriniz (1-12):";
	cin >> ay;
	if (ay == 12 || ay == 1 || ay == 2)
		cout << "K��";
	else if (ay >= 3 && ay <= 5)
		//else if (ay == 3 || ay == 4 || ay == 5) 
		//�eklinde de yaz�labilir
		cout << "�lkbahar";
	else if (ay >= 6 && ay <= 8)
		cout << "Yaz";
	else if (ay >= 9 && ay <= 11)
		cout << "Sonbahar";
	else
		cout << "Hatal� de�er girildi";
	*/
		
	//Girilen do�um y�l�,ay� ve bulundu�u y�l,ay bilgisine g�re ya�� hesaplayan program
	//Do�um y�l� bulundu�u y�ldan b�y�k olamaz!
	//Do�um y�l� bulundu�u y�la e�itse do�um ay� bulundu�u aydan b�y�k olamaz!
	//E�er do�um y�l� bulundu�u y�la e�itse aya g�re hesaplama yap�lacakt�r.
	//Ay sonucu negatif olmamal�.E�er ay sonucu negatif (-) ��karsa, yil sonucunu 12 ile �arp�p ay sonucunu bu de�erden ��kar�p ay sonucunu bulal�m. 
	int d_yil, b_yil, d_ayi, b_ay, yas, ay;
gityil:
	cout << "Do�um y�l�n�z� giriniz:";
	cin >> d_yil;
	cout << "Bulundu�unuz y�l� giriniz:";
	cin >> b_yil;
	//E�er do�um y�l� bulundu�u y�ldan b�y�kse, do�um y�l� ve bulundu�u y�l tekrar istenecek. Bu d�ng� d_yil b_yil dan k���k olana kadar devam edecek
	if (d_yil > b_yil)
	{
		cout << "Do�um y�l� bulundu�u y�ldan b�y�k olamaz." << endl;
		goto gityil;
	}
gitay:
	cout << "Do�um ay�n�z� giriniz:";
	cin >> d_ayi;
	cout << "Bulundu�unuz ay� giriniz:";
	cin >> b_ay;
	
	if (d_yil == b_yil && d_ayi > b_ay)
	{
		cout << "Bulundu�u ay do�um ay�ndan k���k olamaz." << endl;
		goto gitay;
	}
	yas = b_yil - d_yil;
	ay = b_ay - d_ayi;
	if (ay < 0)
	{
		yas = yas - 1; 
		ay = 12 + ay;
	}
	cout << "Ya�:" << yas << " Ay:" << ay << endl;
	yas = b_yil - d_yil;
	ay = b_ay - d_ayi;
	ay = ay + yas * 12;
	yas = ay / 12;
	ay = ay % 12;
	cout << "Ya�:" << yas << " Ay:" << ay << endl;
	//�dev:
	//Elma : 1 TL, Armut : 2 TL, Muz : 4 TL, Mandalina : 0.5 TL
	//10 Elma ve �zeri %10 indirim
	//5 Armut ve �zeri %5 indirim
	//20 Muz ve �zeri %30 indirim
	//100 Mandalina ve �zeri %28 indirim
	//Elma ve Armut toplam� 15 ise 3 mandalina hediye 

} 
