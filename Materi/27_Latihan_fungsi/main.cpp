#include <iostream>

using namespace std;

// fungsi menghitung luas persegi panjang
double hitung_luas(double panjang, double lebar)
{
    double luas = panjang * lebar;
    return luas;
}

//fungsi menghitung keliling persegi panjang
double hitung_keliling(double panjang, double lebar)
{
    double keliling = 2 * (panjang + lebar);
    return keliling;
}

void tampilkan_luas(double p, double l)
{
    cout << "luasnya: ";
    cout << hitung_luas(p, l) << endl;  // kia bisa langsung menggunakan fungsi yang tadi dibuat di dalam void ini
}


void tampilkan_keliling(double p, double l)
{
    cout << "kelilingnya: ";
    cout << hitung_keliling(p, l) << endl;  // kia bisa langsung menggunakan fungsi yang tadi dibuat di dalam void ini
}

int main()
{
    double panjang, lebar;

    cout << "masukkan panjang: ";
    cin >> panjang;

    cout << "masukkan lebar: ";
    cin >> lebar;

    tampilkan_luas(panjang, lebar);
    tampilkan_keliling(panjang, lebar);

    return 0;
}