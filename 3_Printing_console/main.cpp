// printing
// menampilkan data-data yang diperlukan ke console/terminal

#include <iostream> // menambahkan iostream

// latihan pendahuluan (#comment)

/*
Multi-line
comment
*/

// int main() // tanda kurung yang ada pada 'main' adalah tempat untuk memasukkan sebuah parameter/argument (opsional)
// setiap kali program main berjalan, maka ia akan mengeksekusi perintah yang ada di daldam kurung kurawal di bawah
// tanda kurung kurawal ini adalah body statement yang menyimpan banyak statement di dalamnya
// {
//     // satu baris program yang ditulis disebut statement, setiap statement harus diakhiri dengan simbol titik koma (;)
//     std::cin.get();
//     std::cout << "Halo" << std::endl;
//     return 0;
// }

// penjelasan lengkap:
// std hanya bisa digunakan jika kita memanggil library iostream
// lalu, 2 tanda titik dua di belakangnya (::) berarti memanggil fungsi cout (console out) yang ada pada std-iostream
// (<<) disebut inception dan dibelakangnya ada sebuah kalimat/teks atau nilai yang akan dimasukkan ke dalam cout
// sehingga cout akan menampilkan nilai tersebut ke console
// endl juga berasal dari fungsi std dan iostream sehingga kita harus membuatnya dengan menambahkan 2 bauh titik dua
// dan satu baris itu jangan lupa diakhiri dengan titik kome (;)

// std::cin (console input) juga adalah fungsi yang berasal dari iostream
// tambahkan .get() adalah input yang akan dimasukkan oleh user

// return 0 berguna untuk mengembalikkan nilai ke fungsi main ketika program tidak ada yang error

int main()
{
    std::cout << "Halo\n";
    std::cout << "bandung" << std::endl;
    return 0;
}

// jika kita menghapus bagian endl pada baris pertama, maka outputnya akan berantakan karena mengira baris pertama belum berakhir
// sehingga teks yang ada pada baris kedua akan menempel ke baris pertama

// tapi ada cara lain jika kita ingin membuat baris baru
// tinggal tambahkan '\n' yang berarti newline pada teks di baris pertama