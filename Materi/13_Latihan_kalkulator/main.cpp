#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "Selamat datang di program kalkulator sederhana\n\n";

    // memasukkan input dari user
    cout << "Masukkan nilai pertama: ";
    cin >> a;
    
    cout << "Pilih operator (*, /, +, -): ";
    cin >> aritmatika;

    cout << "Masukkan nilai kedua: ";
    cin >> b;

    

    if(aritmatika == '+')   // statement di dalam plus harus ditulis menggunakan kutip satu untuk menandakan bahwa itu string
    {
        cout << "Hasil perhitungan: ";
        cout << a << " " << aritmatika << " " << b;

        hasil = a + b;
        cout << " = " << hasil << endl;
    }
    else if(aritmatika == '-')
    {
        cout << "Hasil perhitungan: ";
        cout << a << " " << aritmatika << " " << b;

        hasil = a - b;
        cout << " = " << hasil << endl;
    }
    else if(aritmatika == '*')
    {
        cout << "Hasil perhitungan: ";
        cout << a << " " << aritmatika << " " << b;

        hasil = a * b;
        cout << " = " << hasil << endl;
    }
    else if(aritmatika == '/')
    {
        cout << "Hasil perhitungan: ";
        cout << a << " " << aritmatika << " " << b;

        hasil = a / b;
        cout << " = " << hasil << endl;
    }
    else
    {
        cout << "Operator tidak valid";
    }
    

    return 0;
}