#include <iostream>

using namespace std;

int main() {
    int n;
    char caracter;
    do {
        cout << "Ingrese la altura del rombo (entero impar positivo): ";
        cin >> n;
        
        if (n <= 0 || n % 2 == 0) {
            cout << "Valor invalido, intente de nuevo.\n";
        }
    } while (n <= 0 || n % 2 == 0);

    cout << "Ingrese el caracter: ";
    cin >> caracter;

    int centro = n / 2;
    for (int i = 0; i < n; i++) {
        int distancia = i - centro;
        if (distancia < 0) {
            distancia = -distancia;
        }
        int espacios = distancia;
        int simbolos = n - (2 * distancia);
        for (int j = 0; j < espacios; j++) {
            cout << " ";
        }
        for (int j = 0; j < simbolos; j++) {
            cout << caracter;
        }
        cout << "\n";
    }

    return 0;
}