#include <iostream>

using namespace std;

int main()
{
    // 'while' digunakan untuk membuat sebuah looping
    // while akan tetap berjalan selama kondisi masih terjadi (benar/True)
    // jika kondisinya sudah tidak terpenuhi (menjadi salah/False)
    // maka looping yang dilakukan while akan berhenti

    // syarat atau kondisi dalam while bertipe data boolean (True/False)

    // cara membuat while
    // while(syarat/kondisi)
    // {
    //      body/aksi (statement yang akan dijalankan selama kondisi True)
    // }

    // perlu diperhatikan!
    // selama kondisi while tetap TRUE
    // maka baris perintah body yang ada di dalam while akan terus berjalan sampai kondisinya False
    // yang bisa menyebabkan infinity loop (perulangan tanpa batas)
    
    // infinity loop
    // int a = 5;

    // while(a == 5)
    // {
    //     cout << "Hore!!";
    // }

    // maka dari itu kita perlu membuat sebuah statement yang bisa menghentikan loopingnya ketika kondisi yang kita inginkan sudah cukup terpenuhi
    // dengan cara membuat kondisi pada while menjadi False

    int a = 5;

    while(a <= 10)
    {
        cout << "Hore " << a << endl;
        a += 1;
    }

    // dengan menggunakan cara di atas, maka setiap perulangan yang terjadi akan menambah nilai a sebanyak 1
    // ketika nilai a sudah tidak lebih kecil dari 10 seperti yang ada pada kondisi while statement
    // maka perulangan (looping) akan berhenti dan sistem langsung menjalankan baris kode di luar atau bawah while tersebut

    cout << "Looping selesai." << endl;
    
    return 0;
}