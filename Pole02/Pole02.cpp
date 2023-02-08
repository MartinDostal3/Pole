// Pole02.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nZadejte pocet prvku n-prvkove posloupnosti, nejvice 10: ";
    cin >> n;
    char pole[10];
    cout << "\nZadavej prvky n-prvkove posloupnosti: \n";
    for (int i = 0; i < n; ++i)
    {
        cin >> pole[i];
    }
    bool rovnajiSe = false;
    for (int i = 0; i < n ; i++)
    {
        for (int j = i + 1; j < n && !rovnajiSe; j++)
        {
            if (pole[i] == pole[j]) 
            {
                rovnajiSe = true;
            }
        }
    }

    if (rovnajiSe)
    {
        cout << "\nAno nektere prvky v poli se rovnaji" << endl;
    }
    else
    {
        cout << "\nNe zadny prvek se nerovna s jinym prvkem" << endl;
    }
}

