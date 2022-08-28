#include <iostream>

using namespace std;

struct Casa{
    int metri_quadri;
    char classe_energetica;
    int costo;
};

int abitazioni(Casa a){
    int costo_uno;
    cout <<"Inserisci i metri quadri: " << endl;
    cin >> a.metri_quadri;
    cout <<"Inserisci la classe energetica (A,... F): " << endl;
    cin >> a.classe_energetica;
    cout <<"Inserisci il costo della casa: " << endl;
    cin >> a.costo;
    costo_uno = a.costo / a.metri_quadri;
    int costo_due;
    cout <<"Inserisci i metri quadri: " << endl;
    cin >> a.metri_quadri;
    cout <<"Inserisci la classe energetica (A,... F): " << endl;
    cin >> a.classe_energetica;
    cout <<"Inserisci il costo della casa: " << endl;
    cin >> a.costo;
    costo_due = a.costo / a.metri_quadri;
    int costo_tre;
    cout <<"Inserisci i metri quadri: " << endl;
    cin >> a.metri_quadri;
    cout <<"Inserisci la classe energetica (A,... F): " << endl;
    cin >> a.classe_energetica;
    cout <<"Inserisci il costo della casa: " << endl;
    cin >> a.costo;
    costo_tre = a.costo / a.metri_quadri;
    if (costo_uno > costo_due and costo_tre > costo_due){
        return costo_due;
    }
    else if (costo_due > costo_uno and costo_tre > costo_uno){
        return costo_uno;
    }
    else
        return costo_tre;
}

int main() {
    Casa appartamento;
    int costo_uno, costo_due, costo_tre;
    cout << abitazioni(appartamento);
    cout <<" ^ Questo è il minor costo al metro quadro della casa" << endl;



    return 0;
}
