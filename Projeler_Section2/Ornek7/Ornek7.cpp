#include "pch.h"
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	//Klavyeden girilen 5 adet say�n�n toplam�n� ve ortalamas�n� ekrana yazd�r�n�z.
	
	int i, sayi, toplam=0;
	
	for (i = 1; i <= 5; i++)
	{
		cout << i << ".say�:";
		cin >> sayi;
		toplam = toplam + sayi; //toplam += sayi;
	}
	cout << "Toplam:" << toplam << endl;
	cout << "Ortalama:" << float(toplam) / 5 << endl;
	
	//Veri t�r�n� farkl� bir veri t�r�ne d�n��t�rmek i�in veri_tipi(degisken_adi) yap�s� kullan�l�r.
	//Bu �rnekte sonucun ondal�kl� (reel)say� olmas� i�in b�l�nen de�eri float veri t�r�ne d�n��t�rd�k. int/int sonucu int de�er ��kar. float veya double/int sonucu float veya double ��kar.
	//Klavyeden girilen iki de�erin b�l�m�n� bulup ekrana yazd�ral�m
	int bolunen, bolen;
	
	float bolum;
	cout << "B�l�nen say�:";
	cin >> bolunen;
	cout << "B�len say�:";
	cin >> bolen;
	bolum = float(bolunen) / bolen;
	cout << bolunen << "/" << bolen << "=" << bolum << endl;
	 	 

	//Girilen 5 say�dan en b�y�k ve en k���k say�lar� ekrana yazd�ral�m
	int s,min,mak;
	
	for (i = 1; i <= 5; i++)
	{
		cout << i << ".say�:";
		cin >> s;
		if (i == 1)
		{
			//Klavyeden girilen ilk de�eri mak ve min de�erlerine e�itledik
			min = s;
			mak = s;
		}
		else
		{
			if (min > s)
				min = s;
			if (mak < s)
				mak = s;
		}
	}
	cout << "Min:" << min << endl << "Mak:" << mak << endl;
	

	//0 say�s� girilene kadar girilen de�erlerin �arp�m�n� hesaplat�p ekrana yazd�ral�m. 0 say�s� �arp�m sonucunu etkilemesin.
	//Bu soruda en mant�kl� yap� do while yap�s�d�r. Ama biz for ile ��zmeye �al���yoruz.
	//int sayi;
	
	int carpim = 1;
	//�arpmada etkisiz eleman 1 oldu�u i�in �arp�mlar�n sonucunu tutacak olan de�i�kene 1 atad�k
	cout << "O say�s� girilene kadar girilen de�erlerin �arp�m�n� veren program" << endl;
	for (;;)
	{
		//Bu d�ng� sonsuz d�ng�d�r.
		//Bu d�ng�y� break ile k�rmal�y�z
		cout << "Say�:";
		cin >> sayi;
		if (sayi == 0)
			break;
		carpim = carpim * sayi; //carpim *= sayi;
		cout << "�arp�m:" << carpim << endl;
	}
	cout << "�arp�m:" << carpim << endl;
	

	//Girilen say�n�n b�lenlerini ve b�lenlerinin say�s�n� ekrana yazd�ral�m
	//�r:20 girilirse -> 1 2 4 5 10 20 B�len say�s�:6
	//�r:3 girilirse -> 1 3 B�len say�s�: 2
	//�r:4 girilirse -> 1 2 4 B�len say�s�: 3
	
	//int sayi;
	int miktar = 0;
	cout << "Girilen say�n�n b�lenlerini ve b�lenlerinin say�s�n� hesaplayan program" << endl;
	cout << "Say�:";
	cin >> sayi;
	for (i = 1; i <= sayi; i++)
		if (sayi%i == 0)
		{
			cout << i << endl;
			miktar += 1; //miktar++; //++miktar; 
						 //miktar=miktar+1;
		}
	cout << "B�len say�s�:" << miktar << endl;
	
	//Girilen say�lar�n ebob, ekok de�erlerini bulal�m

	//ebob:
	//Girilen say�lardan k���k olan say�y� bulup o say�ya kadar gitmeliyiz
	//�r: 10 20 girilirse; ebob: 10
	//�r: 5 3 girilirse; ebob: 1
	//�r: 9 15 girilirse; ebob: 3
	
	int s1, s2, ebob;
	cout << "Girilen 2 say�n�n Ebob ve Ekok de�erlerini bulan program" << endl;
	//int i;
	cout << "�ki say� giriniz:";
	cin >> s1 >> s2;

	/*
	//ebob - 1.��z�m:
	
	if (s1 < s2)
	{
		for (i = s1; i >= 1; i--)
		{
			//�ki say� ayn� anda i de�erine b�l�n�yorsa ebob bu say�d�r ve b�l�nd��� anda d�ng� k�r�lmal�d�r
			//1'den ba�lat�p s1'e kadar giden bir for d�ng�s� yazsayd�k, o zaman d�ng�y� break ile k�rmay�p en b�y�k b�leni bulmaya �al��acakt�k.
			if (s1%i == 0 && s2%i == 0)
			{
				ebob = i;
				break;
			}
		}
	}
	else
	//s2 s1'den k���kse veya e�itse else �al���r
	{
		for (i = s2; i >= 1; i--)
		{
			if (s1%i == 0 && s2%i == 0)
			{
				ebob = i;
				break;
			}
		}
	}
	cout << "Ebob:" << ebob << endl;
	*/

	//Ebob - Yer de�i�tirme algoritmas� ile ��z�m�
	//Ama� : s1 de�erinde k���k olan de�eri tutup, for d�ng�s�nde s1 de�erini kullanmak
	int bos;
	if (s1 > s2)
	{
		bos = s1;
		//s1 de�erini ge�ici olarak bos de�i�keninde tuttuk
		s1 = s2;
		s2 = bos;
		//s1 ve s2'nin yerini de�i�tirdik
	}
	for (i = s1; i >= 1; i--)
		if (s1%i == 0 && s2%i == 0)
		{
			ebob = i;
			break;
		}
	cout << "Ebob:" << ebob << endl;
	
	//Ekok:
	int ekok;
	ekok = s1 * s2 / ebob;
	cout << "Ekok:" << ekok << endl;


	//Ekrana a�a��daki ��kt�y� yazd�rmaya �al��al�m

	/*
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20
	
	*/

	for (i = 1; i <= 20; i++)
	{
		cout << i << " ";
		if (i % 5 == 0)
			cout << endl;
	}

	//Ekrana a�a��daki ��kt�y� yazd�rmaya �al��al�m
	//7 sat�rda yan yana 5 y�ld�z 
	/*

	*****
	*****
	*****
	*****
	*****
	*****
	*****
	
	*/
	cout << "1.�rnek:" << endl;
	int j;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 5; j++)
			cout << "*";
			//�nce i�teki d�ng� tamamlan�r, sonra d��taki d�ng�ye ge�er
		cout << endl;
	}
		

	//Ekrana a�a��daki ��kt�y� yazd�rmaya �al��al�m
	//6 sat�r boyunca her sat�rda artan y�ld�zlar 
	/*
	
	*
	**
	***
	****
	*****
	******

	*/
	cout << "2.�rnek:" << endl;
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}



	//Ekrana a�a��daki ��kt�y� yazd�rmaya �al��al�m
	
	/*

	1
	12
	123
	1234
	12345
	123456
	1234567
	12345678
	
	*/
	cout << "3.�rnek:" << endl;
	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= i; j++)
			cout << j;
		cout << endl;
	}


	//Ekrana a�a��daki ��kt�y� yazd�rmaya �al��al�m
	
	/*
	
	1
	22
	333
	4444
	55555
	666666
	7777777
	88888888
	999999999
	10101010101010101010
	
	*/
	cout << "4.�rnek:" << endl;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}

	//Ekrana a�a��daki ��kt�y� yazd�rmaya �al��al�m

	/*
	
	666666
	55555
	4444
	333
	22
	1
	
	*/
	cout << "5.�rnek:" << endl;
	for (i = 6; i >=1; i--)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}
	//cout << "i=" << i << " j=" << j << endl;

	//Ekrana a�a��daki ��kt�y� yazd�rmaya �al��al�m

	/*

	1
	22
	333
	4444
	55555
	666666
	666666
	55555
	4444
	333
	22
	1
	
	*/

	cout << "6.�rnek:" << endl;
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}
	for (i = 6; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}

	//Ekrana a�a��daki ��kt�y� yazd�rmaya �al��al�m

	/*

	
	666666
	55555
	4444
	333
	22
	1
	1
	22
	333
	4444
	55555
	666666

	*/


	cout << "7.�rnek:" << endl;
	for (i = 6; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}

	//Ekrana a�a��daki ��kt�y� yazd�rmaya �al��al�m
	/*

	1 1
	2 22
	3 333
	4 4444
	5 55555
	6 666666


	*/
	cout << "8.�rnek:" << endl;
	for (i = 1; i <= 6; i++)
	{
		cout << i << " ";
		for (j = 1; j <= i; j++)
			cout << i;
		cout << endl;

	}

	//Ekrana a�a��daki ��kt�y� yazd�rmaya �al��al�m
	/*
	
	1 1
	2 12
	3 123
	4 1234
	5 12345
	
	*/
	cout << "9.�rnek:" << endl;
	for (i = 1; i <= 5; i++)
	{
		cout << i << " ";
		for (j = 1; j <= i; j++)
			cout << j;
		cout << endl;

	}


	
	//Ekrana a�a��daki ��kt�y� yazd�rmaya �al��al�m
	//Girilen say�ya kadar bu i�lemi ge�ekle�tirecek.
	//�rne�in 8 girildi�inde a�a��daki ��kt�y� verecek.

	/*

	12345678
	1234567
	123456
	12345
	1234
	123
	12
	1
	*/

	cout << "10.�rnek:" << endl;
	//int sayi, i, j;
	
	cout << "Say�:";
	cin >> sayi;
	for (i = sayi; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			cout << j;
		cout << endl;
	}
	

	//Ekrana a�a��daki ��kt�y� yazd�rmaya �al��al�m
	/*

	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	16 17 18 19 20 21

	*/
	cout << "11.�rnek:" << endl;
	int sayac = 1;
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
			cout << sayac++ << " ";
		cout << endl;
	}

	//Kullan�c�n�n girdi�i de�ere g�re a�a��daki ��kt�y� yazd�rmaya �al��al�m
	//�r: 6 girilirse a�a��daki gibi 6 sat�rl�k ��kt� olacak
	/*

	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	16 17 18 19 20 21

	*/
	
	cout << "12.�rnek:" << endl;
	cout << "Say�:";
	cin >> sayi;
	sayac = 1;
	for (i = 1; i <= sayi; i++)
	{
		for (j = 1; j <= i; j++)
			cout << sayac++ << " ";
		cout << endl;
	}

	//Kullan�c�n�n girdi�i de�ere g�re a�a��daki ��kt�y� yazd�rmaya �al��al�m
	//�r: 19 girilirse a�a��daki gibi ��kt� olacak
	/*

	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	16 17 18 19

	*/
	
	cout << "13.�rnek:" << endl;
	cout << "Say�:";
	cin >> sayi;
	sayac = 1;
	for (i = 1; ; i++)
	//sonsuz d�ng�
	{
		for (j = 1; j <= i; j++)
		{
			cout << sayac << " ";
			if (sayac == sayi)
				break;
			sayac++;
		}
		cout << endl;
		if (sayac >= sayi)
			break;
		
	}


	//Girilen say�n�n asal olup olmad���n� bulal�m
	//Asal say�: 1 ve kendisinden ba�ka b�leni olmayan say�lard�r.
	//1 ve negatif say�lar asal say� de�illerdir
	//2 ile kendisine kadar olan say�lara tam b�l�n�yorsa asal de�ildir.
	
	bool asal = true;
	//say�n�n asal oldu�unu kabul edelim
	cout << "Say�:";
	cin >> sayi;
	if (sayi <= 1)
		asal = false; //say� asal de�ildir
	else
		for (i = 2; i <= int(sayi/2); i++)
		//Bir say� yar�s�ndan daha b�y�k say�ya b�l�nemez. Bu y�zden bu say�n�n yar�s�ndan daha b�y�k olan say�lara b�l�n�p b�l�nemedi�ine bakmam�za gerek yok
			if (sayi%i == 0)
			{
				asal = false;
				//say� asal de�ildir
				break;
				//B�l�nebiliyorsa di�er say�lara bakmaya gerek yoktur
				//Asal olmad���n� ispat ettik
			}
	if (asal) //asal true ise �al���r (bool de�er oldu�u i�in)
		cout << "Asald�r" << endl;
	else //asal false ise �al���r (bool de�er oldu�u i�in)
		cout << "Asal de�ildir" << endl;

	//Fonksiyonlar konusu i�lendikten sonra bir say�n�n asal b�lenlerini fonksiyon tan�mlayarak ��zece�iz.

	//�dev:
	//A�a��daki 2 problemin algoritmas�n�, ak�� diyagram�n� ve kodlar�n� yaz�n�z.
	//Problem-1:�ki say� aras�ndaki asal say�lar� ekrana yazd�ral�m
	//Problem-2:Bir say�n�n asal b�lenlerini bulal�m (��i�e for ile) 



	

}

