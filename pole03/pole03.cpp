// pole03.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

int main()
{
    int n, pole[10], min{ INT32_MAX };
    bool jeMensiPrvek = false;
    cout << "\nZadejte pocet prvku posloupnosti, maximalne 10: ";
    cin >> n;
    cout << "\nZadavejte prvky posloupnosti navzajem ruznych celych cisel:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> pole[i];
    }
    for (int i = 0; i < n ; i++)
    {
        if (pole[i] > pole[n - 1] && pole[i] < min)
        {
            min = pole[i];
            jeMensiPrvek = true;
        }

    }
    if (jeMensiPrvek)
    {
        cout << "\nMinumum vetsi nez posledni prvek je: " << min;
    }
    else
    {
        cout << "\nNevyhovuje zadny prvek";
    }
  
}

