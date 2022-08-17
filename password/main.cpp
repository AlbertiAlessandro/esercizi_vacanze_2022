#include <iostream>

using namespace std;


int main() {
    const int TENTATIVI = 3;
    int pin, conta_tentativi = 0, prova, tentativo = 3;
    cout <<"Inserisci un codice di 4 numeri: " << endl;
    cin >> pin;
    cout <<"TELEFONO DA SBLOCCARE" << endl;
    cout <<"HAI A DISPOSIZIONE 3 TENTATIVI" << endl;
    while (conta_tentativi < TENTATIVI and prova != pin){
        cout <<"Inserisci un codice di 4 cifre" << endl;
        cin >> prova;
        tentativo--;
        if (prova != pin){
            conta_tentativi++;
            cout <<"Pin sbagliato!" << endl;
            cout <<"Hai ancora a disposizione " << tentativo << " tentativi!" << endl;
        }
    }
    if (prova == pin){
        cout <<"Ottimo hai sbloccato il tuo telefono!" << endl;
    }
    if (conta_tentativi == 3){
        cout <<"Hai sbagliato tutti i tuoi tentativi a disposizione" << endl;
    }




    return 0;
}
