// kita akan membuat semacam program permainan acak dadu
// dengan menggunakan metode random

#include <iostream>
#include <cstdlib>  // library <cstdlib> memiliki fungsi 'random' yang bisa kita gunakana

using namespace std;

int main()
{
    for(int i = 0; i < 10; i++)
    {
        cout << 1 + (rand() % 6) << endl;
    }
    // jika kita hanya menggunakan fungsi rand(), maka ia akan meng-generate angka acak dengan nilai yang acak juga (random)
    // kita bisa menambahkan modulus 6 (% 6) agar angka yang muncul menjadi 1, 2, 3, 4, 5 atau 6
    // tapi nanti nilai 0 juga akan ikut muncul, kita perlu menghilangkannya karena pada dadu tidak ada nilai 0
    // kita tinggal menambahkan nilai yang dihasilkan sebanyak 1

    // jika kita sudah mengetahui konsep untuk membuat drawing dice-nya, kita bisa langsung membuat program utamanya

    char lanjut;
    while(true) // while(true) di sini berarti perulangan ini akan berlangsung jika kita tidak menggunakan break
    {
        cout << "\nIngin lempar dadu? (y/n) ";
        cin >> lanjut;

        if(lanjut == 'y')
        {
            cout << "Nilai dadu: " << 1 + (rand() % 6) << endl;
        }
        else if(lanjut == 'n')
        {
            break;
        }
        else
        {
            cout << "Warning: ketik y atau n dong!" << endl;
        }
    }

    // kita gunakan if-else untuk membuat banyak kondisi

    return 0;
}