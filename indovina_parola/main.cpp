#include <iostream>

using namespace std;

string impiccato(string parola){
    string temp;
    for (int i = 0; i < parola.size(); ++i) {
        temp += "_";
    }
    return temp;
}

bool controllo_parola(string segreta, string &corrente, char lettera){
    bool trovata = false;
    for (int i = 0; i < segreta.size(); ++i) {
        if (segreta.at(i) == lettera){
            corrente.at(i) = lettera;
            trovata = true;
        }
    }
    return trovata;
}

int main() {
    const int MAX_ERRORI = 10;
    int conta_errori = 0;
    bool indovinata = false;
    string indovinare;
    cout <<"Inserisci la parola da indovinare: " << endl;
    cin >> indovinare;
    string corrente = impiccato(indovinare);
    string lettere_trovate;
    while (!indovinata and conta_errori < MAX_ERRORI){
        cout << corrente << endl;
        cout <<"Finora hai fatto " << conta_errori <<" errori" << endl;
        cout <<" e hai inserito le seguenti lettere: " << lettere_trovate << endl;
        cout <<"Inserisci una lettera: ";
        char lettera;
        cin >> lettera;
        lettere_trovate += lettera;
        lettere_trovate += ',';
        bool trovata = controllo_parola(indovinare, corrente, lettera);
        if (!trovata){
            conta_errori++;
            cout <<"Hai sbagliato letteta, prova con un'altra!" << endl;
        }
        if (indovinare == corrente){
            indovinata = true;
        }
    }



    return 0;
}
