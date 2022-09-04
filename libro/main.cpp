#include <iostream>

using namespace std;

struct Libro{
    int codice;
    int n_pagine;
    int costo;
};

void inserisci_libro(Libro &l){
    cout <<"Inserisci il codice del libro: " << endl;
    cin >> l.codice;
    cout <<"Inserisci il numero di pagine del libro: " << endl;
    cin >> l.n_pagine;
    cout <<"Inserisci il costo del libro: " << endl;
    cin >> l.costo;
}

void stampa_libro(Libro l){
    cout <<"Codice: " << l.codice << endl;
    cout <<"Pagine: " << l.n_pagine << endl;
    cout <<"Costo: " << l.costo << endl;
}

void confronta(Libro &a, Libro &b){
    if (a.costo / a.n_pagine > b.costo / b.n_pagine){
        Libro c = a;
        a = b;
        b = c;
    }
}

int main() {
    Libro a, b, c;
    cout <<"1° LIBRO: " << endl;
    inserisci_libro(a);
    cout <<"2° LIBRO: " << endl;
    inserisci_libro(b);
    cout <<"3° LIBRO: " << endl;
    inserisci_libro(c);
    confronta(a,b);
    confronta(a,c);
    confronta(b, c);
    stampa_libro(a);
    stampa_libro(b);
    stampa_libro(c);

    return 0;
}
