#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    const int MAX = 6;
    int v[MAX], minori[MAX], maggiori[MAX];
    int n, conta_minori = 0, conta_maggiori = 0;
    for (int i = 0; i < MAX; ++i) {
        v[i] = rand()% 100 + 1;
    }
    cout <<"Inserisci un numero: " << endl;
    cin >> n;
    for (int i = 0; i < MAX; ++i) {
        if (v[i] < n){
            conta_minori++;
            minori[i] = v[i];
        }
        else if (v[i] > n){
            conta_maggiori++;
            maggiori[i] = v[i];
        }
    }
    cout <<"Ci sono " << conta_minori <<" numeri minori di " << n << endl;
    cout <<"Ci sono " << conta_maggiori <<" numeri maggiori di " << n << endl;
    cout << "minori: ";
    for (int i = 0; i < conta_minori; ++i) {
        cout << minori[i] << " ";
    }
    cout << endl;
    cout <<"maggiori: ";
    for (int i = 0; i < conta_maggiori; ++i) {
        cout << maggiori[i] << " ";
    }
    cout << endl;

    return 0;
}
