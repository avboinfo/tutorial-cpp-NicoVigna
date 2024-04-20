/*
** BattleField.cpp una classe definita da noi che spupazza
** la BattleField come nessuno mai
** Vignali Nicolò
*/

#include <iostream>
#include "BattleField.cpp"
using namespace std;

class BattleShip
{
private:
    BattleField mappa;
    BattleField campo;

public:
    BattleShip()
    {
        mappa=BattleField(VOID);
        campo=BattleField(VOID);
        srand(time(NULL));
        campo.placeHorizontalShip(3);
        campo.placeVerticalShip(4);
        campo.placeVerticalShip(2);
        campo.placeHorizontalShip(5);
    }
    // DIM, SHIP, MISS, HIT, VOID
    void play()
    {
        // lancia 20 bombe a caso
        for (int i = 0; i < 20; i++)
        {
            int x = rand() % DIM;
            int y = rand() % DIM;
            if (campo.get(x, y) == HIT)
                continue;
            if (campo.get(x, y) == SHIP)
            {
                mappa.put(x, y, HIT);
                campo.put(x, y, HIT);
            }
            else
                mappa.put(x, y, MISS);
        }

        mappa.stampa();
        campo.stampa();
    }
};