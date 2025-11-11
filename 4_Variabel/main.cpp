#include <iostream>

// variabel adalah konsep paling penting dalam C++

int main()
{
	// variable adalah sebuah wadah atau tempat untuk menaruh sebuah nilai atau data
	// ada juga yang namanya assignment, yaitu pernyataan sebuah variabel dengan nilainya

	// x = 10; // kita tidak bisa langsung membuat variabel atau melakukan assigment seperti ini
	// karena C++ tidak akan mengerti maksud dari perintah tersebut

	// maka dari itu kita perlu melakukan yang namanya 'deklarasi'
	int a = 1;
	// kita mendeklarasikan nilai 1 ke dalam variabel a yang bertipe integer (int)
	// jadi ketika membuat variabel maka kita perlu menambahkan tipe data dari variabel tersebut

	// kita bisa melihat isinya dengan perintah console out
	std::cout << a << std::endl;
	std::cin.get();
	return 0;
}