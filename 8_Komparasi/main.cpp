// Komparasi bisa disebut sebagai membandingkan
// dan hasil dari komparasi akan bertipe boolean (True/False)

#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 2;
    
    bool hasil1, hasil2;    // kita bisa mendeklarasikan dua variabel sekaligus dengan tipe data yang sama

    // komparasi, relation expression

    // 1. sebanding (sama dengan)
    hasil1 = (a == b);
    cout << hasil1 << endl;
    // outputnya akan menjadi antara 1 atau 0
    // 1 = True
    // 0 = False

    // jika a sama dengan b, maka hasilnya akan True (outputnya akan 1)
    // akan tetapi jika a tidak sama dengan b, maka hasilnya akan False (outputnya akan 0)

    // 2. tidak sebanding (tidak sama dengan)
    hasil2 = (a != b);
    cout << hasil2 << endl;
    // fungsinya hampir mirip dengan sebanding (sama dengan), tinggal dibalik saja menjadi 'tidak sama dengan'
    // kali ini artinya jika a tidak sama dengan b, maka hasilnya akan True (outputnya akan 1)
    // dan jika a sama dengan b, maka hasilnya akan False (outputnya akan menjadi 0)


    int c = 1;
    int d = 2;

    // 3. kurang dari
    hasil1 = (c < d);
    cout << hasil1 << endl;

    // 4. lebih dari
    hasil2 = (c > d);
    cout << hasil2 << endl;

    // 5. kurang dari sama dengan
    hasil1 = (a <= b);
    cout << hasil1 << endl;

    // 6. lebih dari sama dengan
    hasil2 = (a >= b);
    cout << hasil2 << endl;

    // jika kita menggunakan komparasi kurang/lebih dari sama dengan
    // maka angka yang dimaksudkan juga dihitung menjadi True
    // misalkan kurang dari sama dengan 2, maka 2 tersebut akan termasuk ke dalam komparasinya

    return 0;
}