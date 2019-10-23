#include <iostream>
#include <locale.h>
using namespace std;
int main() {
  setlocale(LC_ALL, "Turkish");
  //Klavyeden girilen 5 adet say�n�n toplam�n� ve ortalamas�n� ekrana yazd�r�n�z.
  int i,sayi;
  
  int toplam=0;
  for (i=1;i<=5;i++) //i=i+1 //i+=1 //++i
  {
    cout << i << ".say�:";
    cin >> sayi;
    toplam=toplam+sayi; //toplam+=sayi;
    cout << "Toplam:" << toplam << endl;
  }
  cout << "Ortalama:" << float(toplam)/5
 << endl;
  //Veri t�r�n� farkl� bir veri t�r�ne d�n��t�rmek i�in veri_tipi(degisken_adi) yap�s� kullan�l�r.
  //Bu �rnekte sonucun ondal�kl� (reel)say� olmas� i�in b�l�nen de�eri float veri t�r�ne d�n��t�rd�k. int/int sonucu int de�er ��kar. float veya double/int sonucu float veya double ��kar.
 
  //Klavyeden girilen iki de�erin b�l�m�n� bulup ekrana yazd�ral�m
  float bolunen,sonuc,bolen;
  //b�l�m sonucunun ondal�kl� say� olmas� i�in bolunen ve sonuc de�erinin mutlaka float/double de�er olmas� gerekiyor.
  //bolen de�erin ondal�kl� girilebilmesini sa�lamak istiyorsak onu da float/double tan�mlamam�z gerekiyor.
  //�rn: bolen int olursa; 5 2.5 de�erinin b�l�m sonucunu 2.5 olarak hesaplar. bolen de�erdeki .5 k�s�rat�n� atarak 2 oldu�unu varsayar.
  cout << "B�l�nen ve b�len de�erler:";
  cin >> bolunen >> bolen;
  sonuc=bolunen/bolen;
  cout << bolunen << "/" << bolen << ":" << sonuc << endl;
  
  //Girilen 5 say�dan en b�y�k ve en k���k say�lar� ekrana yazd�ral�m
  int min,mak;
  //int sayi,i;
  for (i=1;i<=5;i++)
  {
    cout << "Bir say� girin:";
    cin >> sayi;
    if (i==1)
    //ilk say� girildi�inde bu if blo�u �al���r. �lk girilen say�y� min ve mak de�erlerine e�itledik
    {
      min=sayi;
      mak=sayi;
    }
    else
    {
      //Girilen say� 2., 3., 4. ve 5. say� ise else blo�u �al���r
      if (sayi<min)
      //E�er girilen say� min de�erinden k���k bir de�er ise art�k min de�erim girilen de�er olacak
        min=sayi;
      if (sayi>mak)
      //E�er girilen say� mak de�erinden b�y�k bir de�er ise art�k mak de�erim girilen de�er olacak
        mak=sayi;
    }
  }
  cout << "Min:" << min << endl << "Mak:" << mak << endl;
  
  //0 say�s� girilene kadar girilen de�erlerin �arp�m�n� hesaplat�p ekrana yazd�ral�m. 0 say�s� �arp�m sonucunu etkilemesin.
  //Bu soruda en mant�kl� yap� do while yap�s�d�r. Ama biz for ile ��zmeye �al���yoruz.
  int carpim=1;
  for (;;)
  //Sonsuz for d�ng�s� tan�mlad�k
  {
    cout << "Say�:";
    cin >> sayi;
    if (sayi==0)
    //Girilen say� 0'a e�it oldu�unda d�ng�y� k�rd�k
      break;
      //break ifadesi d�ng�y� k�rar
    carpim*=sayi; //carpim=carpim*sayi;
    //Buras� girilen say� 0 olmad��� takdirde �al���r. Sonucun 0 ��kmamas� i�in if blo�undan sonra yaz�yoruz
  }
  cout << "�arp�m sonucu:" << carpim << endl;
  
  //Girilen say�n�n b�lenlerini ve b�lenlerinin say�s�n� ekrana yazd�ral�m
  int bolensayisi=0;
  //int sayi,i;
  cout << "Say�:";
  cin >> sayi;
  for (i=1;i<=sayi;i++)
    if (sayi%i==0)
    {
      //Tam b�l�nd���nde bu blok �al���r
      cout << i << endl;
      bolensayisi++;
    }
  cout << "B�len say�s�:" << bolensayisi << endl;
  
  //Girilen say�lar�n ebob, ekok de�erlerini bulal�m
  int sayi1,sayi2,ebob,ekok;
  //ebob:
  //Girilen say�lardan k���k olan say�y� bulup o say�ya kadar gitmeliyiz
  cout << "2 say� giriniz:";
  cin >> sayi1 >> sayi2;
  if (sayi1<sayi2)
  //yer de�i�tirme algoritmas� ile ��zebilirdik
  {  
    for (i=1;i<=sayi1;i++)
      if (sayi1%i==0 && sayi2%i==0)
        ebob=i;
  }
  else
    for (i=1;i<=sayi2;i++)
      if (sayi1%i==0 && sayi2%i==0)
        ebob=i;
  cout << "Ebob:" << ebob << endl;

  //Ebob - Yer de�i�tirme algoritmas� ile ��z�m�
  int bos;
  if (sayi1>sayi2)
  {
    bos=sayi1;
    sayi1=sayi2;
    sayi2=bos;
  }
  //sayi1 de�erinin i�inde k���k olan say�y� tutmu� olduk
  for (i=1;i<=sayi1;i++)
      if (sayi1%i==0 && sayi2%i==0)
        ebob=i;
  cout << "Ebob:" << ebob << endl;

  //Girilen say�n�n asal olup olmad���n� bulal�m

  //Fonksiyonlar konusu i�lendikten sonra bir say�n�n asal b�lenlerini bulal�m.
}