#include <iostream>
using namespace std;

// fibonacci rekursif
int fibonacci(int n);

int main()
{
    int angka, hasil;
    cout << "Menghitung fibonacci ke: ";
    cin >> angka;

    hasil = fibonacci(angka);
    cout << "nilainya adalah: " << hasil << endl;

    return 0;
}

int fibonacci(int n)
{
    if(n == 0 or n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// kekurangan dari menghitung fibonacci menggunakan fungsi rekursif ini adalah
// akan menyebabkan perhitungan yang bercabang
// semakin besar n yang dimasukkan, maka percabangannya juga semakin jauh
// dan akan memakan waktu lama bagi komputer untuk menghitung semuanya