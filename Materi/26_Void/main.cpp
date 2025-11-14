// Void
// void merupakan sebuah tipe data
// arti dari void adalah 'kosong' atau tidak ada apa-apa

#include <iostream>

using namespace std;

// contoh fungsi dengan kembalian
int kuadrat(int x)
{
    int y;
    y = x * x;
    return y;
}
// fungsi dengan kembalian juga biasa disebut 'reporter' yang artinya melaporkan nilai atau hasilnya

// sedangkan pada void biasa disebut 'worker' karena akan menjalankan perintahnya tanpa ada kembalian atau feedback
// void dibuat tanpa menggunakan keyword 'return' atau nilai yang dikembalikkan
void tampilkan(int input)
{
    cout << "Menampilkan dengan void: " << endl;
    cout << input << endl;
}

int main()
{
    int input, hasil;

    cout << "masukkan nilai: ";
    cin >> input;

    hasil = kuadrat(input);
    // setelah kita menggunakan fungsi kuadrat tadi, kita bisa menampilkan hasilnya dengan menggunakan fungsi void yang tadi dibuat

    tampilkan(hasil);   // kita tinggal menggunakan fungsi voidnya seperti ini
    // jangan lupa masukkan input atau argumentnya ketika memanggilnya jika kalian membuatnya dengan argument
    // akan tetapi ia tidak akan mengembalikkan sebuah nilai dengan keyword 'return'
    // void hanya akan menjalankan perintah yang ada di dalam statementnya selain 'return'    return 0;
}
