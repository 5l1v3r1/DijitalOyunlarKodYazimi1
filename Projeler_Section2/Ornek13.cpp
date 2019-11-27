#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	int sayilar[5];
	//��inde 5 tane tam say� de�eri tutabilen sayilar dizisi tan�mland�
	sayilar[0] = 2; //0.indise 2 de�erini atad�k
	sayilar[1] = 3;
	cout << sayilar[0] << endl;
	cout << sayilar[1] << endl;
	sayilar[2] = 4;
	cout << sayilar[2] << endl;
	//�ndis de�eri 0 say�s�ndan ba�lar. Bu y�zden alabilece�i maksimum indis de�eri 4't�r.

	//Kullan�c�n�n girdi�i 5 de�eri (de�er istedi�imiz d�ng� bittikten sonra)alt alta ekrana yazd�ral�m
	//int sayilar[5];
	int i;
	for (i = 0; i <= 4; i++) //indis de�eri s�f�rdan ba�lad��� i�in d�ng�y� s�f�rdan ba�latt�k
	{
		cout << i + 1 << ". de�er:";
		cin >> sayilar[i];
	}
	cout << "T�m say�lar" << endl;
	for (i = 0; i < 5; i++)
		//Kullan�c�n�n girdi�i t�m de�erler alt alta ekrana yazd�r�l�yor
		cout << sayilar[i] << endl;

	//Kullan�c�n�n girdi�i de�erlerden sadece �ift say�lar� ekrana yazd�ral�m
	//5%2==1 tek, 4%2==0 �ift
	cout << "�ift say�lar" << endl;
	for (i = 0; i <= 4; i++)
		if (sayilar[i] % 2 == 0)
			cout << sayilar[i] << endl;
		
	//Kullan�c�n�n girdi�i de�erlerden �ift say�lar�n toplamlar�n� ve tek say�lar�n toplamlar�n� ekrana yazd�ral�m
	int ttoplam = 0, ctoplam = 0;
	for (i = 0; i <= 4; i++)
		if (sayilar[i] % 2 == 0)
			ctoplam += sayilar[i]; //ctoplam = ctoplam + sayilar[i];
		else
			ttoplam += sayilar[i];
	cout << "�iftlerin toplam�:" << ctoplam << endl;
	cout << "Teklerin toplam�:" << ttoplam << endl;

	//Klavyeden girilen 5 de�erden en b�y�k ve en k���k say�y�, pozitif ve negatif say�lar�n miktar�n� ve ortalamas�n� ekrana yazd�ral�m
	//Bu soruda ortalamay� hesaplamak i�in toplam de�erine de ihtiyac�m�z vard�r. 
	//�r : Klavyeden 2,3,-4,1,-3 girilirse;
	//��kt�: 
	//En b�y�k say�: 3 
	//En k���k say�: -4
	//Pozitif: 3 tane say� vard�r. Ortalama: 2
	//Negatif: 2 tane say� vard�r. Ortalama: -3.5
	int dizi[5], min, mak, ptoplam=0, ntoplam=0, pmiktar=0, nmiktar=0;
	for (i = 0; i <= 4; i++) 
	{
		cout << i + 1 << ". de�er:";
		cin >> dizi[i];
	}
	mak = dizi[0];
	min = dizi[0];
	for (int deger : dizi)
	{
		//cout << deger;
		if (mak < deger)
			mak = deger;
		if (min > deger)
			min = deger;
		if (deger > 0)
		{
			ptoplam += deger;
			pmiktar++;
		}
		else if (deger < 0)
		{
			ntoplam += deger;
			nmiktar++;
		}
	}
	cout << "Mak:" << mak << "\nMin:" << min << endl;
	cout << "Pozitif Miktar:" << pmiktar << "\nOrtalama:" << float(ptoplam) / pmiktar << endl;
	//Sonucun ondal�kl� ��kmas�n� istiyorsak; b�l�nen de�er float yap�lmal�d�r.
	//B�l�m sonucunun float yap�lmas� ge� bir eylemdir. Sonu� int ��kar. Sonras�nda int de�eri float yapmam�z yeterli olmaz.
	//�r : float(5/2)=2 sonucunu verir float(5)/2=2.5 sonucunu verir.
	cout << "Negatif Miktar:" << nmiktar << "\nOrtalama:" << float(ntoplam) / nmiktar << endl;


	//Boyutunu kullan�c�n�n belirleyece�i tam say� de�erleri tutan bir dizi olu�turarak bu dizinin i�ine rastgele say�lar ekleyelim
	//Random say� aral���: 1 - 10 aras�nda
	//�r: Ka� de�er tutal�m?: 4
	//Say�lar: 3 4 2 6 
	int miktar, random[50];
git:
	cout << "Ka� de�er tutal�m? :";
	cin >> miktar;
	if (miktar > 50 || miktar<1)
	{
		cout << "1 ile 50 aras�nda de�er girebilirsiniz. Tekrar deneyiniz...";
		goto git;
	}
	for (i = 0; i < miktar; i++) 
	{
		random[i] = rand() % 10 + 1;
	}

	//for (int deger : random)
	//	cout << deger << endl;
	for (i = 0; i < miktar; i++)
		cout << random[i] << endl;

	//Kullan�c�dan 2 tane de�er isteyelim. Rastgele �retilen de�erler aras�nda olup olmad���na bakal�m.
	int s1, s2;
	cout << "2 say� girin:";
	cin >> s1 >> s2;
	for (i = 0; i < miktar; i++)
	{
		if (s1 == random[i] || s2 == random[i])
			cout << "De�er aral���nda\n";
	}
	//�dev: C++ 11 ile gelen yenilikler ara�t�r�l�p word veya pdf olarak bana online.beykoz �zerinden teslim edilecek. 	

}
