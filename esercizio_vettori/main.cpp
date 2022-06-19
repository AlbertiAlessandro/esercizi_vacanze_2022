#include <iostream>

using namespace std;

//Esercizio 20 pag. 176 libro di testo

int conta_valori(int v[], int n, int min, int max){
    int conta = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] > min and v[i] < max){
            conta++;
        }
    }
    return conta;
}

int main() {
    int min, max;
    int n;
    int N = 10;
    int v[N];
    cout <<"Inserisci il valore minimo: " << endl;
    cin >> min;
    cout <<"Inserisci il valore massimo: " << endl;
    cin >> max;
    cout <<"Quanti numeri vuoi inserire nel vettore: " << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout <<"Inserisci " << i + 1 <<" numero" << endl;
        cin >> v[i];
    }
    cout << conta_valori(v, n, min, max);


    return 0;
}
