#include "pch.h"
#include <iostream>

/*
Bu bir a��klama blo�udur.
*/

//Bu bir a��klama sat�r�d�r.
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	//T�rk�e karakterlerin projemize dahil edilmesini sa�lar.

	//printf kodu ile C ve C++ programlama dillerinde ekrana ��kt� verebiliriz.
	
	printf("Hello World!\n");
	// "\n" ifadesi imleci alt sat�ra konumland�r�r.

	printf("Welcome today\tG�zde");
	// "\t" ifadesi tab bo�lu�u b�rak�r. Tab 8 karakter tutar.

	printf("\nHow are you?\n");

	printf("Ad\tSoyad\tBolum\n");
	printf("Gozde\tAlt�nsoy\tBilgisayar M�hendisli�i\n");

	//std::cout << "Merhaba";
	//using namespace std; ile std isim uzay�n� projemize dahil ettik
	//E�er dahil etmeseydik her seferinde cout ifadesini yazarken 
	//std::cout �eklinde tan�mlamak zorunda kalacakt�k.

	cout << "Merhaba" << endl;
	//cout ekrana ��kt� vermemizi sa�lar.
	//endl (endline) yeni sat�ra ge�er. �mleci alt sat�ra konumland�r�r.

	int sayi;
	//integer veri t�r�yle sayi de�i�keni tan�mland�. 
	//sayi de�i�keni sadece tam say� de�erleri tutabilir.

	sayi = 10;

	//int sayi=10; //ilk de�er atamas�

	printf("%d\n", sayi);
	cout << sayi <<"\n";
	// "\n" ifadesi ile alt sat�ra ge�ebiliriz.
	//Bunun yerine endl kullanabiliriz.

	cout << "Bir say� girin:";
	cin >> sayi;
	cout << "Girilen de�er:" << sayi << endl;

	//Say�n�n karesini ekrana yazd�ral�m
	cout << "Say�n�n karesi:" << sayi*sayi;

	//Ki�inin ad�n� isteyelim. Merhaba (ad) ��kt� verelim
	



}

