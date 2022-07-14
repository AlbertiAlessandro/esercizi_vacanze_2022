#include <iostream>

using namespace std;

int conta_lettere(string s, string p){
    int conta = 0;
    for (int i = 0; i < s.size(); ++i) {
      for (int j = 0; j < p.size(); ++j) {
          if (s.at(i) == p.at(j)){
              conta++;
          }
      }
    }
    return conta;
}

int main() {
    string prima_parola, seconda_parola;
    cout <<"Inserisci due parole: " << endl;
    cin >> prima_parola;
    cin >> seconda_parola;
    cout << "Le due parole hanno in comune " << conta_lettere(prima_parola, seconda_parola) << " lettere" << endl;

    return 0;
}
