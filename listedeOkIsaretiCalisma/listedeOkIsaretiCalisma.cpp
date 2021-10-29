
//DİZİLERDE OK İŞARETİ ÇALIŞMASI

#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <string>
#include <ctime>
#include <clocale>
#include <limits>
#include <sstream>

using namespace std;




// --- SORU 1 ---

void soruBiir() {

    setlocale(LC_ALL, "TURKISH");

    int boyut = 0;
    int min = 0, max = 9;   // rastgele döngüde RAKAMLAR kümesinde kullanılır

    cout << "Dizinin boyut değerini giriniz  (Max 100)  = " << endl;
    cin >> boyut;



    if (boyut > 100) {
        cout << "Boyutu 100 den büyük bir değer girdiğiniz için 100 seçildi" << endl;
        boyut = 100;
    }


    int dizi, dizi2[100];   // dizi ilk yazılan ARRAYi ,  dizi2 ise yazılan dizinin ELEMANLI ARRAY olarak kullanılmasını sağlar
    int a, indis = 0;


    cout << endl;
    srand(time(0));

    for (a = 0; a < boyut; a++) {   //önce bi ---> işareti ilk satırdayken yazdırıyoruz bu for döngüsünde


        dizi = 0 + rand() % (max - min + 1) + min;

        dizi2[a] = dizi;

        if (a == 0) {
            cout << "--->" << dizi2[a] << endl;

        }

        else {
            cout << "    " << dizi2[a] << endl;

        }

    }//For parantezi




    string secim;

    while (true) {


        cout << "Aşağı ilerlemek için 'A' veya 'a' tuşuna basınız" << endl;
        cout << "Yukarı ilerlemek için 'D' veya 'd' tuşuna basınız" << endl;
        cout << "Çıkmak için 'C' veya 'c' tuşuna basınız" << endl;

        cin >> secim;




        if (secim == "A" || secim == "a") {

            system("cls");//bir önceki konsol çıktısını siler 

            indis++;

            if (indis == boyut)    //   --->  işareti dizinin en alt elemanındaysa, aşağı ilerlemek istenildiğinde indis boyuta eşit olduğu için başa (0. karakter) döner
                indis = 0;


            for (a = 0; a < boyut; a++) {


                if (a == indis) {
                    cout << "--->" << dizi2[a] << endl;

                }

                else {
                    cout << "    " << dizi2[a] << endl;
                }

            }//for parantezi


        }//if parantezi (A) seçimi






        else if (secim == "D" || secim == "d") {

            system("cls");

            indis--;


            if (indis < 0)
                indis = boyut - 1;


            for (a = 0; a < boyut; a++) {


                if (a == indis) {
                    cout << "--->" << dizi2[a] << endl;
                }

                else {
                    cout << "    " << dizi2[a] << endl;
                }

            }//for parantezi



        }//else if parantezi(D) seçimi






        else if (secim == "C" || secim == "c") {

            cout << "-------İlk Programdan Çıktınız..------" << endl << endl;
            break;

        }//else if (C) seçimi




        else {

            cout << "!!!!!  A-a  ,  B-b  ,  C-c  den birisini seçiniz !!!" << endl << endl;

        }

    }// while


}//BİRİNCİ VOID



//      ----------------------- Soru 2 -----------------     




void soruiki() {



    int boyut = 0, min = 0, max = 9;  //min max rakamlar arasından rastgele seçimde kullanılacak
    int sayilar2[70][70];             //ana dizimiz
    int kucuk = 0, buyuk = 0;


    cout << "NxN lik bir dizi için Boyut değerini giriniz : " << endl;
    cin >> boyut;

    cout << "Kucuk sayıyı giriniz =   ";
    cin >> kucuk;
    cout << "Buyuk sayıyı giriniz =   ";
    cin >> buyuk;

    int a;
    srand(time(0));


    for (int b = 0; b < boyut; b++) {


        cout << endl;


        for (a = 0; a < boyut; a++) {

            sayilar2[b][a] = 0 + rand() % (max - min + 1) + min;

            cout << sayilar2[b][a] << "\t";

        }

    }//ilk for



    cout << endl << endl;


    for (int c = 0; c < boyut; c++) {



        for (int d = 0; d < boyut; d++) {    // Crypted Arraydeki karakterlere eşitleme


            if (sayilar2[c][d] >= kucuk && sayilar2[c][d] <= buyuk) {

                sayilar2[c][d] = 126;     // ~  ASCII karşılığına eşitlenir
            }


            else if (sayilar2[c][d] < kucuk) {

                sayilar2[c][d] = 42;      // *  ASCII karşılığa eşitlenir

            }

            else if (sayilar2[c][d] > buyuk) {

                sayilar2[c][d] = 45;      // -  ASCII karşılığna eşitlenir
            }

        }


    }// ikinci büyük for



    for (int e = 0; e < boyut; e++) {


        for (int f = 0; f < boyut; f++) {

            cout << char(sayilar2[e][f]) << "\t";  // Crypted karakterleri yazılır
        }

        cout << endl;


    }// üçüncü büyük for



}//İKİNCİ VOID

// --------------------------------------------------
int main() {

    setlocale(LC_ALL, "TURKISH");


    cout << "/////  CEVAP 1  /////" << endl << endl << endl;

    soruBiir();

    cout << "/////  CEVAP 2  /////" << endl << endl << endl;

    soruiki();


    return 0;
}
// ----------------------------------------------------



