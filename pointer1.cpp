#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a[50];
    int i, n;

    cout << "Masukan jumlah nilai : ";
    cin >> n;

    for(i=0;i<n;i++)
    {
        cout << "\nMasukan nilai ke [" << i+1 << "] : ";
        cin >> a[i];
    }

    cout  << "\nTampilan Data Array melalui Pointer\n";

    for(i=0;i<n;i++)
    {
        cout << "\nNilai Index ke [" << i+1 << "] : " << a[i];
        cout << "\nAlamat Memori : " << &a[i] << endl;
    }

    return 0;
}

