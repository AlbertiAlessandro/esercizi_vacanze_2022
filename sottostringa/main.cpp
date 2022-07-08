#include <iostream>

using namespace std;

int sottostringa(string s1, string s2){
    int n = s1.find(s2, 0);
    return n;
}

int main() {
    string s1, s2;
    cout <<"Inserisci una parola o una frase: " << endl;
    getline(cin, s1);
    cout <<"Inserisci una parola o frase che vuoi cercare all'interno della frase precedente" << endl;
    getline(cin, s2);
    if (sottostringa(s1, s2) > 0){
        cout << s2 << " E' CONTENUTA in " << s1 << endl;
    }
    else
        cout << s2 << " NON E' CONTENUTA in " << s1 << endl;
    cout << sottostringa(s1, s2) << " -> posizione della parola cercata" << endl;

    return 0;
}
