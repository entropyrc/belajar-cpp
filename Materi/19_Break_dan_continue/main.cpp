#include <iostream>

using namespace std;

int main()
{
    // kita buat sebuah perulangan terlebih dahulu dengan menggunakan for loop
    for(int i = 1; i <= 10; i++)
    {
        // break digunakan untuk langsung menhentikan sebuah perulangan (menghentikan looping)
        // kita juga bisa menggunakan break sambil menentukan kondisi dengan menggunakan if statement
        if(i >= 5)
        {
            break;  // ketika nilai i menyentuh 5, maka baris if ini akan tereksekusi dan ia akan mengeksekusi fungsi break
        }
        cout << i << endl;
    }

    // ketika break sudah berjalan, maka program akan dilanjut ke baris setelah for loop (perulangan) tadi
    cout << "Akhir program break\n" << endl;


    // continue
    // juga digunakan di dalam sebuah perulangan (entah itu for loop atau while loop)
    for(int i = 1; i < 10; i++)
    {
        if(i == 3)  // continue juga bisa kita tempatkan di dalam sebuah percabangan (if) di dalam loop
        {
            continue;   // nantinya ketika nilai i mencapai 3, maka program akan langsung lanjut ke perulangan berikutnya (dalam kasus ini langsung ke perulangan ke-4)
            // dan akan melewatkan sisa baris perintah di bawahnya
        }
        cout << i << endl;  // baris ini akan dilewatkan ketika fungsi continue sudah berjalan
    }
    // ketika kondisi yang tadi sudah terpenuhi, maka perulangan akan terus berlanjut sampai selesai
    cout << "Akhir program continue\n" << endl;


    // kita juga bisa menggunakan fungsi break dan continue di dalam perulangan lain seperti while loop
    int a = 0;
    while(a < 10)
    {
        a++;
        // continue pada while loop
        if(a == 5)
        {
            continue;
        }

        // break pada while loop
        if(a == 8)
        {
            break;
        }
        cout << a << endl;
    }
    cout << "Akhir program break dan continue menggunakan while loop" << endl;

    // intinya, break digunakan untuk menghentikan sebuah perulangan dan langsung menjalankan baris perintah berikutnya pada kode
    // continue digunakan untuk melewati 1 putaran pada perulangan ketika kondisinya terpenuhi dan akan tetap lanjut hingga perulangan selesai

    // break dan continue sama-sama harus ditempatkan di dalam sebuah perulangan (looping) entah itu for loop maupun while loop
    return 0;
}