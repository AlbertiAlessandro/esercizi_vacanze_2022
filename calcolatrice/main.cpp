#include <iostream>

using namespace std;

int main() {
    int n, m;
    int somma = 0, max, min, differenza, prodotto;
    float divisione;
    cout <<"Inserisci due numeri: " << endl;
    cin >> n;
    cin >> m;
    int scelta = 0;
    cout << "Inserisci la scelta che preferisci: " << endl;
    cin >> scelta;
    switch (scelta) {
        case 1:
            somma = m + n;
            cout << "La somma equivale a: " << somma << endl;
            break;
        case 2:
            if (n >= m){
                max = n;
                min = m;
            }
            else if (m >= n){
                max = m;
                min = n;
            }

            differenza = max - min;
            cout << "La differenza equivale a: " << differenza << endl;
            break;
        case 3:
            prodotto = n * m;
            cout <<"Il prodotto equivale a: " << prodotto << endl;
            break;
        case 4:
            if (n >= m){
                max = n;
                min = m;
            }
            else if (m >= n){
                max = m;
                min = n;
            }
            divisione = max / min;
            cout <<"la divisione equivale a: " << divisione << endl;
            break;
        case 5:
            cout <<"Inserisci altri due numeri: " << endl;
            cin >> n;
            cin >> m;
            break;
    }

    return 0;
}
