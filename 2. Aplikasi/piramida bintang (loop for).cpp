#include <iostream>

using namespace std;

int main() {
	int i;
	
	cout << "input panjang pola: ";
	cin >> i;
	
	cout << "pola 1\n";
	
	for (int n = 1; n <= i; n++){
		for (int z = i; z > n; z--){
			cout << " ";
		}
		for (int q = 1; q <= (2 * n-1); q++){
			cout << "*";
		}
		cout << endl;
	} 
	 
	cout << "pola 2\n";
	
	for (int n = 1; n <= i; n++){
		for (int z = 1; z <= n; z++){
			cout << " ";
		}
		for (int q = i; q >= (2 * n - i); q--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "pola 3\n";
	
	for (int n = 1; n <= i; n++){
		for (int z = i; z > n; z--){
			cout << " ";
		}
		for (int q = 1; q <= (2 * n - 1); q++) {
			cout << "*";
		}
		cout << endl;
	}
	
	for (int n = 2; n <= i; n++){
		for (int z = 1; z < n; z++){
			cout << " ";
		}
		for (int q = i; q >= (2 * n - i); q--){
			cout << "*";
		}
		cout << endl;
	}
	
	system ("pause");
	return 0;
}
