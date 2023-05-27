#include <iostream>
#include <string>
#include <map>
#include <list>

using namespace std;

map<char, list<int>> obtenerPosicionesOcurrencias(const string& cad) {
    map<char, list<int>> mapa;

    for (int i = 0; i < cad.length(); ++i) {
        char caracter = cad[i];
        mapa[caracter].push_back(i);
    }

    return mapa;
}

int main() {
    string cad = "abcdfg";
    map<char, list<int>> mapa = obtenerPosicionesOcurrencias(cad);



//
   // for (const auto& par : mapa) {
   //     cout << "Clave: " << par.first << ", Valores: ";
   //     for (const auto& valor : par.second) {
   //         cout << valor << " ";
   //     }
   //     cout << endl;
   // }
//
    return 0;
}
