#include <iostream>
#include <list>
#include <stack>

using namespace std;

int evaluarExpresion(list<char>& expresion) {
    stack<int> numeros;
    stack<char> operadores;

    for (char elemento : expresion) {
    
        if (elemento >= '0' && elemento <= '9') {
            numeros.push(elemento-'0');
    
        } else if (elemento == '(' || elemento == '+' || elemento == '-' || elemento == '*') {
            operadores.push(elemento);

    
        } else if (elemento == ')') {
            while (operadores.top() != '(') {
                int num2 = numeros.top();
                numeros.pop();
                int num1 = numeros.top();
                numeros.pop();

                char operador = operadores.top();
                operadores.pop();

                int resultado;
                if (operador == '+') {
                    resultado = num1 + num2;
                } else if (operador == '-') {
                    resultado = num1 - num2;
                } else if (operador == '*') {
                    resultado = num1 * num2;
                }
                numeros.push(resultado);
            }
            operadores.pop();
        }
    }

    return numeros.top();
}

int main() {
    list<char> expression = {'(', '4', '+', '5', ')', '*', '3'};

    int ans = evaluarExpresion(expression);

    cout << ans << endl;

    return 0;
}
