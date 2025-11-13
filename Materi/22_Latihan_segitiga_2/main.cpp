#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "Masukkan panjang pola: ";
    cin >> n;

    cout << "\npola 5" << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j > i; j--)
        {
            cout << " ";
        }
        for(int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // dengan menggunakan sebuah perhitungan matematika yang cukup rumit
    // yaitu menggunakan rumus deret
    // kita bisa memperkirakan untuk membuat sebuah pola segitiga sama kaki

    cout << "\npola 6" << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout << ' ';
        }
        for(int k = n; k >= (2 * i - n); k--)
        {
            cout << '*';
        }
        cout << endl;
    }

    cout << "\npola 7" << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j > i; j--)
        {
            cout << " ";
        }
        for(int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 2; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout << ' ';
        }
        for(int k = n; k >= (2 * i - n); k--)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}