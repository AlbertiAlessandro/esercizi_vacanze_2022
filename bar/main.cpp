#include <iostream>

using namespace std;

void menu(){
    cout <<"Cosa vuoi comprare oggi? " << endl;
    cout <<" 1) pastina (pas)" << endl;
    cout <<" 2) panino (pan)" << endl;
    cout << "3) pizzette (piz)" << endl;
    cout <<" 4) no (opzione se quel giorno non vuoi prendere niente al bar)" << endl;
}

int main() {
    int pas = 0, pan = 0, giorni = 0, pizzette = 0;
    int no_mangiato = 0;
    float soldi = 0;
    string risposta;
    cout <<"Quanti soldi vuoi avere oggi? " << endl;
    cin >> soldi;
    while (soldi > 0){
        menu();
        cin >> risposta;
        if (risposta == "pas"){
            giorni++;
            soldi -= 1;
            pas++;
        }
        else if (risposta == "pan"){
            giorni++;
            soldi -= 1.5;
            pan++;
        }
        else if (risposta == "piz"){
            giorni++;
            soldi -= 2;
            pizzette++;
        }
        else if (risposta == "no"){
            no_mangiato++;
        }
    }
    cout <<"Hai mangiato per " << giorni << " giorni! Mentre per " << no_mangiato << " giorni non hai mangiato!" << endl;
    cout <<"Hai mangiato " << pas <<" pastine" << endl;
    cout <<"Hai mangiato " << pan << " panini" << endl;
    cout <<"Hai mangiato " << pizzette << " pizzette" << endl;

    return 0;
}
