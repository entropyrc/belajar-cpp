#include <iostream>
using namespace std;

// contoh fungsi dengan reference
void fungsi(int &b)
{
    // jika sebelumnya fungsi dengan pointer kita menambahkan simbol bintang sebagai argument
    // maka untuk membuatnya menjadi fungsi dengan reference kita tinggal menggunakan simbol dan diikuti dengan argumentnya
    cout << "address a: " << &b << endl;
    cout << "nilai a: " << b << endl;
}

// contoh prototype fungsi dengan reference
void kuadrat(int &);

int main()
{
    int a = 5;
    cout << "address a: " << &a << endl;
    cout << "nilai a: " << a << endl << endl;

    fungsi(a);  // ketika kita memanggil fungsinya, inputnya bisa variabel biasa dan tidak perlu ditambahkan simbol apa-apa (berbeda seperti pointer)
    
    kuadrat(a);
    cout << "nilai a: " << a << endl;

    return 0;
}

void kuadrat(int &nilai_ref)
{
    nilai_ref = nilai_ref * nilai_ref;
}