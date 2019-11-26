#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
#include <string>
using namespace std;
int main()
{
	srand(time(NULL));
	//Program her �al��t�r�ld���nda rastgele farkl� de�erler �retmesini sa�lar

	setlocale(LC_ALL, "turkish");
	//T�rk�e karakterlerin ekranda g�r�nmesini sa�lad�k
	/*Men�
	1-Say� Tahmin Etme Oyunu
		0-100 say� aral���nda random say� �retilecek
		Ki�iye 3 tahmin hakk� verilecek
	2-Kelime Tahmin Etme Oyunu
		10 kelimemiz var. Kullan�c� rastgele gelen kelimeyi tahmin etmeye �al��acak
	3-Matematik ��lem Hesaplama Oyunu
		Random matematik sorular� gelecek
		��lemler ve say�lar rastgele olacak
		Ki�i i�lemin sonucu girecek
		3 kere yanma hakk� var
		Her do�ru bildi�ini i�lemde de puan kazanacak
	4-YAZI TURA Oyunu
		Random yaz� tura gelecek
		Ki�i tahmin etmeye �al��acak
		3 kere oynayacak
	5-Ta� Ka��t Makas Oyunu
		Bilgisayar random ta�,ka��t,makas se�ecek
		Kullan�c�n�n girdi�i de�ere g�re kazanan bulunacak
		Ta� - Makas -> Ta�
		Ka��t - Makas -> Makas
		Ta� - Ka��t -> Ka��t
	6-��k��
	*/
	int secim, tahmin, random, i, kontrol = 0;
	int sayi1, sayi2, islem, puan=0, hak=3;
	float sonuc, sonuctahmin;
	string yazitura;
	do
	{
		system("cls");
		//console ekran�n� temizler

		cout << "Men�\n";
		cout << "1-Say� Tahmin Etme Oyunu\n";
		cout << "2-Kelime Tahmin Etme Oyunu\n";
		cout << "3-Matematik ��lem Hesaplama Oyunu\n";
		cout << "4-YAZI TURA Oyunu\n";
		cout << "5-Ta� Ka��t Makas Oyunu\n";
		cout << "6-��k��\n";
		cout << "Se�iminiz:";
		cin >> secim;
		switch (secim)
		{
		case 1:
		{
			random = rand() % 101 + 0;
			cout << random << endl;
			//Son de�er=101+0-1=100 
			for (i = 1; i <= 3; i++)
			{
				cout << "Tahmininiz:";
				cin >> tahmin;
				if (random == tahmin)
				{
					cout << "Tebrikler. Bildiniz\n";
					kontrol = 1;
					break;
				}
				else
					cout << "�zg�n�m. Bilemediniz\n";
			}
			if (kontrol == 0)
				cout << "Game over\n";
		}
			break; //case 1 sonland�r�ld� 

		case 2:
		{
			random = rand() % 10 + 1;
			cout << random << endl;
			cout << "1-Kitap, 2-Kalem, 3-Defter, 4-Ka��t, 5-Kedi, 6-K�pek, 7-Ku�, 8-Bilgisayar, 9-Klavye, 10-�rdek\n";
			cout << "Tahmininiz:";
			cin >> tahmin;
			if (tahmin == random)
				cout << "Tebrikler bildiniz\n";
			else
				cout << "�zg�n�m bilemediniz\n";
		}
			break; //case 2 sonland�r�ld� 

		case 3:
		{
		git:
			sayi1 = rand() % 20 + 1;
			sayi2 = rand() % 20 + 1;
			islem = rand() % 5 + 1;
			if (islem == 1)
			{
				cout << sayi1 << "*" << sayi2 << "=";
				sonuc = sayi1 * sayi2;
			}
			else if (islem == 2)
			{
				cout << sayi1 << "/" << sayi2 << "=";
				sonuc = sayi1 / sayi2;
			}
			else if (islem == 3)
			{
				cout << sayi1 << "+" << sayi2 << "=";
				sonuc = sayi1 + sayi2;
			}
			else if (islem == 4)
			{
				cout << sayi1 << "-" << sayi2 << "=";
				sonuc = sayi1 - sayi2;
			}
			else if (islem == 5)
			{
				cout << sayi1 << "^" << sayi2 << "=";
				sonuc = pow(sayi1,sayi2);
			}
			cin >> sonuctahmin;
			if (sonuc == sonuctahmin)
			{
				cout << "Bildiniz. Puan�n�z:" << ++puan << endl;
			}
			else
			{
				cout << "Bilemediniz. Puan�n�z:" << puan << endl;
				cout << "Sonuc:" << sonuc << endl;
				cout << "Kalan hakk�n�z:" << --hak << endl;
			}
			cout << endl;
			if (hak > 0)
				goto git;
		}
		break; //case 3 sonland�r�ld� 

		case 4:
		{
			random = rand() % 2 + 1; //1 - YAZI, 2 - TURA
			cout << "Tahmininiz: YAZI / TURA :";
			cin >> yazitura;
			//1.y�ntem:
			if (random == 1 && yazitura == "YAZI")
				cout << "Tebrikler. Do�ru tahmin!\n";
			else if (random == 2 && yazitura == "TURA")
				cout << "Tebrikler. Do�ru tahmin!\n";
			else
			{
				cout << "�zg�n�m. Yanl�� tahmin!\n";
				if (random == 1)
					cout << "YAZI" << endl;
				else
					cout << "TURA" << endl;
			}
				
			//2.y�ntem: 
			/*
			if ((random == 1 && yazitura == "YAZI") || (random == 2 && yazitura == "TURA"))
				cout << "Tebrikler. Do�ru tahmin!\n";
			else
				cout << "�zg�n�m. Yanl�� tahmin!\n";
			*/
			

		}
		break; //case 4 sonland�r�ld� 

		case 5:
		{

		}
		break; //case 5 sonland�r�ld� 

		default:
			break;
		}
		system("pause");
	} while (secim != 6);
}
