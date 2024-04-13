#include <iostream>
#include "Coda.cpp"

using namespace std;

class UfficioPostale
{
private:
    Coda cR = Coda("ricezione",1000);
    Coda cS = Coda("spedizione",1000);
    Coda cF = Coda("finanziario",1000);
    string nome;
    int nR, nS, nF;

public:
    UfficioPostale(string nome)
    {
        this->nome = nome;
    }

    int nuovoCliente(char servizio)
    {
        switch (servizio)
        { // è come un if ma può indirizzare in più di due direzioni
        case 'r':
            cR.enter(nR++);
            break;

        case 's':
            cS.enter(nS++);
            break;

        case 'f':
            cF.enter(nF++);
            break;
        default:
            cout << "Questo servizio te lo fai da solo!!!!!!" << endl;
        }
        return 0;
    }
    void chiamaCliente(char servizio)
    {
        switch (servizio)
        { // è come un if ma può indirizzare in più di due direzioni
        case 'r':
            cR.exit();
            break;

        case 's':
            cS.exit();
            break;

        case 'f':
            cF.exit();
            break;
        default:
            cout << "Questo servizio non è previsto!!!!!!" << endl;
        }
    }
    void stampaTabellone()
    {
        cout << "Tabellone dell'ufficio postale" << nome << endl;
        cR.stampa();
        cF.stampa();
        cS.stampa();
    }
};
