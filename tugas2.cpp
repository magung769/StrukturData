#include <iostream>
#include <conio.h>
using namespace std;

int main(){

	string judul[100];
	string penulis[100];
	string tahun[100];
	int i,n;

	cout << "Masukkan jumlah buku yang ingin di input : ";
	cin >> n;
	cin.ignore(1, '\n');

	for (i=0; i<n; i++){
		cout << "Buku " << i+1 << endl;
		cout << "Judul Buku   : ";
		getline(cin,judul[i]);
		cout << "Penulis      : ";
		getline(cin,penulis[i]);
		cout << "Tahun Terbit : ";
		getline(cin,tahun[i]);
		cout << endl << endl;
	}

	cout << "Menampilkan semua Buku\n\n";

	for (i=0; i<n; i++){
		cout << "Buku " << i+1 << endl;
		cout << "Judul Buku   : " << judul[i] << endl;
		cout << "Penulis      : " << penulis[i] << endl;
		cout << "Tahun Terbit : " << tahun[i] << endl << endl;
	}

	getch();
	return 0;
}