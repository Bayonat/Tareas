#include <iostream>
#include <queue>


using namespace std;

bool verificarOrdenCola(queue<int>& cola) {

    bool MayorAMenor = true;
    bool MenorAMayor = true;


    int val1 = cola.front();
    cola.pop();

    while (!cola.empty()) {
        int val2 = cola.front();
        cola.pop();

        if (val2 > val1) {
            MenorAMayor = false;
        } else if ( val2 < val1) {
            MayorAMenor= false;
        }

        val1 = val2;
    }

        if (cola.empty()) {
        MayorAMenor = true;
        MenorAMayor = true;
    }


    return MayorAMenor || MenorAMayor;
}


int main() {
    queue<int> cola;

    cola.push(0);
    cola.push(1);
    cola.push(3);
    cola.push(3);
    cola.push(4);
    cola.push(5);


    return 0;
}
