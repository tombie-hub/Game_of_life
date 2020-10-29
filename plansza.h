#ifndef PLANSZA_H
#define PLANSZA_H

#include <iostream>
#include "komorka.h"

using namespace std;

class plansza
{
    public:
        plansza();
        virtual ~plansza();

        void create();
        void setRozmiar(int);
        void dodajTrue(int,int);
        void wyswietlTab();
        void sprawdzSasiadow();
        void copyTab();
        void clearTab();

    private:

        int rozmiar;

        komorka ** tab1;
        komorka ** tab2;
};

#endif // PLANSZA_H
