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

int main() {

    return 0;
}
