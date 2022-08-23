#include <iostream>

using namespace std;

int main() {
    int ammalati;
    do {
        cout <<"Inserisci il numero di ammalati: " << endl;
        cin >> ammalati;
    } while (ammalati < 100);
    int guariti, giorni = 0;
    cout <<"Inserisci la percentuale di guarigione: " << endl;
    cin >> guariti;
    while (ammalati >= 100) {
        giorni++;
        ammalati = ammalati - (ammalati * guariti / 100);
        cout << "giorno " << giorni <<" --> ammalati " << ammalati << endl;
    }
    cout <<"Ci sono voluti " << giorni << " affinchè gli ammalati fossero meno di 100" << endl;


    return 0;
}
