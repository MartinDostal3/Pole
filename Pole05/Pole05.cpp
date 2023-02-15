// Pole05.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL)); // nastavení generátoru náhodných čísel na aktuální čas

    int n = 0;
    cout << "Zadejte počet prvků pole, maximalne 10: ";
    cin >> n;

    int pole[10];
    for (int i = 0; i < n; i++)
    {
        pole[i] = rand() % 201 + 50; // náhodné generování čísel v intervalu 50..250
    }

    // vypsání původního pole
    cout << "Původní pole:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << pole[i] << " ";
    }
    cout << endl;

    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (pole[i] > pole[maxIndex])
        {
            maxIndex = i;
        }
        if (pole[i] <= pole[minIndex])
        {
            minIndex = i;
        }
    }

    // výměna maximálního a minimálního prvku
    int temp = pole[maxIndex];
    pole[maxIndex] = pole[minIndex];
    pole[minIndex] = temp;

    // vypsání výsledného pole
    cout << "Výsledné pole:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << pole[i] << " ";
    }
    cout << endl;

    return 0;
}

