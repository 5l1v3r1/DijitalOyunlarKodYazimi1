#include "pch.h"
#include <iostream>
#include <locale.h>
//setlocale fonksiyonundaki LC_ALL ifadesinin tan�mlanmas� i�in
//bu k�t�phaneyi projemize dahil ettik.

/*
Bu bir a��klama blo�udur.
*/

//Bu bir a��klama sat�r�d�r.
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	//Projemizde T�rk�e karakterleri ��kt� alabilmemiz i�in
	//projeye dahil ettik.

	printf("Hello world!\n");
	// "\n" ifadesi ile imle� alt sat�ra konumlan�r.

	//std::cout << "Hello world!";
	//using namespace std; kod sat�r� ile std isim
	//uzay�n� projemize dahil ettik. Art�k std::
	//yazmam�za gerek yoktur.

	cout << "Hello world\n";
	cout << "Welcome" << endl;
	//endl (endline) imleci bir alt sat�r�n ba��na konumland�r�r.
	//yeni sat�ra ge�meyi sa�lar.
	
	
	int sayi;
	sayi = 1;

	//int sayi=1;
	//ilk de�er atamas�

	printf("%d\n",sayi);

	cout << sayi << endl;

	cout << "Bir say� giriniz:";
	cin >> sayi;
	cout << "Girilen sayi:" << sayi << endl;

	//Girilen say�n�n karesini ekrana yazd�ral�m.
	cout << "Say�n�n karesi:" <<  sayi * sayi << endl;
	
	int kare = sayi * sayi;
	cout << "Say�n�n karesi:" << kare << endl;

	sayi = sayi * sayi;
	cout << "Say�n�n karesi:" << sayi << endl;
	//Bu i�lemden sonra sayi de�erinin i�inde karesi saklan�r.
	
	cout << "Merhaba\t" << sayi << "\n";

	cout << "Ad\tSoyad\tB�l�m\n";
	cout << "G�zde\tAlt�nsoy\tBilgisayar M�hendisli�i\n";
	// "\t" ifadesi 8 karakter yer ay�r�r. Tab bo�lu�u anlam�na gelir.
	
	cout << "Bilgisayar M�hendisli�i\t\tDeneme\n";
	cout << "Bilgisayar M�hendisli�i\tDeneme";




}

