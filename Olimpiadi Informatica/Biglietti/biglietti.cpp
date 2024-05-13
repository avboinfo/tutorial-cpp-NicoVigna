#include <stdio.h>
#include <assert.h>

int compra(int N, int M, int A, int B) {
    int NCarnet = 0;
    int totale, costo;
    int NBiglietti=0;
  



    while (N > 0) {
        totale = N * A;
        if (totale > B) {
            N -= M;
            NCarnet++;
        } else {
            NBiglietti = N;
            N = 0;
        }
    }

    costo = (NCarnet * B) + (NBiglietti * A);
    return costo;
}

int main() {
    FILE *fr, *fw;
    int N, M, A, B;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");

    assert(4 == fscanf(fr, "%d%d%d%d", &N, &M, &A, &B));

    fprintf(fw, "%d\n", compra(N, M, A, B));
    fclose(fr);
    fclose(fw);
    return 0;
}
