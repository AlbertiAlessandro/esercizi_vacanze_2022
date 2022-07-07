#include <iostream>

using namespace std;

float scalar_product(float a[], float b[], int n){
    float prodotto, somma;
    for (int i = 0; i < n; ++i) {
        prodotto = a[i] * b[i];
        somma += prodotto;
    }
    return somma;
}


int main() {
    const int MAX = 10;
    float a[MAX], b[MAX];
    int n;
    cout <<"Quanti numeri vuoi inserire nei vettori?" << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout <<"Inserisci numero " << i + 1 << " per entrambi i vettori" << endl;
        cin >> a[i];
        cin >> b[i];
    }
    cout << scalar_product(a, b, n);

    return 0;
}
