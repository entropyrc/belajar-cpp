#include <iostream>

using namespace std;

int main()
{
    // operator sederhana pada Aritmatika
    // + (tambah), - (kurang), * (kali), / (bagi), % (modulus)

    int a = 6;
    int b = 4;
    int hasil;

    // 1. penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // 2. pengurangan
    hasil = a - b;  // walaupun sebelumnya variabel hasil sudah kita deklarasikan ulang pada penjumlahan
    // kita masih bisa mendeklarasikan ulang variabel tersebut dengan nilai yang berbeda asal tipe data yang dihasilkan tetap sama
    cout << a << " - " << b << " = " << hasil << endl;

    // 3. perkalian
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    // 4. Pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;
    // hasil dari pembagian di atas akan menjadi 1
    // karena tipe data integer tidak bisa menampung bilangan yang memiliki koma (bilangan desimal)

    // 5. Modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;
    // output dari modulus adalah sisa pembagian yang kita lakukan


    // jika kita ingin melakukan pembagian yang benar
    // maka salah satu tipe data yang dibagi harus bertipe data float
    // dan hasil dari pembagian tersebut juga harus bertipe data float
    int c = 5;
    float d = 3;
    float hasil2;

    hasil2 = c / d;
    cout << "\nPembagian yang benar\n" << c << " / " << d << " = " << hasil2 << endl;

    // jika salah satu tipe data bertipe float, kita menjadi tidak bisa menggunakan operasi modulus

    
    // urutan operasi yang akan dieksekusi
    hasil = (a + b) * a;    // kita bisa menggunakan tanda kurung untuk mendahulukan perhitungan seperti pada matematika
    cout << hasil << endl;

    return 0;
}