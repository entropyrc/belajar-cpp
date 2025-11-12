#include <iostream>

using namespace std;

int main()
{
    // cara membuat for loop
    // for(inisialisasi; loop kondisi; increment)
    // {
    //      body/statement
    // }

    // isi yang ada di dalam kurung kurawal kita sebut sebagai body atau tempat untuk mengisi statement

    // pada fungsi 'for' terdapat 3 bagian di dalam kurungnya yang dipisahkan dengan titik koma (;)
    // inisialisasi -> bisa kita pasang sebuah variabel yang nantinya menjadi patokan loop
    // loop kondisi -> apa kondisi yang harus terpenuhi agar loop terjadi
    // increment -> menambah nilai untuk inisialisasi sebanyak 1


    cout << "for loop 1\n";
    for(int count = 1; count <= 10; count++)
    {
        cout << count << endl;
    }

    cout << "for loop 2\n";
    for(int i = 0; i <= 10; i += 2)
    {
        cout << i << endl;
    }
    // pada posisi increment di dalam bagian for juga bisa kita isi dengan suatu operasi seperti contoh pada for loop 2
    // jadi tidak terpaku kepada increment saja

    cout << "for loop 3\n";
    for(int i = 1; i >= -10; i--)
    {
        cout << i << endl;
    }

    // karena for loop juga merupakan sebuah perulangan (looping)
    // jadi kita harus membuat kondisinya menjadi False untuk menghentikan perulangannya

    cout << "for loop 4\n";
    int total = 0;
    for(int i = 1; i <= 10; i++, total += 1)    // kita juga bisa menempatkan ekspresi atau operator lain di bagian increment (disebut compound)
    {
        cout << i << " | " << total << endl;
    }

    cout << "akhir dari program" << endl;
    return 0;
}