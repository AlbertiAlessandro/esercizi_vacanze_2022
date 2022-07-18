#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in("input.txt");
    if (!in){
        cout <<"Errore nell'apertura del file" << endl;
        return 1;
    }
    ofstream out("vocali.txt");
    if (!out){
        cout <<"Errore nell'apertura del file" << endl;
        return 2;
    }
    ofstream out1("consonanti.txt");
    if (!out1){
        cout <<"Errore nell'apertura del file" << endl;
        return 3;
    }
    string temp;
    while (getline(in, temp)){
        for (int i = 0; i < temp.size(); ++i) {
            if(temp.at(i) == ' '){
                temp.erase(i, 1);
            }
        }
        for (int i = 0; i < temp.size(); ++i) {
            if (temp.at(i) == 'a' or temp.at(i) == 'e' or temp.at(i) == 'i' or temp.at(i) == 'o' or temp.at(i) == 'u'){
                out << temp.at(i) <<" ";
            }
            else
                out1 << temp.at(i) << " ";
        }
    }


    return 0;
}
