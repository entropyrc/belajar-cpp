#include <iostream>
#include <array>    // mengimport standard library khusus array
using namespace std;

int main()
{
    // membuat array dengan menggunakan standard library <array>
    // array<int, jumlah array> nama array

    array<int, 5> nilai;    // artinya kita sudah memiliki array dengan 5 buah integer di dalamnya
    // karena keyword array berasal dari standard library, jadi kita perlu menambahkan std:: ketika ingin membuat array
    // atau cukup menggunakan 'using namespace std;' untuk mempermudah penulisan kode kita


    // cara yang mudah untuk melihat setiap data yang mengisi array adalah dengan melakukan iterasi menggunakan looping
    for(int i = 0; i <= 4; i++)
    {
        nilai[i] = i;
        cout << "nilai [" << i << "]: " << nilai[i];
        cout << " address: " << &nilai[i] << endl;
    }

    // ketika kita menggunakan standard library array
    // sekarang ada banyak fungsi yang bisa kita gunakan

    // melihat ukuran array/banyaknya data pada array
    cout << "\nukuran: " << nilai.size() << endl;

    // melihat address awal dari array
    cout << "address awal: " << nilai.begin() << endl;

    // melihat address akhir dari array
    cout << "address akhir: " << nilai.end() << endl;

    // mengambil isi data atau nilai berdasarkan index
    cout << "nilai ke-2: " << nilai.at(2) << endl;

    return 0;
}