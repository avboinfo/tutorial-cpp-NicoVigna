/*
** Matrice.cpp una classe definita da noi che spupazza
** la matrice come nessuno mai
** Vignali Nicolò
*/

#include <iostream>
using namespace std;

class Matrice
{
private:
    int m[10][10];

public:
    Matrice(int n)
    {
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                m[i][j] = n;
    }

    void stampa()
    {
        cout << endl
             << "---------------------------" << endl;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
                cout << m[i][j] << "\t";
            cout << endl;
        }
        cout 
             << "---------------------------" << endl;
    }
};

int main()
{
    Matrice m1(0);
    m1.stampa();
}