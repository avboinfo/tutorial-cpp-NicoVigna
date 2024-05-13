#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, M, A, B;
    cin >> N >> M >> A >> B;

    // Calcola il costo minimo considerando l'acquisto di biglietti singoli o carnet
    int costo_minimo = min(N * A, (N / M) * B + (N % M) * A);

    cout << costo_minimo << endl;

    return 0;
}
