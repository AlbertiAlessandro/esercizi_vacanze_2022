#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero_binario, numero_decimale;
    int potenza = 0;
    int cifra;
    cout << "Inserisci un numero binaro (solo 0 e 1): " << endl;
    cin >> numero_binario;
    while (numero_binario > 0){
        if (numero_binario % 10 != 0){
            numero_decimale += pow(2, potenza);
        }
        numero_binario /= 10;
        potenza++;
    }
    cout << numero_decimale << endl;

    return 0;
}
