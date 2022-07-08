#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n;
    ifstream in("Alfa.txt");
    if (!in){
        cout <<"Errore nell'apertura del file" << endl;
        return 1;
    }
    ofstream out("Beta.txt");
    if (!out){
        cout <<"Errore nell'apertura del file" << endl;
        return 2;
    }
    cout <<"Inserisci un numero: " << endl;
    cin >> n;
    int numeri;
    in >> numeri;
    int v[numeri];
    for (int i = 0; i < numeri; ++i) {
        in >> v[i];
    }
    for (int i = 0; i < numeri; ++i) {
        out << v[i] <<" ";
        if (n > v[i] and n < v[i + 1]){
            out << n <<" ";
        }
    }




    return 0;
}
