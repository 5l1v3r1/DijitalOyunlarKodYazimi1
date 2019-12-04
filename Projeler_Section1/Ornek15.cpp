#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
#include <random>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	srand(time(NULL)); //random fonksiyonunun farkl� de�erler �retmesini sa�lad�k
	int matris[4][4] = { 56,23,678,231,234,21,78,26,654,33,32,67,189,35,56,21 }, min, satir , sutun;
	//matris dizisinin i�indeki en k���k eleman� bulunuz.
	min = matris[0][0];
	for (satir = 0; satir < 4; satir++){
		for (sutun = 0; sutun < 4; sutun++){
			if (matris[satir][sutun] < min)
				min = matris[satir][sutun];
		}
	}
	cout << "En k���k de�er:" << min << endl;
	

	//matris dizisinin i�indeki en k���k 2. eleman� bulunuz.

	//matris i�erisine 20 ile 670 aras�nda rastgele de�erler atay�p bu de�erleri ekrana yazd�r�yoruz
	for (satir = 0; satir < 4; satir++)
		for (sutun = 0; sutun < 4; sutun++){
			matris[satir][sutun] = rand() % 660 + 20;
			//20 ile 679 aras�nda de�erleri aras�nda olacak. Son de�er: 660+20-1=679
			cout << matris[satir][sutun] << "\t";
			if (sutun == 3)
				cout << endl;
		}
	int min1, min2;
	//min1 en k���k de�eri, min2 2.en k���k de�eri tutuyor
	min1 = matris[0][0];
	min2 = matris[0][1];
	for (satir = 0; satir < 4; satir++) {
		for (sutun = 0; sutun < 4; sutun++) {
			if (matris[satir][sutun] < min1)
			{
				min2 = min1; 
				//min1 eski de�eri min2'nin yeni tuttu�u de�er olacak
				min1 = matris[satir][sutun];
			}
			else if (matris[satir][sutun] < min2 && matris[satir][sutun]!=min1)
			//&& matris[satir][sutun]!=min1 bu ifade min1 ve min2 de�erlerinin farkl� de�er tutmas�n� sa�lad�. �r. matris i�erisinde en k���k de�erden  birden fazla varsa min2 de�eri o de�ere e�it olmayacak
			{
				min2 = matris[satir][sutun];
			}
			
		}
	}
	cout << "En k���k 1. de�er:" << min1 << endl;
	cout << "En k���k 2. de�er:" << min2 << endl;
	
	
	//4*4'l�k matriste yer alan sat�rlardaki ve s�tunlardaki de�erlerden en b�y�k ve en k���k de�erleri ekrana yazd�ral�m
	int buyuk_satir[4], kucuk_satir[4], buyuk_sutun[4], kucuk_sutun[4];
	//Sat�rlar i�in ilk de�er atamas�
	cout << "�lk de�er atamas� yap�l�yor..\n";

	cout << "Sat�rdaki ilk de�er atamas� yap�l�yor.." << endl << endl;
	for (satir = 0; satir < 4; satir++)
	{
		buyuk_satir[satir] = matris[satir][0];
		kucuk_satir[satir] = matris[satir][0];
		cout << buyuk_satir[satir] << "\t" << kucuk_satir[satir] << endl;
	}
	//S�tunlar i�in ilk de�er atamas�
	cout << "S�tundaki ilk de�er atamas� yap�l�yor.." << endl << endl;
	for (sutun = 0; sutun < 4; sutun++)
	{
		buyuk_sutun[sutun] = matris[0][sutun];
		kucuk_sutun[sutun] = matris[0][sutun];
		cout << buyuk_sutun[sutun] << "\t" << kucuk_sutun[sutun] << endl;

	}
	//Kar��la�t�rma i�lemi burada yap�lacak...
	for (satir = 0; satir < 4; satir++)
	{
		for (sutun = 0; sutun < 4; sutun++)
		{
			
		}
	}
	//Bir sonraki derste bu soruya devam edece�iz..

} 