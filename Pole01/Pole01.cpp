// Pole01.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

int main()
{
    int pole[10];
    int n;
    cout << "Zadej pocet prvku posloupnosti, maximalne 10: ";
    cin >> n;
    cout << "Zadavej cela cisla: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> pole[i];
        
    }
    bool jeRostouci = true;
    for (int i = 1; i < n; i++)
    {
        if (pole[i] <= pole[i - 1])
        {
            jeRostouci = false;
        }
    }
    if (jeRostouci)
    {
        cout << "\nAno pole je rostouci";
    }
    else
    {
        cout << "Pole neni rostouci" << endl;
    }
}

