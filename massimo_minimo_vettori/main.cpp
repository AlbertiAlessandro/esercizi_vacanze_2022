#include <iostream>

using namespace std;

void inserisci_numeri(int v[], int n){
    for (int i = 0; i < n; ++i) {
        v[i] = rand()%100+1;
        cout << v[i] << " ";
    }
    cout << endl;
}

void riordina_vettore(int v[], int n){
    for(int i = 0; i < n; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++){
            if(v[j] < v[min]){
                min = j;
            }
            int temp = v[min];
            v[min] = v[i];
            v[i] = temp;
        }
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    const int MAX = 10;
    int v[MAX], n;
    int massimo = 0, minimo = 101;
    int n_massimo, n_minimo;
    cout <<"Quanti numeri vuoi che inseriamo nel vettore?" << endl;
    cin >> n;
    inserisci_numeri(v, n);
    for (int i = 0; i < n; ++i) {
        if (v[i] > massimo){
            massimo = v[i];
            n_massimo = v[i];
        }
        if (v[i] < minimo){
            minimo = v[i];
            n_minimo = v[i];
        }
    }
    cout << endl;
    cout << "VETTORE ORDINATO: " << endl;
    riordina_vettore(v, n);
    cout << endl;
    cout << n_massimo <<" -> numero massimo contenuto nel vettore" << endl;
    cout << n_minimo <<" -> numero minimo contenuto nel vettore" << endl;

    return 0;
}
