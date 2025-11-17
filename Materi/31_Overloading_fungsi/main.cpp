#include <iostream>
using namespace std;

// overloading = menimpa

// basic function
int luas_kotak(int panjang, int lebar)
{
    int luas = panjang * lebar;
    return luas;
}

// overload function
int luas_kotak(int sisi)
{
    int luas = sisi * sisi;
    return luas;
}

// overload function
double luas_kotak(double sisi)
{
    return sisi * sisi;
}

int main()
{
    cout << "luas kotak 2 x 3: " << luas_kotak(2, 3) << endl;   // baris ini akan menggunakan fungsi yang pertama

    cout << "luas kotak 2 x 2: " << luas_kotak(2) << endl;  // ini akan menggunakan fungsi yang kedua
    // walaupun memiliki nama fungsi yang sama, kita bisa menimpanya atau meng-overloadnya
    // agar ia bisa berjalan jika hanya memiliki 1 argument seperti ini

    cout << "luas kotak 2.5 x 2.5: " << luas_kotak(2.5) << endl;
    // kita juga bisa tetap meng-overload fungsinya ketika ingin menggunakan tipe data yang berbeda

    return 0;
}