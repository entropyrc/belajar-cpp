#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Masukkan panjang pola: ";
    cin >> n;

    cout << "pola 1" << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    // cara membuatnya memang sedikit sulit
    // kita harus membuat perulangan di dalam sebuah perulangan (for loop di dalam for loop)
    // agar bisa menampilkan output ke bawah dan ke kanan untuk bentuk bintangnya

    cout << "\npola 2" << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
        {
            cout << '*';
        }
        cout << endl;
    }
    // untuk membuat pola berikutnya, kita tinggal melakukan hal yang sebaliknya
    // for di dalam akan dimulai dari banyaknya n dan ubah incrementnya menjadi decrement agar nanti mengurangi jumlah pola sebanyak 1

    cout << "\npola 3" << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout << ' ';
        }
        for(int k = n; k >= i; k--)
        {
            cout << '*';
        }
        cout << endl;
    }


    cout << "\npola 4" << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j > i; j--)
        {
            cout << ' ';
        }
        for(int k = 1; k <= i; k++)
        {
            cout << '*';
        }
        cout << endl;
    }
    

    return 0;
}