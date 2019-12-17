#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
using namespace std;
char sos[3][3] = { '1','2','3','4','5','6','7','8','9' };
//public de�i�ken tan�mlamas� yapt�k. T�m fonksiyonlara sos dizisine (matrisine) eri�ebilir.
bool sonBitirici = false;

void pc();
void yazdir();
void oyuncu();
void kontrol();

int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL));
	do
	{
		pc();
		yazdir();
		kontrol();
		if (sonBitirici)
			break; 
		oyuncu();
	} while (true); //while (sonBitirici==false); //while(!sonBitirici);
	

}
void pc() {
	int satir, sutun, tercih;
	char t[2] = { 'S','O' }, s;
	tercih = rand() % 2 + 0; //0-1 aras�nda de�er �retir
	s = t[tercih];
	do {
		satir = rand() % 3 + 0; //0-2 aras�nda de�er �retir
		sutun = rand() % 3 + 0; //0-2 aras�nda de�er �retir
	} while (sos[satir][sutun]=='S' || sos[satir][sutun] == 'O'); //Ama�; o konumda S veya O de�eri varsa tekrar de�er �retmesini sa�lamak.
	sos[satir][sutun] = s;
}
void yazdir() {
	for (int i = 0; i < 3; i++)
	{
		cout << "| ";
		for (int j = 0; j < 3; j++)
		{
			cout << sos[i][j] << " | ";
		}
		cout << endl;
	}
}

void oyuncu() {
	char konum, s;
	int satir, sutun;
	bool kontrol=true;  
	do
	{
		cout << "Konum:";
		cin >> konum;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (konum == sos[i][j] && konum != 'S' && konum != 'O') {
					//Mehmet Mert G�nd�z bug'� buldu
					//konum != 'S' && konum == 'O' olmal�
					satir = i;
					sutun = j;
					kontrol = false; //bu konuma de�er girebilir
					break; //i�teki (j) d�ng�s�n� k�rar
				}
			}
			if (!kontrol) //if(kontrol==false)
				break; //d��taki (i) d�ng�s�n� k�rar
		}
	} while (kontrol);
	do
	{
		cout << "S-O:";
		cin >> s;
	} while (s!='S' && s!='O'); //S veya O de�erine e�it de�ilse tekrar de�er girsin
	sos[satir][sutun] = s;
}

void kontrol() {
	//Bu fonksiyonun amac�, S veya O yazacak bir h�crenin olmamas� durumunda oyunun bitmesini sa�lamak
	//1 ile 9 aras�ndaki de�erlerin bu matriste bulunmamas� durumunda ger�ekle�ir.
	//S veya O de�erine e�it olmayan de�erlerin say�s� 0 ise art�k hamle yapamay�z. Oyun burada sona erer
	int sayac = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (sos[i][j] != 'S' && sos[i][j] != 'O')
				//Buradaki de�er S ve O de�erlerine e�it de�ilse saya� artar
				sayac++;
		}
	}
	if (sayac == 0)
		sonBitirici = true; //oyun bitti
}

//Yap�lacaklar:
//Oyunda kazanan� belirleyece�iz.
//En son hamle yapan ki�iden sonra bir fonksiyon �a�r�r�r, yatay, dikey ve �apraz konumda SOS yaz�ld� m� kontrol edilir.

//En son kim hamle yapt� bu bilgiyi tutaca��z
//1.Y�ntem:
//Hamle say�s� belli oldu�u i�in d�ng�de bir saya� kullan�l�p her hamlede bir artt�r�larak saya� de�eri kimin hamle yapt���n� tutabilir,
//e�er tek ise pc, �ift ise kullan�c� hamle yapt� �eklinde kontrol edilebilir.
//2.Y�ntem:
//Bir bool de�er kullan�l�r. En son pc hamle yapt�ysa bu de�erde true, kullan�c� hamle yapt�ysa false de�er tutulur.
//Bu �ekilde en son hamle yapan belirlenebilir. Bu kontrol bool de�er yerine farkl� veri t�rleri ile de kontrol ettirilebilir
//Di�er-Y�ntemler:Bu kontrol i�lemi i�in bu y�ntemlerin d���nda farkl� kontrol y�ntemleri de kullan�labilir.

//Bilgisayar�n daha anlaml� kararlar vermesi sa�lanabilir (yapay zeka). 
//Bilgisayar�n 1. olarak SOS yazmaya �al��mas�, 2. olarak bizim SOS yazmam�z� engellemeye �al��acak hamleler yapmas� sa�lanabilir. 