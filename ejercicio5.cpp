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
        if (!((izq >= 'a' && izq <= 'z') || (izq >= 'A' && izq <= 'Z') || (izq >= '0' && izq <= '9'))) {
            inicio++;
            continue;
        }
        if (!((der >= 'a' && der <= 'z') || (der >= 'A' && der <= 'Z') || (der >= '0' && der <= '9'))) {
            fin--;
            continue;
        }
        if (izq >= 'A' && izq <= 'Z') {
            izq = izq + 32;
        }
        if (der >= 'A' && der <= 'Z') {
            der = der + 32;
        }
        if (izq != der) {
            esPalindromo = false;
            break;
        }

        inicio++;
        fin--;
    }

        if (esPalindromo) {
        cout << "Es palindromo.\n";
    } else {
        cout << "No es palindromo.\n";
    }

    return 0;
}