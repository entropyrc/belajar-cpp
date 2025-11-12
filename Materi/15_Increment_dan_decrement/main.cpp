#include <iostream>

using namespace std;

int main()
{
    // increment dan decrement (penambahan dan pengurangan)

    // increment dibagi menjadi 2
    // ada pre-increment dan post-increment
    // pre adalah sebelum increment sedangkan post adalah setelah increment

    int a = 5;
    int b = 5;

    // post-increment
    cout << "nilai a awal: " << a << endl;
    a++;
    // increment dilakukan menggunakan dua kali simbol plus (++)
    // a++ bisa dimaksudkan sama seperti a = a + 1
    // disebut post karena kita menambahkan nilai sebanyak 1 "sesudahnya"
    cout << "post-increment a: " << a << endl;
    cout << endl;

    // pre-increment
    cout << "nilai b awal: " << b << endl;
    ++b;
    // ++b juga sama seperti b = b + 1
    // disebut pre karena kita menambahkan nilai sebanyak 1 "sebelumnya"
    cout << "pre-increment b: " << b << endl;
    cout << endl;

    // lalu apa bedanya?
    // bisa kita lihat ketika memasukkan fungsi increment tersebut ke dalam cout
    int c = 2;
    int d = 2;

    cout << "nilai awal c: " << c << endl;
    cout << "pre-increment c: " << ++c << endl;
    cout << c << endl;

    cout << "nilai awal d: " << d << endl;
    cout << "post-increment d: " << d++ << endl;
    cout << d << endl;

    // pada pre-increment
    // nilai akan ditambahkan 1 lebih dulu setelah itu ditampilkan di statement yang sama
    // dan hasil output berikutnya pun sama seperti sebelumnya

    // sedangkan pada post-increment
    // nilai akan ditampilkan terlebih dahulu di statement yang sama, setelah itu baru ditambahkan 1 di belakang layar
    // dan hasil output berikutnya pun akan bertambah 1 nilai

    // decrement hampir sama fungsi dan kegunaannya seperti increment
    // arti dari decrement adalah pengurangan nilai sebanyak 1
    // decrement dilakukan menggunakan dua kali simbol mines (--)

    int e = 3;
    int f = 3;

    cout << "nilai awal e: " << e << endl;
    cout << "pre-decrement e: " << --e << endl; // e = e - 1
    cout << e << endl;

    cout << "nilai awal f: " << f << endl;
    cout << "post-decrement f: " << f-- << endl;    // f = f - 1
    cout << f << endl;

    return 0;
}