#include <iostream>
#include <fstream>
using namespace std;

const string FILENAME = "SortingArray.txt";

void stampaVettore(string v[], int l) {
    cout << endl;
    for (int i = 0; i < l; i++) cout << v[i] << "\n";
    cout << endl;
}

int partition(string v[], int start, int end, int& numOp) {
    string pivot = v[end];
    int i = start - 1;
    for (int j = start; j < end; j++) {
        if (v[j] <= pivot) {
            i++;
            swap(v[i], v[j]);
            numOp++; // Incrementa il contatore delle sostituzioni
        }
    }
    swap(v[i + 1], v[end]);
    numOp++; // Incrementa il contatore delle sostituzioni per l'ultima swap
    return i + 1;
}

void quickSort(string v[], int start, int end, int& numOp) {
    if (start < end) {
        int p = partition(v, start, end, numOp);
        quickSort(v, start, p - 1, numOp);
        quickSort(v, p + 1, end, numOp);
    }
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
    quickSort(vs, 0, n - 1, numOp);

    cout << "Vettore ordinato:" << endl;
    stampaVettore(vs, n);
    cout << "Eseguite " << numOp << " sostituzioni." << endl;

    return 0;
}