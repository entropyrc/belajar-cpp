#include <iostream>
using namespace std;

// fungsi rekursif

// rekursif berasal dari kata recursion yang berarti perulangan (iterasi)
// sedangakan fungsi rekursif adalah fungsi yang bisa mengulangi dirinya sendiri
// kita juga bisa memanggil fungsi di dalam fungsi tersebut

int pangkat_iterasi(int a, int b)   // fungsi biasa
{
    int hasil = a;
    for(int i = 1; i < b; i++)
    {
        hasil = hasil * a;
    }
    return hasil;
}

// karena fungsi rekursif akan mengulangai dirinya sendiri
// kita harus membuat yang namanya finite rekursif atau rekursif terbatas
// agar fungsi tersebut bisa menghentikan perulangannya di satu titik tertentu dan tidak menyebabkan infinity loop

int pangkat_rekursif(int a, int b)  // fungsi rekursif terbatas -> maksudnya bukan 'tidak terbatas' atau infinity loop
{
    if(b <= 1)  // if-else ini digunakan agar fungsi ini tidak mengalami infinity loop
    {
        cout << "akhir dari rekursif" << endl;
        return a;
    }
    else
    {
        cout << "rekursif" << endl;
        return a * pangkat_rekursif(a, b - 1);  // bagian return ini mirip-mirip seperti perulangan
        // maka dari itu pasti akan ada indikasi infinity loop
    }
}

int main()
{
    int a;
    int b;
    cout << "angka: ";
    cin >> a;
    cout << "pangkat: ";
    cin >> b;

    cout << "hasil pangkat iterasi: " << pangkat_iterasi(a, b) << endl;
    cout << "hasil rekursif: " << pangkat_rekursif(a, b) << endl;

    return 0;
}