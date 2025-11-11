#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 2;
    
    bool hasil;
    // operator logika ada 3: not, and, or
    
    // not
    cout << "not" << endl;
    // kita tinggal menggunakan tanda seru (!) di depan sebuah pernyataan logika yang artinya 'tidak'
    hasil = !(a == 3);
    cout << hasil << endl;
    // pada contoh di atas, berarti 'tidak sama dengan'
    // kita juga bisa menggunakan logika 'not' untuk 'and' dan juga 'or'


    // and
    cout << "\nand" << endl;
    // jika ingin menggunakan logika and, kita harus sambil menyandingkannya dengan nilai yang lain
    // logika and juga bisa kita lakukan dengan menggunakan 2 simbol dan (&&)
    hasil = a == 3 and b == 2;  // True and True
    cout << hasil << endl;

    hasil = a == 4 and b == 2;  // False and True
    cout << hasil << endl;

    hasil = a == 3 && b == 3;  // True and False
    cout << hasil << endl;

    hasil = a == 4 && b == 3;  // False and False
    cout << hasil << endl;

    // ketentuan logika 'and':
    // kedua nilai harus benar (True), untuk membuat hasilnya menjadi 1 (True) (benar)
    // jika salah satu nilai itu salah (False) atau kedua nilainya salah (dua-duanya False), maka hasilnya akan menjadi 0


    // or
    cout << "\nor" << endl;
    // kita harus menyandingkannya dengan nilai yang lain jika ingin menggunakan logika or
    // logika or juga bisa kita lakukan dengan menggunakan 2 simbol pipa (||)
    hasil = a == 3 or b == 2;  // True and True
    cout << hasil << endl;

    hasil = a == 4 or b == 2;  // False and True
    cout << hasil << endl;

    hasil = a == 3 || b == 3;  // True and False
    cout << hasil << endl;

    hasil = a == 4 || b == 3;  // False and False
    cout << hasil << endl;

    // ketentuan logika 'or':
    // jika kedua nilai benar (dua-duanya True) atau salah satu nilai bernilai benar (True), maka hasilnya menjadi 1 (True)
    // jika kedua nilai salah (False), maka hasilnya akan menjadi 0 (False)

    return 0;
}