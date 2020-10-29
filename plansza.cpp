#include "plansza.h"

plansza::plansza():
    rozmiar(0)
{
}

plansza::~plansza()
{
    //dtor
}

void plansza::setRozmiar(int r)
{
    rozmiar = r;
}

void plansza::create()
{
    tab1 = new komorka *[rozmiar+2];

    for(int i=0; i < rozmiar+2; i++)
    {
        tab1[i] = new komorka [rozmiar];
        tab2[i] = new komorka [rozmiar];
    }

    for(int i = 0; i < rozmiar + 2; i++)
    {
        for(int j = 0; j < rozmiar + 2; j++)
        {
            tab1[i][j] = komorka();
            tab2[i][j] = komorka();
        }
    }
}

void plansza::dodajTrue(int x,int y)
{
    tab1[x+1][y+1].setStan(true);
}


void plansza::wyswietlTab()
{
    for(int i = 1; i <= rozmiar; i++)
    {
        for(int j = 1; j <= rozmiar; j++)
        {
            if(tab1[i][j].getStan() == true)
            {
                cout<<"x ";
            }
            else
            {
                cout<<"o ";
            }
        }
        cout<<endl;
    }
}

void plansza::sprawdzSasiadow()
{
    int t = 0;

    for(int i = 1; i <= rozmiar; i++)
    {
        for(int j = 1; j <= rozmiar; j++)
        {
            for(int x = i-1; x <= i+1 ;x++)
            {
                for(int y = j-1; y <= j+1; y++)
                {
                    if(!(x==i && y ==j))
                    {
                        if( tab1[x][y].getStan() == true)
                        {
                            t++;
                        }
                    }

                }
            }
            if(t == 3)
            {
                tab2[i][j].setStan(true);
            }
            else if ( t == 2 && tab1[i][j].getStan() == true)
            {
                tab2[i][j].setStan(true);
            }
            else if(t <= 2 || t > 3)
            {
                tab2[i][j].setStan(false);
            }
            t = 0;
        }
    }
}

void plansza::copyTab()
{
 for(int i = 0; i < rozmiar+2; i++)
    {
        for(int j = 0; j < rozmiar+2; j++)
        {
            tab1[i][j] = tab2[i][j];
        }
    }
}

void plansza::clearTab()
{
    for(int i = 0; i < rozmiar + 2; i++)
    {
        for(int j = 0; j < rozmiar + 2; j++)
        {
            tab2[i][j].setStan(false);
        }
    }
}
