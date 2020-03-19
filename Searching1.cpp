#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int larik[15] = { 23,2,5,9,33,14,66,70,15,55,0,8,13,99,100 };
	int i, x, posisi;

	cout << "data yang ingin dicari : ";
	cin >> x;

	i = 0;
	posisi = 0;

	while (i < 14 && larik[i] != x)
	{
		i++;
	}
	if (larik[i] != x)
		cout << "maaf data yang dicari tidak ada";
	else if (larik[i] == x)
	{
		posisi = i + 1;

		cout << "ketemu donk pada posisi ke :" << posisi;
	}
	return 0;
}