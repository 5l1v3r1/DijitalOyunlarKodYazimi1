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
	
	cout << "Bir say� girin:";
	cin >> sayi;
	for (i = 1; i <= sayi/2; i++)
	//Bir say� yar�s�ndan daha b�y�k say�lara tam b�l�nemez
	//Bu y�zden d�ng�y� say�n�n yar�s�na kadar s�rd�rd�k
		if (sayi%i == 0)
			toplam += i; //toplam=toplam+i;
	if (toplam == sayi)
		cout << "M�kemmel say�d�r." << endl;
	else
		cout << "M�kemmel say� de�ildir." << endl;
	
	//Girilen 2 say� aras�ndaki m�kemmel say�lar� yazd�ral�m
	//int sayi, i, toplam=0;
	int s1, s2;
	
	cout << "2 say� giriniz:";
	cin >> s1 >> s2;
	//E�er ilk say� b�y�k ise yer de�i�tirme algoritmas� kullanal�m
	if (s1 > s2)
		swap(s1, s2);
	//swap yer de�i�tirme fonksiyonudur.
	//cout << s1 << " " << s2;
	
	for (sayi = s1; sayi <= s2; sayi++)
	{
		toplam = 0;
		//Her say� de�i�ti�inde toplam de�erini s�f�rlad�k.
		for (i = 1; i <= sayi / 2; i++)
			if (sayi%i == 0)
				toplam += i;
		if (toplam == sayi)
			cout << sayi << " ";
	}
	cout << endl;
	//Kullan�c�n�n girdi�i de�er kadar fibonacci serisi say�lar�n� ekrana yazd�ral�m
	//Kullan�c�n�n girdi�i de�er en az 2 olmal�d�r. 2'den daha k���k bir de�er girerse; 2'den b�y�k ya da 2'e�it bir de�er girene kadar kullan�c�dan de�er isteyelim.
	//�rn: Kullan�c� 5 girerse; 0 1 1 2 3  
	//�rn: Kullan�c� 11 girerse; 0 1 1 2 3 5 8 13 21 34 55
	
	int a = 0, b = 1, c;
	
	//for sonsuz d�ng� ile yapal�m:
	for (;;)
	{
		cout << "Say�:";
		cin >> sayi;
		if (sayi >= 2)
			//E�er say� 2'den b�y�k veya 2'ye e�it ise d�ng� break ifadesi ile k�r�l�r
			break;
	}
	cout << a << " " << b << " ";
	for (i = 1; i <= sayi - 2; i++)
	//D�ng�n�n sayi-2'ye kadar gitmesinin sebebi ilk 2 say�y� yazd�rm�� olmam�zd�r.
	{
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;

	}
	cout << endl;
	//continue : Kendisinden sonra gelen sat�rlar� �al��t�rmadan d�ng�n�n ba��na gitmeyi sa�lar
	//0 ile 50 aras�ndaki tek say�lar� ekrana yazd�ral�m
	cout << "0-50 aras�ndaki tek say�lar:" << endl;
	for (i = 0; i <= 50; i++)
	{
		if (i % 2 == 0)
			continue;
		cout << i << " ";
	}
	cout << endl;
	//Kullan�c�n�n girdi�i 2 de�er aras�ndaki say�lardan 2 veya 3 say�s�na tam b�l�nen say�lar�n toplam�n� ekrana yazd�ral�m 
	toplam = 0;
	cout << "�ki say� girin:";
	cin >> s1 >> s2;
	if (s1 > s2)
		swap(s1, s2);
	for (i = s1; i <= s2; i++)
	{
		if (i % 2 != 0 && i % 3 != 0)
			continue;
		cout << i << " ";
		toplam += i;
	}
	cout << "Toplam=" << toplam;

}

