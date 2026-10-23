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