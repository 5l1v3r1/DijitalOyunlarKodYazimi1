#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
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
	int secim;
	do
	{
		system("cls");
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
			int tahmin, random, i;
			random = rand() % 101 + 0;
			cout << random << endl;
			//Son de�er=101+0-1=100
			int kontrol = 0;
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
		default:
			break;
		}
		system("pause");
	} while (secim != 6);
}
