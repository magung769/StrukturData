#include <iostream>
#include <conio.h>

#define true 1
#define false 0

using namespace std;

int main()
{
	int larik[] = { 23,2,5,9,33,14,66,70,15,55,0,8,13,99,100 };
	int  ia = 0, ib = 14, k, x;
	bool ketemu;
	ketemu = false;


	cout << "masukan data yang ingin dicari : ";
	cin >> x;
	while (!ketemu && ia <= ib)
	{
		k = (ia + ib) / 2;
		if (larik[k] == x) {
			ketemu = true;
		}
		else
		{
			if (larik[k] < x) {
				ia = k + 1;
			}
			else {
				ib = k - 1;
			}
		}
	}

	if (ketemu) {
		cout << "data ditemukan pada posisi : " << k;
	}
	else {
		cout << "data tidak ditemukan";
	}
	return 0;
}