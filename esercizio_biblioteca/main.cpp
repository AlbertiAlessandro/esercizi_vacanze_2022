#include <iostream>

using namespace std;

struct Biblioteca{
    int codice;
    string titolo;
    string autore;
    int anno_di_pubblicazione;
    string editore;
};

void menu(){
    cout <<"1) Aggiungi un nuovo libro alla collezione" << endl;
    cout <<"2) Visualizza l'elenco dei libri" << endl;
    cout <<"3) Visualizza informazioni relative a un libro inserendo un codice" << endl;
    cout <<"4) Visualizza informazioni relative a un libro inserendo il suo titolo" << endl;
}

void aggiungi_libro(Biblioteca l){
    cout <<"Inserisci il codice del libro: " << endl;
    cin >> l.codice;
    cout <<"Inserisci il titolo del libro: " << endl;
    getline(cin, l.titolo);
    cout <<"Inserisci l'autore del libro: " << endl;
    getline(cin, l.autore);
    cout <<"Inserisci l'anno di pubblicazione del libro: " << endl;
    cin >> l.anno_di_pubblicazione;
    cout <<"Inserisci l'editore del libro; " << endl;
    cin >> l.editore;
}

void visualizza_libri(Biblioteca l[], int n){
    for (int i = 0; i < n; ++i) {
        cout << i + 1 <<" libro" << endl;
        cout << l[i].codice << " " << l[i].titolo << " " << l[i].autore << " " << l[i].anno_di_pubblicazione <<" " << l[i].editore << endl;
    }
}

void visualizza_codice(Biblioteca l[], int n, int codice){
    for (int i = 0; i < n; ++i) {
        if (l[i].codice == codice){
            cout << l[i].titolo << " " << l[i].autore << " " << l[i].anno_di_pubblicazione <<" " << l[i].editore << endl;
        }
    }
}

void visualizza_titolo(Biblioteca l[], int n, string titolo){
    for (int i = 0; i < n; ++i) {
        if (l[i].titolo == titolo){
            cout << l[i].codice << " " << l[i].autore << " " << l[i].anno_di_pubblicazione <<" " << l[i].editore << endl;
        }
    }
}

int main() {
    int MAX = 20;
    Biblioteca libro[MAX];
    int scelta;
    int n_di_libri = 0;
    int codice;
    string titolo;
    menu();
    cout <<"Inserisci la scelta che preferisci" << endl;
    cin >> scelta;
    while (scelta != 0){
        switch (scelta) {
            case 1:
                aggiungi_libro(libro[n_di_libri]);
                n_di_libri++;
                break;
            case 2:
                visualizza_libri(libro, n_di_libri);
                break;
            case 3:
                cout <<"Inserisci il codice di un libro: " << endl;
                cin >> codice;
                visualizza_codice(libro, n_di_libri, codice);
                break;
            case 4:
                cout <<"Inserisci il titolo di un libro: " << endl;
                cin >> titolo;
                visualizza_titolo(libro, n_di_libri, titolo);
                break;
        }
        menu();
        cout <<"Inserisci la scelta che preferisci" << endl;
        cin >> scelta;
    }

    return 0;
}
