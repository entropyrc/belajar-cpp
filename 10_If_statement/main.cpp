#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Masukkan angka: ";
    cin >> a;   // kita akan membuat program simpel untuk user memasukkan sebuah angka

    cout << a << endl;

    // if statement
    // rumus:
    // if (kondisi)
    // {
    //     statement
    // }
    // 
    // kondisi yang diinginkan harus ditempatkan di dalam kurung
    // hasil dari kondisi akan bernilai boolean (True=benar atau False=salah)
    // kondisi yang ada pada if harus bernilai True agar kode yang ada di dalam body {} if tersebut bisa berjalan

    if (a == 3)
    {
        cout << "Halooo" << endl;
    }

    // karena angka yang kita masukkan untuk variabel a tadi adalah 3, maka baris if statement di atas akan tereksekusi
    // jika kita memasukkan angka lain selain 3, maka baris if statement tidak akan tereksekusi dan akan langsung mengeksekusi
    // baris setelah if pada baris kode program yang kita buat
    
    cout << "Selesai (baris ini ada di luar if statement)" << endl;

    return 0;
}