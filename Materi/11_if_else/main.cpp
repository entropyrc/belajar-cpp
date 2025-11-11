#include <iostream>

using namespace std;

int main()
{
    // jika sebelumnya kita belajar if statement untuk membuat satu kondisi
    // maka berikutnya kita akan belajar if-else

    // dengan menggunakan if-else statement
    // ketika kondisi yang ada pada if tidak terpenuhi (False)
    // maka program akan membaca perintah yang ada pada statement else

    int a;
    cout << "Masukkan nilai a: ";
    cin >> a;

    if (a == 5)
    {
        cout << "Nilai ini adalah 5" << endl;
    }
    else
    {
        cout << "Nilai ini bukan 5" << endl;
    }


    cout << "\nElse-If" << endl;
    // jika nilai yang kita masukkan untuk variabel a adalah 5, maka baris if akan tereksekusi
    // namun jika nilai yang dimasukkan bukan 5, maka baris else akan tereksekusi

    // ada juga satu statement lagi, yaitu else-if atau if-else-if
    // else-if digunakan untuk menambahkan banyak kondisi

    int b;
    cout << "Masukkan angka untuk b: ";
    cin >> b;

    if (b == 4)
    {
        cout << "Nilai b adalah 4" << endl;
    }
    else if (b == 3)
    {
        cout << "Nilai b adalah 3" << endl;
    }
    else if (b == 2)
    {
        cout << "Nilai b adalah 2" << endl;
    }
    else
    {
        cout << "Nilai b bukan 4, 3, maupun 2" << endl;
    }

    cout << "Selesai" << endl;
    return 0;
}