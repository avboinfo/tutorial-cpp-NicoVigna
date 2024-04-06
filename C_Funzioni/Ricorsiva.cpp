/*
Vignali Nicolò
esercizio
Scrivere una funzione ricorsiva C++ che, assegnati due interi n ed m,
restituisca la somma di tutti gli elementi compresi tra n ed m
*/

//le funzioni ricorsive richiamano loro stesse, bisogna sempre fare attenzione a non riempire lo stack
#include <iostream>

using namespace std;

int FunzioneRicorsiva(int n, int m)
{
    if (n > m)
    {
        return 0;
    }
    else
    {
        return n + FunzioneRicorsiva(n + 1, m);
    }
}

int main()
{
    int n = 5;
    int m = 10;
    cout << "risultato somma dei numeri compresi tra n ed m: " << FunzioneRicorsiva(n, m) << endl;
}