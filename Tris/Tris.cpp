/*
se dentro griglia c'è 0 cella vuota
se in griglia c'è 1 stiamo parlando di una x(giocatore 1)
se in griglia c'è 2 stiamo parlando di un cerchio(giocatore 2)
*/

#include <iostream>
using namespace std;

class Tris
{
public:
    int griglia[3][3];

    void reset_tabella()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                griglia[i][j] = 0;
            }
        }
    }
    bool giocatore_uno(int x, int y)
    {
        if (x > 2 || x < 0)
            return false;

        if (y > 2 || y < 0)
            return false;

        if (griglia[x][y] == 1 || griglia[x][y] == 2)
            return false;

        griglia[x][y] = 1;
        return true;
    }

    bool giocatore_due(int x, int y)
    {
        if (x > 2 || x < 0)
            return false;

        if (y > 2 || y < 0)
            return false;

        if (griglia[x][y] == 1 || griglia[x][y] == 2)
            return false;

        griglia[x][y] = 2;
        return true;
    }

    void stampa_griglia()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << griglia[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    int x, y;
    bool mossa_valida;
    Tris myTris;
    myTris.reset_tabella();

    cout << "stato tabella iniziale!" << endl;
    myTris.stampa_griglia();

    do
    {
        cout << "mossa del giocatore 1" << endl;
        cout << "x: ";
        cin >> x;
        cout << "y: ";
        cin >> y;
        mossa_valida = myTris.giocatore_uno(x, y);
    } while (!mossa_valida);

    myTris.stampa_griglia();

    do
    {
        cout << "mossa del giocatore 2" << endl;
        cout << "x: ";
        cin >> x;
        cout << "y: ";
        cin >> y;
        mossa_valida = myTris.giocatore_due(x, y);
    } while (!mossa_valida);
    myTris.stampa_griglia();

    return 0;
}