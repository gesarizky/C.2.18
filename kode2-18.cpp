/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/

#include <iostream>

using namespace std;

int main() {
  // Mendeklarasikan variabel Karakter 
  // dan mengisinya dengan nilai 'A'
  char Karakter = 'AJA'; // ketentuan hanya satu karakter

  // Mendeklarasikan variabel Teks 
  // dan mengisinya dengan nilai "Kata"
  char* Teks = (char*) "bisa karena belajar"; // ketentuan tidak dibatasi karakter
  char TEKS[10] = "karena"; // ketentuan hanya dibatasi 10 karakter
  cout<<Karakter<<endl;
  cout<<Teks<<endl;
  cout<<TEKS<<endl;

  return 0;
}
