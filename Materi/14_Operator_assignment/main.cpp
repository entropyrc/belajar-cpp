#include <iostream>

using namespace std;

int main()
{
    // cara membuat assignment
    int a = 10;
    int b = 10;

    // ada 2 cara untuk melakukan operasi assigment
    // 1. 
    a = a + 3;
    cout << a << endl;

    // 2.
    b += 2; // kita bisa langsung menggunakan simbol operasi dan sama dengan secara bersamaan diikuti dengan ekspresinya (angka yang ingin dioperasikan)
    cout << b << endl;

    b -= 2;
    cout << "Dikurang 2 menjadi: " << b << endl;

    b *= 4;
    cout << "Dikali 4 menjadi: " << b << endl;

    b /= 3;
    cout << "Dibagi 3 menjadi: " << b << endl;

    b %= 3; // modulus adalah sisa pembagian
    cout << "Dimodulus 3 menjadi: " << b << endl;

    return 0;
}