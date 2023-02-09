// pole04.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	srand((unsigned)time(NULL));
	int kody[50];
	cout << "\nZadej pocet vygenerovanych znaku, maximalne 50: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		kody[i] = 65 + rand() % (90 - 65 + 1);

	}
	cout << "\nv poli kody je ulozeno : \n";
	for (int i = 0; i < n; ++i)
	{
		cout << "ASCII kod je: " << kody[i] << endl;
	}

	char znaky[100];
	for (int i = 0; i < n; ++i)
	{
		znaky[i] = kody[i];

	}
	cout << "\nv poli znaky je ulozeno : \n";
	for (int i = 0; i < n; ++i)
	{
		cout << "ASCII znak je: " << znaky[i] << " a jeho kod je: " << kody[i] << endl;
	}
	bool ssp = false;
	for (int i = 0; i < n; ++i)
	{
		if (znaky[i] > znaky[0] && znaky[i] < znaky[n - 1])
		{

			ssp = true;
			cout << "znak je: " << znaky[i] << " a poradi je " << i + 1 << endl;
		}


	}
	if (!ssp) cout << "\nzadny prvek nevyhovuje temto podminkam.\n";



	getchar();
	return 0;
}

