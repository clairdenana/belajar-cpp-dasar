#include <iostream>
using namespace std;

int main() {
	int nilai;
	char ulang;
	
	do {
		cout << "=== CEK NILAI ===" << endl;
		cout << "Masukkan nilai: ";
		cin >> nilai;
		
		if (nilai >= 85 && nilai <= 100 )
		{ 
			cout << "\nSelamat! Nilai kamu A! ~(>w<)~";
		}
		else if (nilai >= 70 && nilai <= 84)
		{
			cout << "\nBagus! Nilai kamu B! \\(^-^)/";
		}
		else if (nilai >= 40 && nilai <= 69)
		{
			cout << "\nNilai kamu C, tidak apa-apa, tetap semangat ya! <3";
		}
		else if (nilai >= 20 && nilai <= 39)
		{
			cout << "\nNilai kamu D :( Terus belajar ya ^-^";
		}
		else 
		{
			cout << "\nAduh, nilai kamu E (T-T). Jangan nyerah ya! (9 >-<)9";
		}
		cout << "\n\nApakah kamu ingin melakukan pengecekkan lagi? (y/n): ";
		cin >> ws >> ulang;
	} while (ulang == 'y' || ulang == 'Y' );
	
		cout << "\nKamu telah selesai :D";
	
	return 0;
}
