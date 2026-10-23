#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase;

    cout << "Ingrese una frase: ";
    getline(cin, frase);

    int inicio = 0;
    int fin = frase.length() - 1;
    bool esPalindromo = true;
    while (inicio < fin) {
        char izq = frase[inicio];
        char der = frase[fin];