#include <iostream>
using namespace std;

// faktorial

// faktorial adalah hasil perkalian semua bilangan bulat positif dari satu hingga bilangan tertentu, yang dilambangkan dengan tanda seru (!).
// Misalnya, faktorial dari 5 (ditulis 5!) adalah 5 x 4 x 3 x 2 x 1 = 120.
// atau 5! = 5.4.3.2.1 = 120

// Operasi ini umum digunakan dalam perhitungan matematika, terutama untuk permutasi (susunan yang memperhatikan urutan) dan kombinasi (penyusunan tanpa memperhatikan urutan). 

// kali ini kita akan melakukan faktorial dengan menggunakan rekursif

// rumus singkat untuk rekursifnya seperti ini
// n! = n . (n - 1)!

// prototype fungsi
int faktorial(int n);

int main()
{
    int a, hasil;

    cout << "nilai: ";
    cin >> a;

    hasil = faktorial(a);
    cout << "\nhasil faktorial dari " << a << "!: " << hasil << endl;

    return 0;
}

int faktorial(int n)
{
    // cout << n << endl;  // bisa dicek dengan menjalankan baris ini untuk melihat infinity loop-nya
    // return n * faktorial(n - 1);    // jika kita hanya membuatnya seperti ini
    // maka fungsinya akan terus mengulang tanpa ujung dan menyebabkan stack overflow
    // maka kita perlu menambahkan statement if-else
    if(n <= 1)
    {
        cout << n;
        return n;   // ketika perulangan sudah menjadikan nilai n menjadi 1, maka program akan langsung menampilkan hasil n
    }
    else
    {
        cout << n << " * ";
        return n * faktorial(n - 1);
    }
}
