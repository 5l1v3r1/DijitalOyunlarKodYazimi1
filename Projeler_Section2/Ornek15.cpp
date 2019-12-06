#include "pch.h"
#include <iostream>
#include <locale.h>
#include <random>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");
	int matris[4][4] = { 56,23,678,23,234,21,78,26,654,33,21,67,189,35,21,89 };
	int min, satir, sutun;

	//Matristeki en k���k eleman� bulal�m
	//int matris[4][4] = { 10,23,678,23,234,21,78,26,654,33,21,67,189,35,21,89 };
	//�lk de�er en k���k de�er olsayd� ihtimalini test etmek i�in bu tan�mlamay� yapt�k
	min = matris[0][0];
	for (satir = 0; satir < 4; satir++)
	{
		for (sutun = 0; sutun < 4; sutun++)
		{
			if (min > matris[satir][sutun])
				min = matris[satir][sutun];
		}
	}
	cout << "Min:" << min << endl;

	//1.��z�m: Matristeki 2. en k���k de�eri bulal�m
	int min_2=INT_MAX;
	//min_2 de�i�kenine integer de�i�keninin maksimum alabilece�i de�eri atad�k. 
	//��erisinde 2147483647 de�erini tutar.
	//cout << min_2 << endl;
	for (satir = 0; satir < 4; satir++)
	{
		for (sutun = 0; sutun < 4; sutun++)
		{
			if (min_2 > matris[satir][sutun] && min != matris[satir][sutun])
				min_2 = matris[satir][sutun];
		}
	}
	cout << "2.Min:" << min_2 << endl;

	//2.��z�m: Matristeki 2. en k���k de�eri bulal�m
	int min1, min2;
	min1 = matris[0][0];
	min2 = matris[0][1];
	for (satir = 0; satir < 4; satir++){
		for (sutun = 0; sutun < 4; sutun++){
			if (min1 > matris[satir][sutun]){
				min2 = min1;
				min1 = matris[satir][sutun];
			}
			else if (min2 > matris[satir][sutun] && min1 != matris[satir][sutun]){
				//min1 != matris[satir][sutun] bu kontrol min1 ile min2'nin e�it bir de�er olmamas�n� sa�lad�.
				//min2 min1'den daha b�y�k en k���k de�eri tutmu� oldu. 
				//Bu kontrol� yapmasayd�k bu de�erler sonucunda min1 ve min2 21 ��kard�.
				min2 = matris[satir][sutun];
			}	
		}
	}
	cout << "1.En K���k De�er:" << min1 << endl;
	cout << "2.En k���k De�er:" << min2 << endl;

	//matris i�erisine 20 ile 670 aras�nda rastgele de�erler atay�p bu de�erleri ekrana yazd�ral�m
	srand(time(NULL));
	int i, j, rastgele[4][4];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			rastgele[i][j] = rand() % 651 + 20;
			rastgele[0][2] = 700;
			rastgele[0][3] = 700;
			rastgele[1][0] = 700;
			cout << rastgele[i][j] << "\t";
		}
		cout << endl;
	}

	//4*4'l�k matriste yer alan sat�rlardaki ve s�tunlardaki de�erlerden en b�y�k ve en k���k de�erleri ekrana yazd�ral�m
	int satir_min[4], satir_mak[4], sutun_min[4], sutun_mak[4];
	for (i = 0; i < 4; i++)
	{
		satir_min[i] = rastgele[i][0];
		satir_mak[i] = rastgele[i][0];
		sutun_min[i] = rastgele[0][i];
		sutun_mak[i] = rastgele[0][i];
	}
	int ic, dis;
	for (dis = 0; dis < 4; dis++)
	{
		for (ic = 0; ic < 4; ic++)
		{
			if (satir_min[dis] > rastgele[dis][ic])
				satir_min[dis] = rastgele[dis][ic];

			if (satir_mak[dis] < rastgele[dis][ic])
				satir_mak[dis] = rastgele[dis][ic];

			if (sutun_min[dis] > rastgele[ic][dis])
				sutun_min[dis] = rastgele[ic][dis];

			if (sutun_mak[dis] < rastgele[ic][dis])
				sutun_mak[dis] = rastgele[ic][dis];
		}
	}
	for (i = 0; i < 4; i++)
	{
		cout << i+1 << ".sat�rdaki en k���k de�er:" << satir_min[i] << endl;
		cout << i+1 << ".s�tundaki en k���k de�er:" << sutun_min[i] << endl;
		cout << i+1 << ".sat�rdaki en b�y�k de�er:" << satir_mak[i] << endl;
		cout << i+1 << ".s�tundaki en b�y�k de�er:" << sutun_mak[i] << endl;
	}

	//Matrisin en b�y�k eleman�n�n bulundu�u s�tunda yer alan en k���k eleman� bulal�m
	
	int mak=rastgele[0][0],mak_sutun;
	mak_sutun = 0;
	for (satir = 0; satir < 4; satir++){
		for (sutun = 0; sutun < 4; sutun++){
			if (mak < rastgele[satir][sutun]) {
				mak = rastgele[satir][sutun];
				mak_sutun = sutun;
			}	
		}
	}
	min=mak;
	//min de�eri o s�tundaki en b�y�k de�er olan mak de�erini atad�k
	for (satir = 0; satir < 4; satir++){
		if (rastgele[satir][mak_sutun] < min)
			min = rastgele[satir][mak_sutun];
	}
	cout << "Matrisin en b�y�k de�eri:" << mak << endl;
	cout << mak_sutun + 1 << " s�tundaki en k���k de�er:" << min << endl;

	//�ki boyutlu bir diziyi tek boyutlu bir diziye atayal�m
	int dizi1[3][2] = { 1,2,3,4,5,6 }, dizi2[6], sayac = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			//dizi2[sayac] = dizi1[i][j];
			//sayac++;
			dizi2[sayac++] = dizi1[i][j];
		}
	}
	for (i = 0; i < 6; i++)
		cout << dizi2[i] << "\t";
	cout << endl;
}
