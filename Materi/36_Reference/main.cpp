#include <iostream>
using namespace std;

// reference

// singkatnya reference adalah membuat referensi dari suatu nilai atau variabel yang sudah ada

int main()
{
    // variabel
    int a = 5;
    cout << "address dari a: " << &a << endl;
    cout << "nilai dari a: " << a << endl;

    // kita akan buat satu variabel baru yang akan menempel pada variabel yang sudah ada yaitu a
    // ia akan membagikan addressnya
    int &b = a; // reference
    cout << "nilai dari b: " << b << endl;
    cout << "address dari b: " << &b << endl << endl;

    b = 10;
    cout << "nilai dari a: " << a << endl;
    cout << "nilai dari b: " << b << endl << endl;

    // karena variabel b adalah referensi dari variabel a
    // dan ketika kita mengubah nilai dari variabel b, maka nilai yang ada pada variabel a pun akan ikut berubah

    a = 20;
    cout << "nilai dari a: " << a << endl;
    cout << "nilai dari b: " << b << endl << endl;

    // begitupun ketika kita mengubah nilai dari a
    // maka nilai b juga akan ikut berubah karena ia mengambil referensi dari variabel a

    return 0;
}