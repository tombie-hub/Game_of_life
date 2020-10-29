#include <iostream>
#include "windows.h"

#include "plansza.h"

using namespace std;

int main()
{

    cout << "Podaj rozmiar planszy" << endl;
    int rozmiar;
    cin >> rozmiar;

    plansza p;
    p.setRozmiar(rozmiar);
    p.create();

    cout << "Podaj wartosci poczatkowe(x,y). Jezeli skonczysz podawac wartosci wpisz 99." << endl;
    int x,y;
    for(;;)
    {
        cin >> x >> y;
        if(x != 99 && y != 99)
        {
            if(x < rozmiar && y<rozmiar)
            {
            p.dodajTrue(x,y);
            }
            else
            {
                cout<<"wartosci musza byc mniejsze niz rozmiar!"<<endl;
            }
        }
        else
        {
            break;
        }
    }

    for(;;)
    {
    p.wyswietlTab();
    cout<<endl;
    p.sprawdzSasiadow();
    p.copyTab();
    p.clearTab();
    Sleep(1000);
    }

    return 0;
}
