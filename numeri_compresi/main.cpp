#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    const int MAX = 10, NUMERI = 100;
    int v[MAX];
    int contenuti[NUMERI];
    int n, massimo, minimo, conta = 0;
    cout <<"Quanti numeri vuoi inserire: " << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        v[i] = rand()% 100 + 1;
    }
    cout <<"I numeri sono stati inseriti in modo causale" << endl;
    cout <<"Adesso inserisci un valore minimo e uno massimo" << endl;
    cin >> minimo;
    cin >> massimo;
    for (int i = 0; i < n; ++i) {
        if (v[i] > minimo and v[i] < massimo){
            conta++;
            contenuti[i] = v[i];
        }
    }
    cout <<"Sono " << conta << " i numeri compresi tra " << minimo <<" e " << massimo << endl;
    cout <<"Ecco quali sono questi numeri: " << endl;
    for (int i = 0; i < conta; ++i) {
        cout << contenuti[i] << " ";
    }
    return 0;
}
