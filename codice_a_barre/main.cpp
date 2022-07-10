#include <iostream>
#include <ctime>

using namespace std;


int cifra_di_controllo(int v[]){
    int somma_pari = 0, somma_dispari = 0;
    int somma_totale;
    for (int i = 1; i < 12 + 1; ++i) {
        if (i % 2 != 0){
            v[i] = v[i] * 3;
            somma_dispari += v[i];
        }
        else
            somma_pari += v[i];
    }
    somma_totale = somma_pari + somma_dispari;
    somma_totale = somma_totale % 10;
    return somma_totale;
}

int main() {
    srand(time(NULL));
    const int CIFRE = 12;
    int v[CIFRE];
    for (int i = 0; i < 12; ++i) {
        v[i] = rand()%10;
    }
    cout << cifra_di_controllo(v);

    return 0;
}
