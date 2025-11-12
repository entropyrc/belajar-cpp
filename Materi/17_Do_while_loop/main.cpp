#include <iostream>

using namespace std;

int main()
{
    // apa perbedaan while loop dengan do while loop yang akan dipelajari kali ini?
    
    // cara membuat while loop adalah seperti ini:
    // while(syarat)
    // {
    //      aksi
    // }
    // 
    // sedangakan cara membuat do while loop seperti ini:
    // do{
    // aksi
    // }
    // while(syarat);
    
    // singkatnya, while loop akan mengecek syarat terlebih dahulu kemudian menjalankan aksi yang sesuai
    // sedangkan do while loop akan menjalankan aksi terlebih dahulu kemudian mengecek syarat dan akan berputar kembali ke aksi

    int a = 1;

    do{
        cout << "Hore" << endl;
    }
    while(a < 0);

    // pada 'do while loop' minimal akan menjalankan 1 kali aksi walaupun kondisi pada while-nya bernilai False
    // dan jadinya juga tidak terjadi looping (karena while-nya False)

    // jika looping pada 'do while loop' berjalan
    // cara menghentikan looping yang dilakukan do while loop adalah dengan mengubah kondisi while menjadi False
    do
    {
        cout << "looping ke-" << a << endl;
        a++;
    }
    while(a <= 10);

    return 0;
}