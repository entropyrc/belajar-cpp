#include <iostream>
using namespace std;

// fungsi prototipe
double volume_kubus(double panjang, double lebar, double tinggi);

// pada saat membuat fungsinya, kita bisa menambahkan nilai default
double hitung_luas(double panjang = 1, double lebar = 1)    // tambahkan 'sama dengan' lalu diikuti dengan nilai defaultnya
{
    return panjang * lebar;
}

int main()
{
    cout << "volume kubus: " << volume_kubus(3, 4, 5) << endl;
    // ketika kita memanggil fungsinya seperti baris di atas, kita mengisi argument yang dibutuhkan
    // lalu apa jadinya jika kita tidak mengisi argument yang dibutuhkan?
    // ada yang namanya default argument atau nilai defaultnya

    // maka ketika kita memanggil fungsi tersebut dan mengosongkan argumentnya
    // nilai default tersebut lah yang akan digunakan oleh fungsi tersebut
    cout << "luas persegi: " << hitung_luas() << endl;
    return 0;
}

double volume_kubus(double panjang, double lebar, double tinggi)
{
    return panjang * lebar * tinggi;
}