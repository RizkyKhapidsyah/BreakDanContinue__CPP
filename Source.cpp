#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i;
	
	//Penggunaan 'break' dan 'continue' pada For
	cout << "Contoh 1: Penggunaan 'break' Pada Perulangan For" << endl;
	for ( i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}
	cout << "Selesai\n" << endl;
	/*###########################*/

	cout << "Contoh 2: Penggunaan 'continue' Pada Perulangan For" << endl;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			continue;		//Jika i sudah mencapai angka 5, maka lanjutkan perulangan dengan men-skip/lewati angka 5 tsb
		}
		cout << i << endl;
	}
	cout << "Selesai\n" << endl;

	/*###########################*/
	cout << "Contoh 3: Penggunaan 'break' Pada Perulangan While" << endl;
	i = 0;
	while (i <= 10)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
		i++;
	}
	cout << "Selesai\n" << endl;
	
	/*###########################*/
	cout << "Contoh 4: Penggunaan 'continue' Pada Perulangan While" << endl;
	i = 0;
	while (i <= 10)
	{
		i++;				//Increment i harus diletakkan sebelum kondisi, karena akan menyebabkan infinity looping yang tidak akan sampai ke akhir program.
		if (i == 5)
		{
			continue;
		}
		cout << i << endl;
	}
	cout << "Selesai\n" << endl;

	/*###########################*/
	cout << "Contoh 5: Penggunaan 'break' Pada Perulangan DoWhile" << endl;
	i = 0;
	do
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
		i++;
	} while (i <= 10);
	cout << "Selesai\n" << endl;

	/*###########################*/
	cout << "Contoh 6: Penggunaan 'continue' Pada Perulangan DoWhile" << endl;
	i = 0;
	do
	{
		i++;				//Increment i harus diletakkan sebelum kondisi, karena akan menyebabkan infinity looping yang tidak akan sampai ke akhir program.
		if (i == 5)
		{
			continue;
		}
		cout << i << endl;
	} while (i <= 10);
	cout << "Selesai\n" << endl;

	_getch();
	return 0;
}


