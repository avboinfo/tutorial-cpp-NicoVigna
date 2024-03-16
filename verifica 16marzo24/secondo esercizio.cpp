/*
** primo esercizio.cpp
** primo esercizio verifica 16/03/24
** Vignali Nicolò
*/

#include <iostream>
using namespace std;

class Orario
{
public:
    int ore;
    int minuti;
    int secondi;

    Orario(int h, int m, int s)
    {
        if (ControlloOre(h) == 1)
            ore = h;
        else
        {
            cout << "dato  ore non compatibile";
            exit(1);
        }
        if (ControlloMinuti(m) == 1)
            minuti = m;
        else
        {
            cout << "dato minuti non compatibile";
            exit(1);
        }
        if (ControlloSecondi(s) == 1)
            secondi = s;
        else
        {
            cout << "dato secondi non compatibile";
            exit(1);
        }
    }

    int StampaOrario()
    {
        cout << ore << ":" << minuti << ":" << secondi << endl;
    return 0;
    }

    int SecondiDallaMezzanotte()
    {
        int SecondiMezzanotte;
        int MinutiMezzanotte;
        MinutiMezzanotte = ore * 60 + minuti;
        SecondiMezzanotte = MinutiMezzanotte * 60 + SecondiMezzanotte;
        return 0;
    }

    int DifferenzaOrari(int h, int m, int s)
    {
        int DifferenzaOre = ore - h;
        int DifferenzaMinui = minuti - m;
        int DifferenzaSecondi = secondi - s;
        cout << "la differenza delle ore è " << DifferenzaOre
             << " la differenza dei minuti è " << DifferenzaMinui
             << " la differenza dei secondi è di " << DifferenzaSecondi
             << endl;
             return 0;
    }

private:
    int ControlloOre(int h)
    {
        if (h < 24)
        {
            if (h >= 0)
                return 1;
        }
        else
            {return 0;}
        return 0;
    }
    int ControlloMinuti(int m)
    {
        if (m < 60)
        {
            if (m >= 0)
                return 1;
        }
        else
            {return 0;}
        return 0;
    }
    int ControlloSecondi(int s)
    {
        if (s < 60)
        {
            if (s >= 0)
                return 1;
        }
        else
            {return 0;}
        return 0;
    }
};

int main()
{
    Orario x(15,45,10);
    x.StampaOrario();
    x.SecondiDallaMezzanotte();
    x.DifferenzaOrari(10,40,6);
}