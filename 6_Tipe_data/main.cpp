#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // 1. int
    int a = 1;  // memiliki besar data 32 bit
    // kali ini kita akan mempelajari tipe data lain selain integer yang sudah pernah kita bahas sebelumnya
    // tapi sebelum itu kita akan mengecek berapa 'besar data' dari variabel a terlebih dahulu

    // jangan lupa, cout digunakan untuk menampilkan output ke console (terminal)
    cout << "int: " << a << endl;
    cout << sizeof(a) << " byte" << endl;  // gunakan fungsi sizeof() lalu masukkan variabel yang ingin kita cek besar datanya di dalam kurung
    // maka outputnya akan menjadi 4, dan menggunakan satuan "byte"

    // ada yang namanya memory management ketika kita ngoding c++
    // struktur datanya menggunakan satuan byte, 1 byte = 8 bit
    // besar data suatu tipe data juga mempengaruhi memory yang digunakan

    // dengan perhitungan yang didasarkan pada memory management
    // kita bisa menampung nilai maksimum pada integer sampai 2147483647
    // dan nilai minimumnya mencapai negatif yaitu -2147483648
    // *NOTE: untuk ukuran memory dan jangkauan nilai tipe data bisa kalian cari sendiri di internet

    // kita bisa melihat maksimum nilai yang diinginkan dengan menambahkan '#include <limits>' pada saat mengimport library
    // agar bisa menggunakan numeric_limits

    cout << numeric_limits<int>::max() << endl; // maka hasilnya akan menunjukkan nilai maksimum dari integer
    cout << numeric_limits<int>::min() << endl << '\n'; // maka hasilnya akan menunjukkan nilai minimum dari integer

    // jika kita mengisi nilai pada integer melebihi batasnya, maka hasilnya akan error
    // alternatifnya jika ingin memasukkan nilai yang lebih tinggi ke dalam variabel, maka kita bisa menggunakan tipe data lain untuk dijadikan sebagai variabel

    // 2. berikutnya kita akan mencoba tipe data long
    long b = 6;

    cout << "long: " << b << endl;
    cout << "Memiliki besar data: " << sizeof(b) << " byte" << endl;

    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long>::min() << endl << '\n';

    // 3. tipe data short
    short c = 7;

    cout << "short: " << c << endl;
    cout << "Memiliki besar data: " << sizeof(c) << " byte" << endl;

    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl << '\n';

    // int, long, dan short termasuk ke dalam bilangan bulat


    // berikutnya ada float dan double yang termasuk ke dalam bilangan desimal (biasanya memiliki koma)
    // 4. float
    float d = 1.5;

    cout << "float: " << d << endl;
    cout << "Memiliki besar data: " << sizeof(d) << " byte" << endl;

    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<float>::min() << endl << '\n';

    // 5. double
    double e = 2.5;

    cout << "double: " << e << endl;
    cout << "Memiliki besar data: " << sizeof(e) << " byte" << endl;

    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<double>::min() << endl << '\n';

    // karakter (character)
    // 6. char
    char f = 'a';

    cout << "char: " << f << endl;
    cout << "Memiliki besar data: " << sizeof(f) << " byte" << endl;

    cout << numeric_limits<char>::max() << endl;
    cout << numeric_limits<char>::min() << endl << '\n';

    // 7. boolean
    bool g = true; // true/false

    cout << "bool: " << g << endl;
    cout << "Memiliki besar data: " << sizeof(g) << " byte" << endl;

    cout << numeric_limits<bool>::max() << endl;
    cout << numeric_limits<bool>::min() << endl << '\n';


    // kita bisa menggunakan yang namanya 'unsigned' ketika tidak membutuhkan nilai negatif dari suatu tipe data
    unsigned int h = 1; // true/false

    cout << "unsigned int: " << h << endl;
    cout << "Memiliki besar data: " << sizeof(h) << " byte" << endl;

    cout << numeric_limits<unsigned int>::max() << endl;
    cout << numeric_limits<unsigned int>::min() << endl << '\n';
    // maka nilai minimumnya akan menjadi 0 dan nilai maksimumnya akan bertambah jadi 2 kali lipat karena negatifnya pindah untuk menambahkan nilai positifnya (contoh kasus pada unsigned int)

    // ukuran data yang berbeda-beda dari setipa tipe data yang ada pada c++
    // memungkinkan kita untuk menggunakan tipe data tertentu sesuai dengan kebutuhan program yang kita buat
    // jadi kita tidak menyia-nyiakan resource yang digunakan dan hanya menggunakan resource yang diperlukan saja
    // dengan menggunakan tipe data yang sesuai dan bisa membuat program berjalan lebih cepat

    cin.get();
    return 0;
}