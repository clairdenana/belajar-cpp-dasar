#include <iostream>
#include <string>
#include <sstream>

using namespace std;
string formatRupiah(int totalUang);

int main(){
	int totalUang = 0;
	int jumlahUang;
	
	cout << "===== Kalkulator Pengeluaran Harian =====\n\n";
	cout << "Masukkan jumlah pengeluaran (tekan 0 jika selesai):Rp";
		cin >> jumlahUang;
	
	while (jumlahUang != 0) {
		totalUang = totalUang + jumlahUang;
		cout << "Masukkan jumlah pengeluaran (tekan 0 jika selesai):Rp";
		cin >> jumlahUang;
		 }
		
		cout << "Total pengeluaran kamu hari ini sebanyak:Rp" << formatRupiah(totalUang) <<endl;
		
		
	return 0;
}

string formatRupiah(int totalUang) {
    stringstream ss;
    ss << totalUang;
    
    string duit = ss.str();
    
    int posisi = duit.length() - 3;
    while (posisi > 0) {
        duit.insert(posisi, ".");  
        posisi -= 3;
    }
    return duit;
}
