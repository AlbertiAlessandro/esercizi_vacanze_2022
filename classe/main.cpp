#include <iostream>

using namespace std;

int main() {
    int voti;
    float voto;
    float media = 0;
    int voti_insufficienti = 0;
    for (int i = 0; i < 10; ++i) {
        cout <<"ALUNNO " << i + 1 << endl;
        cout <<"Quanti voti hai?" << endl;
        cin >> voti;
        for (int j = 0; j < voti; ++j) {
            cout <<"Inserisci voto " << j + 1 << endl;
            cin >> voto;
            media += voto;
            if (voto < 6){
                voti_insufficienti++;
            }
        }
        cout << "Media: " << media / voti << endl;
        cout <<"Hai preso " << voti_insufficienti << " insufficienze" << endl;
        media = 0;
        voti_insufficienti = 0;
    }

    return 0;
}
