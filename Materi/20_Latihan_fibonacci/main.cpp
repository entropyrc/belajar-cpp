#include <iostream>

using namespace std;

// fibonacci -> deret
// untuk penjelasan lebih lanjut, bisa dilihat pada url berikut: https://en.wikipedia.org/wiki/Fibonacci_sequence

int main()
{
    // rumus sederhana
    // f(n) = f(n1) + f(n2)
    
    int n;
    int f_n;    // f(n)
    int f_n1;   // f(n1)
    int f_n2;   // f(n2)

    cout << "program deret fibonacci" << endl;
    cout << "masukkan nilai ke-n: ";
    cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    cout << f_n << " ";
    for(int i = 1; i < n; i++)
    {   
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << " ";
    }

    cout << endl;
    cin.get();
    return 0;
}