// kita memiliki file default yang ada sistem atau os kita bernama iostream
// lalu kita bawa ke file ini dengan menggunakan #include
// #include berguna untuk menyalin seluruh isi data dari iostream ke dalam file kita ini
// 'iostream' berarti 'input-output-stream'
// merupakan standard library yang sering digunakan
#include <iostream>

/* single/multi line comment*/

// main di bawah bisa kita analogikan sebagai entry
// sistem akan/harus mengeksekusi main ketika program pertama kali dijalankan
// main diibaratkan sebagai pintu masuk ke dalam sebuah aplikasi

int main()
{   // yang ada di dalam kurung kurawal ini disebut body atau badan atau isi dari sebuah fungsi
    // berikutnya kita akan menjelaskan baris kode ini satu per satu

    std::cout << "Halo dunia!" << std::endl;
    std::cin.get();
    return 0;
}

// std -> standard library yang berasal dari iostream ketika kita mengimportnya
// cout -> console out -> memerintah fungsi agar menampilkan atau mengeluarkan ke konsole
// lalu, apa yang dikeluarkan?
// sebelum teks string, terdapat simbol << yang artinya memasukkan string tersebut ke fungsi cout
// sehingga string tersebut akan tampil di console
// endl -> menunjukkan akhir alirannya atau akhir streamnya

// jika kita tidak menggunakan #include <iostream>, maka kita tidak akan bisa menggunakan fungsi 'std'nya

// hasil program yang kita buat di sini disebut source kode
// untuk menjalankan source codenya, kita perlu menggunakan compiler terlebih dahulu menjadi sebuah file yang bisa kita jalankan
