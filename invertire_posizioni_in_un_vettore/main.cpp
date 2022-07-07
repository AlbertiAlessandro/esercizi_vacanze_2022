#include <iostream>

using namespace std;

//es. 18 pag. 176

void inverti_posizioni(int v[], int n){
    for (int i = 0; i < n; ++i) {
        v[i] = v[i + 1];
        v[n] = v[0];
    }
    for (int i = 0; i < n; ++i) {
        cout << v[i] <<" ";
    }
}

int main() {
    const int MAX = 100;
    int v[MAX], n;
    cout <<"Quanti numeri vuoi inserire nel vettore?" << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout <<"Inserisci numero " << i + 1 << endl;
        cin >> v[i];
    }
    inverti_posizioni(v, n);

    return 0;
}
