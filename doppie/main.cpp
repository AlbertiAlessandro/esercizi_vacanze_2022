#include <iostream>

using namespace std;

int main() {
    string parola;
    int conta = 0;
    char doppie;
    cout <<"Inserisci una parola: " << endl;
    cin >> parola;
    cout <<"Lettere doppie: " << endl;
    for(int i = 0; i < parola.size() - 1; ++i){
        if(parola.at(i) == parola.at(i + 1)){
            conta++;
            doppie = parola.at(i);
            cout << doppie << endl;
        }
    }
    cout << "Numero di doppie: " << conta << endl;


    return 0;
}
