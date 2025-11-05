/*
proses compiling file kira-kira seperti ini

jika di file.cpp kita mengambil sebuah library (#include), maka data dari library tersebut akan ikut terbawa dengan file cpp-nya

#include
main.cpp --> processing --> compiling -> <obj file> -> linking --> menjadi executable file (.exe)
                                             |
                                    berupa bahasa mesin
                                    semua object akan terkumpul di sini

- alur preprocessing

#include --> iostream --
                        |
main.cpp ------------> prepocessing --> file penggabungan antara library dan source code (sebelum dicompile)

*/
#include <iostream>

int tambah(int a, int b)
{
    return (a + b);
}

int main()
{
    std::cout << tambah(10, 3) << std::endl;
    return 0;
}

// kita bisa mengubah file main.cpp ini menjadi preprocessing
// dengan mengetik perintah 'g++ -E <nama file> > <nama file>.p'

// contoh: 'g++ -E main.cpp > main.p'
// isi dari file main.p tersebut adalah iostreamnya

// bahkan jika kita menggunakan library pun, isi data dari library tersebut akan tersalin ke dalam preprocessing


// setelah tahap preprocessing, ada yang namanya compile dan mengubah file menjadi object file
// dengan cara mengetik:
// g++ -c <nama file>.cpp

// contoh:
// g++ -c main.cpp

// nantinya akan muncul file bernama sama seperti file cpp kita tapi dengan eksistensi yang berbeda yaitu .o
// cara menampilkan isi dari file .o tersebut dengan menggunakan perintah:
// objdump -d <nama file>.o
// -d: disassemble

// contoh:
// objdump -d main.o

// hasil dari file .o tersebut berupa bahasa mesin

// proses compiling akan gagal atau error jika source code yang kita tulis mengalami error atau ada kesalahan syntax

// setelah melewati proses compiling, berikutnya kita akan membuat filenya menjadi executable (.exe)
// dengan mengetik perintah:
// g++ <nama file>.o

// file dengan eksistensi .o tadi bisa langsung kita ubah menjadi executable
// proses ini disebut linking
// kita bisa menjalankan file .exe tersebut dengan menggunakan simbol ./<nama file>

// penjelasan singkat soal proses linking
// misalnya kita membuat dua file berbeda
// lalu kedua file tersebut kita compile secara terpisah sehingga menghasilkan 2 object yang berbeda
// maka, dari kedua .o tersebut, bisa kita satukan menggunakan linking ini

// pada perintah:
// g++ <nama file>.o <nama file>.o
// jika ingin menghasilkan nama file selain 'a', tinggal tambahkan '-o <nama file baru>'

// maka nantinya kedua file object tersebut akan menjadi satu file .exe yang sama
// jika kedua .o tersebut memiliki fungsi yang saling berhubungan, maka fungsi tersebut dapat berjalan di file .exe-nya