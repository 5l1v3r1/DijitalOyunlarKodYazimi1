#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	//��kt�da T�rk�e karakterlerin g�r�nmesini sa�lar.
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
	4-Yaz� Tura Oyunu
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
	int secim,random,tahmin,i;
	srand(time(NULL));
	
	do
	{
		system("cls");
		cout << "Men�\n";
		cout << "1-Say� Tahmin Etme Oyunu\n";
		cout << "2-Kelime Tahmin Etme Oyunu\n";
		cout << "3-Matematik ��lem Hesaplama Oyunu\n";
		cout << "4-Yaz� Tura Oyunu\n";
		cout << "5-Ta� Ka��t Makas Oyunu\n";
		cout << "6-��k��\nSe�iminiz:\n";
		cin >> secim;
		switch (secim)
		{
		case 1:
		{
			random = rand() % 101 + 0;
			//0 ile 100 aras�nda rastgele de�er �retir
			//Son de�er = 101+0-1=100
			for (i = 1; i <= 3; i++)
			{
				//cout << random << endl;
				cout << "Tahmin Etti�iniz Say�:";
				cin >> tahmin;
				if (tahmin == random)
				{
					cout << "Tebrikler bildiniz\n";
					break;
				}
				else
					cout << "�zg�n�m bilemediniz\n";
			}
		}
			break; //case 1 break ile sonland�r�ld�
		case 2:
		{
			random = rand() % 10 + 1;
			//cout << random << endl;
			cout << "1-Kitap,2-Kalem,3-Defter,4-U�ak,5-Okul,6-S�n�f,7-Ku�,8-Kedi,9-K�pek,10-Bal�k\nTahmininiz:";
			cin >> tahmin;
			if (random == tahmin)
				cout << "Tebrikler bildiniz\n";
			else
				cout << "�zg�n�m bilemediniz\n";
		}	
			break; //case 2 sonland�r�ld�
		case 3:
		{
			int puan = 0, sayi1, sayi2, islem, hak = 3;
			double sonuc, tahmin;
		git:
			sayi1 = rand() % 20 + 1;
			sayi2 = rand() % 20 + 1;
			islem= rand() % 5 + 1;
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
			cin >> tahmin;
			if (sonuc == tahmin)
			{
				cout << "Bildiniz. Puan�n�z:" << ++puan;
			}
			else
			{
				cout << "Bilemeniz. Puan�n�z:" << puan;
				cout << "\nKalan Hakk�n�z:" << --hak;
			}
			cout << endl;
			if (hak > 0)
				goto git;
		}
			break;
		case 4:
		{
			string yazitura;
			random = rand() % 2 + 1; //1-Yaz� 2-Tura
			cout << random << endl;
			cout << "YAZI / TURA Tahmininiz:";
			cin >> yazitura;
			if (yazitura == "YAZI" && random == 1)
				cout << "Bildiniz\n";
			else if (yazitura == "TURA" && random == 2)
				cout << "Bildiniz\n";
			else
				cout << "Bilemediniz\n";
		}
			break; //case 4 sonland�r�ld�
		default:
			cout << "Ge�ersiz giri�\n";
			break;
		}
	system("pause");
	} while (secim!=6);
}
