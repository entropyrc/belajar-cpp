#include <iostream>

using namespace std;

// kali ini kita akan belajar cara membuat sebuah fungsi sendiri
// jika dilihat dari rumus fungsi matematika berikut:
// f(x)
// f = adalah nama fungsinya
// sedangkan x = adalah inputnya atau argumentnya
// ketika membuat fungsi, kita juga harus menentukan tipe data dari fungsi tersebut
// dan gunakan keyword return untuk mengembalikkan nilai dari fungsi tersebut

// untuk permulaan, kita akan meletakkan fungsinya di luar 'main'
int kuadrat(int x)  // 'int x' di sini adalah input atau argumentnya, harus diisi ketika kita menggunakan fungsi tersebut
{
    int y;
    y = x * x;  // nilai dari 'y' bisa kita lihat di sini
    return y;   // 'y' di sini adalah nilai yang akan dikembalikan ketika kita menggunakan fungsi ini
}

// contoh fungsi kedua
// bagaimana jika input atau argumentnya lebih dari satu? tentu saja bisa kita buat
int tambah(int a, int b)
{
    int hasil;
    hasil = a + b;
    return hasil;
}   // walaupun ada 2 nilai input atau argument, nilai yang akan dikembalikkan atau 'return' tetaplah 1

int main()
{
    int input, hasil;  // dummy variabel yang akan kita gunakan agar diisi oleh fungsi yang tadi kita buat
    // tipe datanya harus sama dengan tipe data dari fungsi yang akan kita gunakan

    cout << "nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);  // cara memanggil fungsi yang sudah kita buat tadi, 'input' adalah isi dari argumentnya

    cout << hasil << endl;


    int angka1, angka2;

    cout << "masukkan angka pertama: ";
    cin >> angka1;
    cout << "masukkan angka kedua: ";
    cin >> angka2;

    cout << "hasil penjumlahan: " << tambah(angka1, angka2) << endl;    // contoh cara menggunakan fungsi dengan 2 argument atau input

    return 0;
}