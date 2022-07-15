#include <iostream>

using namespace std;


int main() {
    string frase;
    int conta_vocali = 0, conta_consonanti = 0;
    cout <<"Inserisci una frase: " << endl;
    getline(cin, frase);
    for(int i = 0; i < frase.size(); ++i){
        if(frase.at(i) == ' '){
            frase.erase(i, 1);
        }
    }
    for (int i = 0; i < frase.size(); ++i) {
        if (frase.at(i) == 'a' or frase.at(i) == 'e' or frase.at(i) == 'i' or frase.at(i) == 'o' or frase.at(i) == 'u'){
            conta_vocali++;
        }
        else
            conta_consonanti++;
    }
    cout <<" Numero vocali: " << conta_vocali << endl;
    cout <<" Numero consonanti: " << conta_consonanti << endl;

    return 0;
}
