#include <iostream>

using namespace std;
// jika kita menggunakan baris 'using' di atas
// maka kita bisa menyederhanakan penulisan beberapa perintah
// yang seperti ini std::cout, std::endl, std::cin

// kita bisa melakukan inisialisasi variabel dan deklarasi di manapun sesuka kita

int main()
{

    int a = 1;  // ini adalah contoh inisialisasi sebuah variabel
    cout << a << endl;
    
    int b;  // ini disebut deklarasi
    b = 10; // berguna ketika kita ingin menggunakan variabel tersebut nanti (bukan sekarang ini)
    cout << b << endl;
    
    // fungsi di bawah bisa ini berguna untuk menginput sebuah angka (mengambil data dari user)
    // dan memasukannya ke dalam sebuah variabel
    int c;
    cout << "Masukkan nilai: ";
    cin >> c;
    cout << "Nilai yang anda masukkan adalah: ";
    cout << c << endl;

    cin.get();
    return 0;
}