#include <iostream>

using namespace std;

int main()
{
    int angka[] = {};
    int jml;
    int i;
    int total=0;
    
    cout<< "Masukan angka: ";
    cin>>jml;
    for (i=0; i<jml; i++){
        cout<< "Angka ke- " << i+1 <<": ";
        cin>>angka[i];
        
        total += angka[i]; 
    }
        cout<<"\n JUMLAH NILAI: " << total;
        
    return 0;
}