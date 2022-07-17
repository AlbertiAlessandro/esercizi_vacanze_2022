#include <iostream>
#include <cmath>

using namespace std;


struct Coordinate{
    int x;
    int y;
};

float distanza(Coordinate a, Coordinate b, Coordinate c){
    float distanza_a_b = (((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
    float distanza_b_c = (((b.x - c.x) * (b.x - c.x)) + ((b.y - c.y) * (b.y - c.y)));
    float distanza_a_c = (((a.x - c.x) * (a.x - c.x)) + ((a.y - c.y) * (a.y - c.y)));
    distanza_a_b = sqrt(distanza_a_b);
    distanza_b_c = sqrt(distanza_b_c);
    distanza_a_c = sqrt(distanza_a_c);
    float perimetro = distanza_a_b + distanza_b_c + distanza_a_c;
    return perimetro;
}


int main(){
    Coordinate a, b, c;
    cout <<"Inserisci delle coordinate che formino un triangolo!!" << endl;
    cout << "Inserisci le prime coordiante: " << endl;
    cin >> a.x;
    cin >> a.y;
    cout << "Inserisci le seconde coordiante: " << endl;
    cin >> b.x;
    cin >> b.y;
    cout << "Inserisci le terze coordiante: " << endl;
    cin >> c.x;
    cin >> c.y;
    cout << "PERIMETRO DEL TRIANGOLO: " << endl;
    cout << distanza(a, b, c) << endl;


}