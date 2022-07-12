#include <iostream>

using namespace std;

bool primo(int n){
    int conta = 1;
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0){
            conta++;
        }
    }
    if (conta == 1){
        return true;
    }
    else
        return false;
}

int main() {
    int n;
    cout <<"Inserisci un numero: " << endl;
    cin >> n;
    if (primo(n)){
        cout << n << " è un numero primo!" << endl;
    }
    else
        cout << n << " non è un numero primo!" << endl;


    return 0;
}
