#include <iostream>
#include <fstream>
using namespace std;

const string FILENAME = "SortingArray.txt";

void stampaVettore(string v[], int l) {
    cout << endl;
    for (int i = 0; i < l; i++) cout << v[i] << "\n";
    cout << endl;
}

int bubbleSort(string v[], int l, int& numOp) {
    string tmp;
    for (int i = 0; i < l; i++) {
        bool alreadySorted = true;
        for (int j = 0; j < l - 1; j++) {
            if (v[j] > v[j + 1]) {
                alreadySorted = false;
                tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
                numOp++; // Incrementa il contatore delle sostituzioni
            }
        }
        if (alreadySorted) break;
    }
    return numOp;
}

int main() {
    ifstream f;
    f.open(FILENAME);
    if (f.fail()) {
        cout << "Il file di input non esiste";
        return -1;
    }

    int n;
    string s;
    for (n = 0; getline(f, s); n++)
        ;
    f.close();
    cout << "Il file di input contiene " << n << " righe" << endl;

    string vs[n];
    f.open(FILENAME);
    for (int i = 0; i < n; i++) getline(f, vs[i]);

    cout << "Vettore non ordinato:" << endl;
    stampaVettore(vs, n);

    int numOp = 0; // Contatore delle sostituzioni
    bubbleSort(vs, n, numOp);

    cout << "Vettore ordinato:" << endl;
    stampaVettore(vs, n);
    cout << "Eseguite " << numOp << " sostituzioni." << endl;

    return 0;
}
