#include <iostream>
using namespace std;

// pendahuluan array
// tipe data atau struktur data array

// array adalah kumpulan data
// contohnya kita punya 5 data atau nilai integer
// ada int a, int b, int c, int d, int e

// karena array adalah kumpulan data
// isinya bukan hanya angka, kita juga bisa menyimpan nilai lain

// contoh cara membuat array
// int[5] -> artinya kita memiliki data bertipe integer sebanyak 5
// karena sebuah kumpulan data juga pasti ada urutannya, urutan pada array disebut dengan 'index'
// hitungan index diawali dari 0 dan bukan 1
// jadi ketika kita punya jumlah data 5, maka hitungannya diawali index 0 sampai index 4 (bukan index 5)

// kumpulan data yang ada di dalam array pun memiliki addressnya masing-masing
// urutan addressnya berurutan entah itu angkanya membesar ataupun mengecil

int main()
{
    // untuk basic array, tidak memiliki banyak fungsi yang dapat digunakan
    // ketika ingin melakukan hal lebih dengan menggunakan array, kita perlu mengimport standard library untuk array pada c++

    // membuat array
    int nilai[5];
    
    // array juga berkaitan dengan pointer
    // ketika kita langsung menampilkan nilainya menggunakan cout
    cout << nilai << endl;
    // maka yang keluar adalah addressnya

    // kita bisa melihat address dari nilai setiap index atau urutannya dengan menambahkan angka di dalam kurung siku dan menambahkan simbol dan '&'
    cout << &nilai[0] << endl;   // index ke-0 atau urutan pertama
    cout << &nilai[1] << endl;
    cout << &nilai[2] << endl;
    cout << &nilai[3] << endl;
    cout << &nilai[4] << endl << endl;   // index ke-4 atau urutan kelima sesuai dengan jumlah data yang kita masukkan pada saat membuat array tadi

    // hasilnya akan menunjukkan address setiap nilai, dan ditampilkan secara berurutan dari terkecil ke terbesar dengan perhitungan heksadesimal

    // untuk mengisi nilai atau menginisialisasi setiap index-nya
    // kita bisa menggunakan cara berikut:
    nilai[0] = 1;   // ketik nama array dan gunakan kurung siku untuk menunjukkan index-nya,
    nilai[1] = 2;   // lalu beri tanda sama dengan untuk inisialisasi nilai dan diikuti dengan nilai yang ingin dimasukkan
    nilai[2] = 3;
    nilai[3] = 4;
    nilai[4] = 5;

    // kita bisa melihat isi dari setiap index dengan menggunakan kurung siku dan index-nya
    cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
    cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
    cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
    cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
    cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl << endl; 

    // tapi kita juga bisa langsung mengisi nilai pada array ketika pertama kali membuatnya
    int nilai2[3] = {10, 20, 30};    // dengan menggunakan kurung kurawal lalu isi datanya sesuai urutan

    cout << &nilai2[0] << " nilainya adalah: " << nilai2[0] << endl;
    cout << &nilai2[1] << " nilainya adalah: " << nilai2[1] << endl;
    cout << &nilai2[2] << " nilainya adalah: " << nilai2[2] << endl << endl; 

    // berikutnya kita akan mengubah isi data atau nilai dari salah satu index di dalam array tersebut
    // ada cara dengan menggunakan pointer
    int *ptr = nilai2;
    *(ptr) = 6; // artinya kita mengubah data pada index ke-0
    // jika ingin mengubah data index lain, kita tinggal menambah angka pada ptr nya
    *(ptr + 1) = 8; // mengubah data pada index ke-1

    // dan juga cara menggunakan indexnya langsung
    nilai2[2] = 10;

    cout << &nilai2[0] << " nilainya adalah: " << nilai2[0] << endl;
    cout << &nilai2[1] << " nilainya adalah: " << nilai2[1] << endl;
    cout << &nilai2[2] << " nilainya adalah: " << nilai2[2] << endl << endl;
    

    // pada saat kita membuat array dan ketika ingin tahu berapa banyak data atau nilai di dalam array tersebut (atau bisa dibilang panjang data pada array tersebut)
    // kita tidak bisa mengeceknya secara default menggunakan program bawaan seperti halnya bahasa pemrograman lain
    // dalam contoh kasus pada bahasa pemrogramman python -> kita bisa menggunakan perintah len() untuk menghitung panjang data pada kumpulan data

    // tapi kita masih bisa melihat ukuran data array yang digunakan memory
    // dengan menggunakan keyword sizeof() -> (sizeof() masuk ke dalam standard library iostream, jadi kita harus menambahkan 'std::' ketika tidak menggunakan 'using namespace std')
    cout << "ukuran array: " << sizeof(nilai2) << " byte" << endl;
    // hasilnya adalah 12 byte, kenapa bisa 12 byte?
    // karena isi dari array tersebut adalah nilai bertipe integer, kita mengisi sebanyak 3 data integer
    // ukuran dari satu data integer adalah 4 byte, jadi semuanya digabungkan sehingga berjumlah 12 byte (4 x 3 = 12)

    // cara alternatif untuk melihat berapa banyak data yang mengisi array tersebut adalah
    // dengan membagikan ukuran data array tersebut dengan tipe data yang mengisi data dari array tersebut
    // berarti kita akan membagikan ukuran array tersebut dengan ukuran dari tipe data integer
    cout << "jumlah data/member array: " << sizeof(nilai2)/sizeof(int) << endl;

    // settingan bawaan array pada c++ banyak kekurangannya
    // seperti kita tidak bisa menggunakan fungsi yang mudah untuk menghitung member array, sampai mengurutkan datanya (sorting)
    // jika ingin melakukannya, kita perlu mengimport library khusus untuk memanipulasi array lebih dalam lagi
    return 0;
}