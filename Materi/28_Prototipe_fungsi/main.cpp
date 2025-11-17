#include <iostream>

using namespace std;

// prototipe fungsi
// adalah cara kita mendeklarasikan sebuah fungsi tanpa langsung mengisi statementnya
double hitung_luas(double p, double l); // ini adalah contoh untuk membuat prototype fungsi
void println(double x); // void fungsi juga bisa dibuat prototipenya

int main()
{
    double panjang, lebar, luas;
    cin >> panjang;
    cin >> lebar;

    luas = hitung_luas(panjang, lebar);

    println(luas);
    return 0;
}

double hitung_luas(double p, double l)  // lalu kita bisa membuat fungsi yang sebenarnya di bawah sini
{
    return p * l;
}
// prototype fungsi dan inisialisasi fungsi harus memiliki tipe data, nama, dan argument yang sama agar bisa dibuat

// di atas adalah deklarasinya
// sedangkan di bawah ini adalah penjabaran isi dari fungsinya
void println(double x)
{
    cout << x << endl;
}