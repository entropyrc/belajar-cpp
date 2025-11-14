// pengenalan fungsi
// fungsi/function juga bisa disebut method

// sama seperti rumus fungsi pada matematika
// y = f(x) = x + 5

// x sebagai input dan f sebagai outputnya

// contoh fungsi kuadrat
// f(x) = x^2
// f(2) = 4

// x = 2 adalah input
// dan 4 adalah output atau hasilnya

// dengan menggunakan fungsi pada pemrograman
// kita tidak perlu melakukan suatu 'pengulangan'
// maksudnya menulis ulang kode yang sama

// kita bisa menggunakan fungsi yang sudah kita buat ketika ingin menggunakan fungsi tersebut lagi

// pada c++ ada yang namanya standard library
// contoh 'library' ini adalah <iostream> yang bisa kita import atau gunakan dengan perintah #include
// isi dari <iostream> adalah fungsi-fungsi yang bisa kita gunakan pada program kita

// ada juga library lain bernama <cmath> yang berisi fungsi untuk perhitungan matematika

#include <iostream> // cara mengimport library std
#include <cmath>    // cara mengimport library cmath

using namespace std;

/*
library cmath :
ceil(x)     <- pembulatan ke atas
cos(x)      <- cosinus
exp(x)      <- eksponen
fabs(x)     <- nilai absolut dalam float
floor(x)    <- pembulatan ke bawah
fmod(x)     <- modulus dalam float
log(x)      <- logaritma dengan basis natural
log10(x)    <- logaritma dengan basis 10
pow(x, y)   <- x pangkat y
sin(x)      <- sinus
sqrt(x)     <- akar kuadrat
tan(x)      <- tangen
*/

int main()
{
    int x;

    cout << "menghitung akar dari: ";
    cin >> x;

    cout << "akarnya adalah: " << sqrt(x) << endl;
    // kita bisa langsung menggunakan fungsi 'sqrt()' dan di dalam kurung fungsi tersebut diisi dengan sebuah nilai
    // untuk nilainya berasal dari x yang kita input dari user dengan menggunakan 'cin'


    cout << "menghitung akar dari: ";
    cin >> x;

    double y = sqrt(x); // atau kita juga bisa menempatkan fungsi tersebut sambil menginisialisasi variabel baru
    cout << "akarnya adalah: " << y << endl;

    return 0;
}