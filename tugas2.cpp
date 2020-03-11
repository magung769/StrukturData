#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string judul[100];
    string penulis[100];
    string tahun[100];

    int x, z;

    system ("CLS");
    cout << "Data Buku" << endl << endl;
    
    cout << "Jumlah buku yang akan diinput : ";
    cin>> z;
    cout<<"\x";

    for(x=0; x<z; x++){
        cout<<"Buku ke- "<< x+1 <<endl;
        cout<<"\nJudul buku : ";
        getline(cin,judul[x]);
        cout<<"Penulis : ";
        getline(cin,penulis[x]);
        cout<<"Tahun Terbit : ";
        getline(cin,tahun[x]);
		cout<< endl << endl;
    }
    cout<< "Tampilan Data Semua Buku";
    for(x=0; x<z; x++){
        cout<<"\nBuku ke- "<<x+1 << endl;
        cout<<"\nJudul Buku : "<< judul[x] << endl;
        cout<<"\nPenulis : "<< penulis[x] << endl;
        cout<<"\nTahun Terbit : "<< tahun[x] << endl;
    }
return 0;
}