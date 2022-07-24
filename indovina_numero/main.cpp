#include <iostream>
#include <ctime>

using namespace std;


int main() {
    srand(time(NULL));
    int n = rand()% 100 + 1;
    int tentativo;
    int i = 0;
    int soldi = 50;
    int quantità_tentiviti;
    char l = 'a';
    while (l != 'n'){
        cout << "Quanti tentativi vuoi avere: " << endl;
        cin >> quantità_tentiviti;
        while (tentativo != n and i < quantità_tentiviti and soldi > 0){
            i++;
            cout <<"Inserisci tentativo " << i << endl;
            cin >> tentativo;
            if (tentativo > n){
                cout <<"Il numero inserito è PIU' GRANDE del numero da indovinare" << endl;
                soldi -= 5;
            }
            else if (tentativo < n){
                cout <<"Il numero inserito è PIU' PICCOLO del numero da indovinare" << endl;
                soldi -= 5;
            }
            else if (tentativo == n){
                cout << "CONGRATULAZIONI! HAI INDOVINATO IL NUMERO!!" << endl;
                soldi += 25;
            }
        }
        cout << "Vuoi continuare a giocare?" << endl;
        cout << "Per continuare a giocare premere una lettera qualsiasi tranne la n" << endl;
        cin >> l;
        if (l != 'n'){
            i = 0;
            cout << "ATTENZIONE! Hai ancora a disposizione " << soldi << " soldi" << endl;
            n = rand()% 100 + 1;
        }
        if (i == quantità_tentiviti and tentativo != n){
            cout << "Il numero da indovinare era: " << n << endl;
            cout << "Riprova! Sarai piu' fortunato" << endl;
        }
        if (soldi <= 0){
            cout <<"ATTENZIONE! Hai terminato i tuoi soldi a disposizione!!" << endl;
        }
    }

    return 0;
}
