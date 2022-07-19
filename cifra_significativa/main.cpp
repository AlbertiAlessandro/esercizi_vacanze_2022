#include <iostream>

using namespace std;

int cifra(int n){
    while (n > 10){
        n = n / 10;
    }
    return n;
}

int main() {
    int n, m;
    cout <<"Inserisci due numeri: " << endl;
    cin >> n;
    cin >> m;
    if (cifra(n * m) < cifra(n + m)){
        cout << "La cifra significativa del prodotto è minore rispetto a quella della somma" << endl;
    }
    else
        cout << "La cifra significativa del prodotto è maggiore rispetto a quella della somma" << endl;

    return 0;
}
