#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	//Klavyeden girilen say�n�n m�kemmel say� olup olmad���n� bulal�m.
	//M�kemmel say� = �arpanlar�n�n toplam� (1 dahil, kendisi dahil de�il) kendisine e�it olan say�lard�r.
	//6 => 1+2+3=6 M�kemmel say�d�r.
	//28 => 1+2+4+7+14=28 M�kemmel say�d�r.
	//12 => 1+2+3+4+6=16 M�kemmel say� de�ildir.
	int sayi, i, toplam=0;
	
	cout << "Say�:";
	cin >> sayi;
	for (i = 1; i <= sayi/2; i++)
		//Bir say�n�n yar�s�ndan daha b�y�k olan say�lara b�l�nmesi m�mk�n de�ildir.
		//Bu y�zden say�n�n yar�s�n� ald�k.
		if (sayi%i == 0)
			toplam += i; //toplam=toplam+i;
	if (toplam == sayi)
		cout << "M�kemmel say�d�r." << endl;
	else
		cout << "M�kemmel say� de�ildir." << endl;
	

	//Girilen 2 say� aras�ndaki m�kemmel say�lar� yazd�ral�m
	int s1, s2;
	
	cout << "2 say� girin:";
	cin >> s1 >> s2;
	//E�er ilk girilen say� daha b�y�kse de�i�kenlerin yerini de�i�tirelim
	if (s1 > s2)
		swap(s1, s2);
		//swap fonksiyonun iki de�erin i�eri�ini de�i�tirir. Yani s1 yerine s2 de�erini, s2 yerine s1 de�erini atar.
	for (sayi = s1; sayi <= s2; sayi++)
	{
		toplam = 0;
		//toplam de�eri her say� i�in s�f�rlan�r
		for (i = 1; i <= sayi / 2; i++)
			if (sayi%i == 0)
				toplam += i;
		//M�kemmel say� ise ekrana yazd�ral�m
		if (sayi == toplam)
			cout << sayi << endl;
		
	}

	
	//Kullan�c�n�n girdi�i de�er kadar fibonacci serisi say�lar�n� ekrana yazd�ral�m
	//Kullan�c�n�n girdi�i de�er en az 2 olmal�d�r. 2'den daha k���k bir de�er girerse; 2'den b�y�k ya da 2'e�it bir de�er girene kadar kullan�c�dan de�er isteyelim.
	//�rn: Kullan�c� 5 girerse; 0 1 1 2 3  
	//�rn: Kullan�c� 11 girerse; 0 1 1 2 3 5 8 13 21 34 55

	int a=0, b=1, c;
	
	for (;;)
		//Sonsuz d�ng� ba�lad�
	{
		cout << "Say�:";
		cin >> sayi;
		if (sayi >= 2)
			//E�er say� 2'den b�y�k veya 2'ye e�itse d�ng�y� k�r
			break;
			//break d�ng�y� k�rar
	}
	cout << a << " " << b << " ";
	for (i = 1; i <= sayi - 2; i++)
	{
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}
	

	//continue : Kendisinden sonra gelen sat�rlar� �al��t�rmadan d�ng�n�n ba��na gitmeyi sa�lar
	//0 ile 50 aras�ndaki tek say�lar� ekrana yazd�ral�m
	for (i = 0; i <= 50; i++)
	{
		if (i % 2 == 0)
			//�art do�ru oldu�u takdirde continue ifadesi �al���r ve d�ng�n�n ba��na giderek d�ng�n�n devam etmesini sa�lar
			//Yani kendinden sonraki sat�r/sat�rlar �al��maz
			continue;
		cout << i << " ";
	}
	cout << endl;
	//Kullan�c�n�n girdi�i 2 de�er aras�ndaki say�lardan 2 veya 3 say�s�na tam b�l�nen say�lar�n toplam�n� ekrana yazd�ral�m 
	cout << "2 de�er giriniz:";
	cin >> s1 >> s2;
	if (s1 > s2)
		swap(s1, s2);
	for (sayi = s1; sayi <= s2; sayi++)
	{
		if (sayi%2!=0 && sayi%3!=0)
			continue;
		cout << sayi << " ";
	}
}
