#include <iostream>

using namespace std;

int main()
{
    cout << "Kalkulator sederhana menggunakan switch case" << endl;

    float a, b, hasil;
    char aritmatika;

    cout << "Masukkan nilai pertama: ";
    cin >> a;

    cout << "Masukkan operator (*, /, +, -): ";
    cin >> aritmatika;

    cout << "Masukkan nilai kedua: ";
    cin >> b;

    switch(aritmatika)
    {
        case '*':
            hasil = a * b;
            cout << "Hasil perhitungan: ";
            cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
            break;
        case '/':
            hasil = a / b;
            cout << "Hasil perhitungan: ";
            cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
            break;
        case '+':
            hasil = a + b;
            cout << "Hasil perhitungan: ";
            cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
            break;
        case '-':
            hasil = a - b;
            cout << "Hasil perhitungan: ";
            cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
            break;
    }

    return 0;
}