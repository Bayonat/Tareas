#include <iostream>
#include <stack>
#include <list>

using namespace std;


stack<int> eliminarPosiciones(stack<int>& pila, list<int>& lista) {

    stack<int> temp;

    if (!pila.empty()) {

    for (list<int>::iterator it = lista.begin(); it != lista.end(); ++it) {
        int k = 0;

        while (*it != k) {

            int val = pila.top();
            //cout << val << endl;
            temp.push(val);
            pila.pop();

            k++;
        }

        pila.pop();

        while (!temp.empty()) {
            int val1 = temp.top();
            pila.push(val1);
            temp.pop();
        }
    }
    }

    return pila;

}



int main() {
    stack<int> pila;

    pila.push(5);
    pila.push(4);
    pila.push(3);
    pila.push(2);
    pila.push(1);
    pila.push(0);

    list<int> lista = {1,2,3};

    stack<int> pila2 = eliminarPosiciones(pila, lista);

    while (!pila2.empty()) {
        cout << pila2.top() << " ";
        pila2.pop();
    }

    return 0;
}
