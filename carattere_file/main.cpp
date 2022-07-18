#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char carattere;
    ifstream in("testo.txt");
    if (!in){
        cout <<"Errore nell'apertura del file" << endl;
        return 1;
    }
    cout << "Inserisci un carattere da contare nel file: " << endl;
    cin >> carattere;
    string temp;
    int conta = 0;
    while (getline(in,temp)){
        for (int i = 0; i < temp.size(); ++i) {
            if (carattere == temp.at(i)){
                conta++;
            }
        }
    }
    cout << carattere << " è contenuto " << conta <<" volte nella frase" << endl;
    in.close();


    return 0;
}
