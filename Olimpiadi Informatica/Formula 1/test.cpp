#include <iostream>
#include <vector>

using namespace std;

// input data
int N;
vector<int> H, V;

int main() {
    cin >> N;
    H.resize(N);
    for (int i = 0; i < N; i++)
        cin >> H[i];
    V.resize(N);
    for (int i = 0; i < N; i++)
        cin >> V[i];

    // Calcola il tempo totale per ciascun partecipante
    vector<int> total_time(N);
    for (int i = 0; i < N; i++) {
        total_time[i] = H[i] + V[i];
    }

    // Trova il partecipante con il tempo minimo
    int min_time = total_time[0];
    int winner = 0;
    for (int i = 1; i < N; i++) {
        if (total_time[i] < min_time) {
            min_time = total_time[i];
            winner = i;
        }
    }

    cout << "Il partecipante " << winner + 1 << " ha fatto il giro più veloce." << endl;
    cout << "Tempo totale: " << min_time << " secondi." << endl;

    return 0;
}
