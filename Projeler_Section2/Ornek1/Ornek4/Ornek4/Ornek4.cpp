
#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	//Klavyeden girilen kelimenin karakter say�s�n� ekrana yazd�ral�m
	//Karakter say�s� 5'den k���kse karesini hesaplayal�m.
	//Karakter say�s� 5'den b�y�kse karek�k�n� hesaplayal�m.
	//Karekter say�s� 5'e e�itse kelimeyi 5 kere ekrana yazd�ral�m.
	string kelime;
	int uzunluk,i;
	cout << "Kelime:";
	cin >> kelime;
	uzunluk = kelime.length();
	cout << uzunluk << endl;
	if (uzunluk < 5)
		cout << uzunluk << " karesi=" << pow(uzunluk, 2) << endl;
	else if (uzunluk > 5)
		cout << uzunluk << " karek�k�=" << sqrt(uzunluk) << endl;
	else
	{
		for (i = 1; i <= 5; i = i + 1)
		{
			cout << kelime << endl;
			cout << i << endl;
		}
		cout << "else �al��t�. d�ng� bitti i=" << i << endl;
		//i d�ng�n�n i�inde tan�mlansayd�, d�ng� bittikten
		//sonra kullanmaya devam edemeyecektik.
		//i kapsam� : main i�erisinde kullan�labilir.
	}	
	cout << "�artl� yap�m�z sona erdi" << endl;		
	//cout << sqrt(25); //25 say�s�n�n karek�k� hesapland� 
	//cout << pow(25, 1 / 2); //25 say�s�n�n karek�k� hesapland�
	


	//0-100 aras� girilen s�nav notunu harf notuna �eviriniz
	//E�er say� 0 ile 100 aras�nda de�ilse kullan�c�dan
	//tekrar not istenecek
	/*
	//Bu notlar ger�e�i yans�tmamaktad�r. :)
	80-100 AA
	60-79 BB
	50-59 CC
	40-49 DD
	0-39 FF
	*/
	int puan;
	git:cout << "Not giriniz...:";
	cin >> puan;
	if (puan < 0 || puan>100)
	{
		cout << "Ge�ersiz bir not girdiniz. Tekrar giriniz." << endl;
		goto git;
	}
	else if (puan >= 80)
		cout << "Harf notu=AA";
	else if (puan >= 60)
		cout << "Harf notu=BB";
	else if (puan >= 50)
		cout << "Harf notu=CC";
	else if (puan >= 40)
		cout << "Harf notu=DD";
	else
		cout << "Harf notu=FF";
}

