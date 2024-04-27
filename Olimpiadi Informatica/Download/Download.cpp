#include <string>
#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main() {
    freopen("DownloadInput.txt", "r", stdin);
    freopen("DownloadOutput.txt", "w", stdout);

    int T, t;
    cin >> T;

    for (t = 1; t <= T; t++) {
        int N, F, C;
        
        // scrivi in queste variabili la risposta
        int nf=0, nc=0;

        cin >> N >> F >> C;
        //N capacità hard disk, F dim filmati, C dim canzoni
       nf=N/F;
       nc=N%F/C;

        cout << "Case #" << t << ": " << nf << " " << nc << endl;
    }
}