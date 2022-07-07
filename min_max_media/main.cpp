#include <iostream>

using namespace std;

int main() {
    const int MAX = 100;
    int v[MAX];
    int n;
    int max = 0, min = 10000;
    float media = 0;
    cout <<"Quanti numeri vuoi inserire nel vettore?" << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout <<"Inserisci numero " << i + 1 << endl;
        cin >> v[i];
        media += v[i];
    }
    for (int i = 0; i < n; ++i) {
        if (v[i] > max){
            max = v[i];
        }
        if (v[i] < min){
            min = v[i];
        }
    }
    media = media / n;
    cout <<"Il numero massimo è " << max << endl;
    cout <<"Il numero minimo è  " << min << endl;
    cout <<"La media è " << media << endl;


    return 0;
}
