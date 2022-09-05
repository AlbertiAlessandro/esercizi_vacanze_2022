#include <iostream>
#include <ctime>

using namespace std;

void inserisci(int v[], int lunghezza){
    for (int i = 0; i < lunghezza; ++i) {
        cout <<"Inserisci numero " << i + 1 << endl;
        cin >> v[i];
    }
    for (int i = 0; i < lunghezza; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void scambia(int v[], int lunghezza, int n){
    cout <<"Quanti numeri vuoi modificare: " << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        v[i] = rand()%10+1;
    }
    cout <<"Vettore modificato: " << endl;
    for (int i = 0; i < lunghezza; ++i) {
        cout << v[i] << " ";
    }
}

int main() {
    srand(time(NULL));
    const int NUMERI = 100;
    int v[NUMERI];
    int lunghezza, n;
    cout <<"Quanti numeri vuoi inserire nel vettore: " << endl;
    cin >> lunghezza;
    inserisci(v, lunghezza);
    scambia(v, lunghezza, n);

    return 0;
}
