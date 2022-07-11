#include <iostream>

using namespace std;

struct Frazione{
    int numeratore;
    int denominatore;
};

void prodotto(Frazione a, Frazione b){
    Frazione c;
    c.numeratore = a.numeratore * b.numeratore;
    c.denominatore = a.denominatore * b.denominatore;
    cout << c.numeratore << " / " << c.denominatore << endl;
}

void semplifica(Frazione a, Frazione b) {
    if (a.numeratore >= b.numeratore) {
        for (int i = 2; i < a.numeratore; ++i) {
            if (a.numeratore % i == 0 and a.denominatore % i == 0) {
                a.numeratore /= i;
                a.denominatore /= i;
            }
            if (b.numeratore % i == 0 and b.denominatore % i == 0) {
                b.numeratore /= i;
                b.denominatore /= i;
            }
        }
        cout << a.numeratore << " / " << a.denominatore << endl;
        cout << b.numeratore << " / " << b.denominatore << endl;
    }
    else if (a.numeratore <= b.numeratore){
        for (int i = 2; i < b.numeratore; ++i) {
            if (a.numeratore % i == 0 and a.denominatore % i == 0) {
                a.numeratore /= i;
                a.denominatore /= i;
            }
            if (b.numeratore % i == 0 and b.denominatore % i == 0) {
                b.numeratore /= i;
                b.denominatore /= i;
            }
        }
        cout << a.numeratore << " / " << a.denominatore << endl;
        cout << b.numeratore << " / " << b.denominatore << endl;
    }


}

int main() {
    Frazione a, b;
    cout << "Inserisci il numeratore della prima frazione: " << endl;
    cin >> a.numeratore;
    cout << "Inserisci il denominatore della prima frazione: " << endl;
    cin >> a.denominatore;
    cout << "Inserisci il numeratore della seconda frazione: " << endl;
    cin >> b.numeratore;
    cout << "Inserisci il denominatore della seconda frazione: " << endl;
    cin >> b.denominatore;
    cout << "PRODOTTO DELLE FRAZIONI: " << endl;
    prodotto(a, b);
    cout << "FRAZIONE SEMPLIFICATA: " << endl;
    semplifica(a, b);




    return 0;
}
