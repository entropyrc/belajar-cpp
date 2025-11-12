#include <iostream>

using namespace std;

// switch case juga merupakan salah satu percabangan sama seperti if-else

int main()
{
    int a;

    cout << "Masukkan angka: ";
    cin >> a;

    switch(a)  // hasil dari switch case berupa boolean (True/False)
    {
        case 4:  // akhiri statement case ini dengan titik dua (bukun titik koma)
            cout << "a = 4" << endl;
        case 5:
            cout << "a = 5" << endl;
        default:
            cout << "Kosong" << endl;
    }

    // ketik switch lalu tanda kurung dan masukkan variabel yang ingin dikondisikan
    // lalu di bawahnya tambahkan kurung kurawal buka {}
    // di dalam kurung kurawal tersebut adalah body yang akan berisi case-case yang harus dipenuhi

    // dengan menggunakan switch case seperti di atas
    // ketika statement yang kita masukkan di dalam fungsi switch tersebut terpenuhi
    // maka case: yang sesuai akan tereksekusi

    // case 'default' akan tereksekusi ketika case lain tidak terpenuhi (mirip-mirip seperti else pada if-else)

    // keuntungan menggunakan switch ini adalah kita bisa menambahkan banyak kondisi (case) dalam satu statement switch

    // tapi ada satu masalah ketika kita menggunakan switch case ini
    // misalnya kita membuat case-nya dari angka 1 sampai 3
    // ketika kita memasukkan angka 1, maka output pada case yang lain pun akan ikut muncul pada console

    // untuk mencegah hal tersebut, kita bisa menambahkan statement 'break' di akhir baris pada body case yang kita inginkan
    // seperti contoh di bawah ini
    switch(a)
    {
        case 1:
            cout << "a = 1" << endl;
            break;
        case 2:
            cout << "a = 2" << endl;
            break;
        case 3:
            cout << "a = 3" << endl;
    }

    // tapi cara menggunakan 'break' tersebut agak merepotkan dan kurang efisien
    // lebih baik kita menggunakan if-else jika kondisi yang kita inginkan sama seperti contoh di atas
    // dibandingkan menggunakan switch case dengan 'break'

    cout << "Akhir dari program" << endl;

    return 0;
}