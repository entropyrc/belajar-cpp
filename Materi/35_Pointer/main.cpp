#include <iostream>
using namespace std;

// pointer

// ketika kita mendeklarasikan sebuah variabel
// contoh:
// int a = 5;
// '5' adalah nilai dari variabel tersebut, dan nilainya disimpan di dalam memory komputer kita

// setiap nilai yang disimpan di dalam memory juga memiliki yang namanya 'address' untuk membedakannya dengan nilai yang lain


int main()
{
    int a = 5;
    int b = 5;

    // pointer akan selalu bertipe data integer
    // cara mendeklarasikan pointer adalah dengan menambahkan simbol bintang (*) pada nama variabelnya
    // lalu menggunakan simbol dan (&) pada variabel yang ingin kita lihat addressnya
    int *aPtr = &a;

    // ada juga yang namanya null pointer, yaitu untuk membuat addressnya menjadi kosong
    int *bPtr = nullptr;

    // int a memiliki nilai dan address (alamat)

    cout << "nilai dari a: " << a << endl;
    cout << "alamat dari a: " << aPtr << endl;  // jika kita tampilkan di sini, maka akan terlihat bahwa address dari memory-nya juga berubah-ubah setiap kali kita eksekusi

    // address kosong
    cout << "address kosong: " << bPtr << endl;

    // berikutnya kita akan mencoba mengambil nilainya tetapi melalui alamat atau address-nya
    // dengan menggunakan dereferencing -> mengambil data dari sebuah pointer
    cout << "mengambil nilai dari pointer aPtr: " << *aPtr << endl; // dengan menambahkan simbol bintang dan nama pointernya

    return 0;
}