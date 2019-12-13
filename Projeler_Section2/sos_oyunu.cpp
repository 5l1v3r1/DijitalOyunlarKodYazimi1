#include "pch.h"
#include <iostream>
#include <random>
#include <time.h>
using namespace std;
void yazdir();
void pc();
void kullanici();
void kontrol();

char sos[3][3] = { '1','2','3','4','5','6','7','8','9' }; //public 2 boyutlu dizi (matris)
bool k; //public de�i�ken 

int main()
{
	srand(time(NULL));
    //Kullan�c� ve bilgisayar aras�nda oynanacak
	//Bilgisayar bo� olan noktalara rastgele S-O yerle�tirecek (random)
	//E�er daha �nce bir de�er girilmi�se bu de�erler de�i�tirilemez
	//T�m alanlar doldu�unda oyun biter
	do{
	pc();
	yazdir();
	kontrol();
	if (k)
		break;
	kullanici();	
	} while (!k); //while(k==false);

}
void yazdir() {
	for (int i = 0; i < 3; i++) {
		cout << "| ";
		for (int j = 0; j < 3; j++) {
			cout << sos[i][j] << " | ";
		}
		cout << endl << "-------------" << endl;
	}
}
void pc() {
	//Random konum
	char random[2] = { 'S','O' };
	//Random S-O
	int so = rand() % 2 + 0; //0-1 aras�nda de�er �retir
	char tercih = random[so];
	//yukardaki i�lemler yapay zeka mant���na d�n��t�r�lebilir
	int satir, sutun;
	do {
		satir = rand() % 3 + 0;
		sutun = rand() % 3 + 0; //1-9 aras�nda de�er �retir
	} while (sos[satir][sutun] == 'S' || sos[satir][sutun] == 'O');
	sos[satir][sutun] = tercih;
}
void kullanici() {
	char tercih;
	char secim;
	bool kontrol = true;
	int satir, sutun;
	do{
		cout << "Tercihiniz:";
		cin >> tercih;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++)
			{
				if (sos[i][j] == tercih) {
					satir = i;
					sutun = j;
					kontrol = false;
					break;
				}
			}
			if (kontrol == false)
				break;
		}
	} while (kontrol);
	do{
		cout << "S-O :";
		cin >> secim;
	} while (secim != 'S' && secim != 'O');
	sos[satir][sutun] = secim;
}
void kontrol() {
	//Oyun bitti mi bitmedi mi kontrol ger�ekle�tirece�iz
	k=false; //oyun bitmedi
	int sayac = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
		{
			if (sos[i][j] != 'S' && sos[i][j] != 'O') {
				sayac++;
			}
		}
	}
	if (sayac == 0) {
		k = true; //oyun bitti
	}
}

//Yap�lacaklar:
//oyunda kazanan� belirleyece�iz.
//En son kim hamle yapt� bu bilgiyi tut
//main i�erisindeki do-while d�ng�s� for d�ng�s�ne d�n��t�r�l�p (1-9 aras�nda) e�er tek ise pc, �ift ise kullan�c� hamle yapt� diye kontrol edilebilir
//En son hamle yapan ki�iden sonra bir fonksiyon �a�r�r�r, yatay, dikey ve �apraz konumda SOS yaz�ld� m� kontrol edilir.
//bilgisayar�n daha anlaml� karar vermesini sa�layaca��z (yapay zeka). 