#include <iostream>
#include <conio.h>

using namespace std;

int a;
int* b;

void input()
{
    cout << "Masukan nilai pertama : ";
    cin >> a;
}

void output()
{
    cout << "\nNilai pertama : " << a;
    cout << "\n\nAlamat nilai pertama : " << &a;
    b = &a;
    cout << "\n\nIsi nilai kedua : " << b;
    cout << "\n\nAlamat nilai kedua : " << &b << endl;
}

int main()
{
    input();
    output();
    return 0;
}



