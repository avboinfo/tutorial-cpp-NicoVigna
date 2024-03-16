/*
** primo esercizio.cpp
** primo esercizio verifica 16/03/24
** Vignali Nicolò
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int RiempiMatrice(int matrice[10][10])
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        for (int l = 0; l < 10; l++)
        {
            matrice[i][l] = rand() % 100;
        }
    }
    return 0;
}
int StampaMatrice(int matrice[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int l = 0; l < 10; l++)
        {
            cout << matrice[i][l] << " ";
        }
        cout << endl;
    }
    return 0;
}
int RicercaNumero(int matrice[10][10], int NumUtente)
{
    int ContatoreDiagonale=0;
    int contatore = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int l = 0; l < 10; l++)
        {
            if (matrice[i][l] == NumUtente)
                contatore++;
        }
    }
    if (matrice[0][0] == NumUtente)
        ContatoreDiagonale++;
    if (matrice[1][1] == NumUtente)
        ContatoreDiagonale++;
    if (matrice[2][2] == NumUtente)
        ContatoreDiagonale++;
    if (matrice[3][3] == NumUtente)
        ContatoreDiagonale++;
    if (matrice[4][4] == NumUtente)
        ContatoreDiagonale++;
    if (matrice[5][5] == NumUtente)
        ContatoreDiagonale++;
    if (matrice[6][6] == NumUtente)
        ContatoreDiagonale++;
    if (matrice[7][7] == NumUtente)
        ContatoreDiagonale++;
    if (matrice[8][8] == NumUtente)
        ContatoreDiagonale++;
    if (matrice[9][9] == NumUtente)
        ContatoreDiagonale++;
    cout << "il numero da te selezionato è presente " << contatore << " volte" << endl;
    cout << "Il numero da te selezionato è presente " << ContatoreDiagonale << " volte nella diagonale principale" << endl;
    return 0;
}

int main()
{
    int matrice[10][10];
    int NumUtente;
    RiempiMatrice(matrice);
    StampaMatrice(matrice);
    cin >> NumUtente;
    RicercaNumero(matrice, NumUtente);
}
