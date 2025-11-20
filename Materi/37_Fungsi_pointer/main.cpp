#include <iostream>
using namespace std;

// sebelum itu, ada 3 fungsi yang perlu kita ketahui
// 1) fungsi yang harus memasukkan nilai atau argument ke dalamnya
// 2) fungsi yang harus memasukkan pointer ke dalamnya
// 3) fungsi yang harus memasukkan reference ke dalamnya

// karena kita menggunakan pointer
// dan kita juga tidak membutuhkan return karena hanya mengubah nilai dari address
// maka kita bisa menggunakan fungsi void
void fungsi(int *); // contoh prototype fungsi pointer

void kuadrat(int *);


int main()
{
    int a = 5;
    cout << "address a: " << &a << endl;
    cout << "nilai a: " << a << endl;
    fungsi(&a);  // ketika memanggil fungsinya, maka yang harus kita masukkan adalah addressnya bukan variabelnya
    // kita bisa menyebutnya fungsi dengan input pointer
    // dengan menggunakan fungsi pointer tersebut, kita bisa melakukan reference

    kuadrat(&a);
    cout << "nilai a: " << a << endl;


    return 0;
}

void fungsi(int *b) // variabel yang ada di dalam kurung diisi dengan pointer (ditandai dengan menggunakan simbol bintang)
{
    cout << "address b: " << b << endl;
    cout << "nilai b: " << *b << endl;  // dengan menggunakan simbol bintang ini, maka kita melakukan dereferencing
}

void kuadrat(int *valPtr)   // *valPtr = value pointer, digunakan ketika kita bingung menamai input atau argumentnya
{
    // karena nilai dari variabel tersebut sudah tidak kita gunakan
    // maka kita bisa menggunakan pointer untuk input argumentnya
    *valPtr = *valPtr * *valPtr;
}