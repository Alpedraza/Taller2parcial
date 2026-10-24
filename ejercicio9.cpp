#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int opcion;
    cout << "1. Comprimir\n";
    cout << "2. Descomprimir\n";
    cout << "Opcion: ";
    cin >> opcion;
    cin.ignore();

    if (opcion == 1) {
        string cadena;
        cout << "Cadena: ";
        getline(cin, cadena);

        string comprimida = "";
        if (!cadena.empty()) {
            char actual = cadena[0];
            int contador = 1;

            for (size_t i = 1; i < cadena.length(); i++) {
                if (cadena[i] == actual) {
                    contador++;
                } else {
                    comprimida += actual + to_string(contador);
                    actual = cadena[i];
                    contador = 1;
                }
            }
            comprimida += actual + to_string(contador);
        }

        cout << "Comprimida: " << comprimida << "\n";
    } 
    else if (opcion == 2) {
        string cadena;
        cout << "Cadena: ";
        getline(cin, cadena);
// Aquí se complico y tuve que revisar algunas funciones de la biblioteca ;(.
        string descompressed = "";
        bool formatoValido = true;
        size_t i = 0;
        size_t len = cadena.length();

        while (i < len) {
            if (isdigit(cadena[i])) {
                formatoValido = false;
                break;
            }
            char letra = cadena[i];
            i++;
            if (i >= len || !isdigit(cadena[i])) {
                formatoValido = false;
                break;
            }
            int num = 0;
            while (i < len && isdigit(cadena[i])) {
                num = num * 10 + (cadena[i] - '0');
                i++;
            }
            if (num <= 0) {
                formatoValido = false;
                break;
            }
            for (int j = 0; j < num; j++) {
                descompressed += letra;
            }
        }
        if (!formatoValido) {
            cout << "Formato invalido.\n";
        } else {
            cout << "Descomprimida: " << descompressed << "\n";
        }
    }

    return 0;
}
