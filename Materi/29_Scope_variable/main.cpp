#include <iostream>
using namespace std;

// scope variable (scoping)
// global, local, dan block


int x = 10; // variable global
int ambil_global()  // memanggil variable global
{
    return x;
}

int x_local()   // variable local, scopenya x_local()
{
    int x = 5;
    return x;
}


// kita menjadi memiliki 3 variable yang berbeda dengan nama yang sama yaitu x
// karena dipisahkan dengan yang namanya 'global' variabel dan 'local' variabel

int main()
{
    cout << "1. variable global: " << x << endl;    // pada awalnya, variabel global yang dibuat sebelum main bisa kita gunakan

    int x = 8;  // tapi ketika kita membuat variable local baru untuk fungsi main
    cout << "2. variable local main: "<< x << endl; // variable tersebut akan terpanggil ketika kita memunculkannya

    // lalu, di mana variable globalnya?
    cout << "3. variable ambil_global: " << ambil_global() << endl; // dengan menggunakan fungsi untuk mendapatkan nilainya
    // variabel global akan tetap ada di luar main, dan dia terpisah dari variable local yang ada di dalam main
    
    cout << "4. variable local main: " << x << endl;    // sama seperti nomo 2

    // dan jika kita membuat sebuah fungsi baru
    // lalu mendeklarasikan sebuah variabel dengan nama yang sama di dalam fungsi tersebut
    // maka variabel yang dibuat akan bertipe local variable
    cout << "5. variable x_local: " << x_local() << endl;   // variablenya hanya bisa kita akses melalui fungsi tersebut (beda dari main)

    // yang terakhir kita akan mencoba local block variable
    {
        int x = 1;  // ini adalah contoh local block variable
        // scope variable biasanya dideklarasikan di dalam sebuah block menggunakan kurung kurawal {}
        // atau pada perulangan (for loop dan while loop)

        cout << "6. variable local block: " << x << endl;

        // variable yang ada di dalam block juga tidak akan mengganggu variable yang lain
    }

    cout << "7. variable local main: " << x << endl;
    return 0;
}