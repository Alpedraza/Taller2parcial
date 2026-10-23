#include <iostream>
#include <string>

using namespace std;

int main() {
    char opcion;
    int k;
    string mensaje;

    cout << "Cifrar (C) o descifrar (D): ";
    cin >> opcion;

    cout << "Desplazamiento: ";
    cin >> k;
    cin.ignore();

    cout << "Mensaje: ";
    getline(cin, mensaje);
    if (opcion == 'D' || opcion == 'd') {
        k = -k;
    }
    string resultado = "";
    for (char c : mensaje) {
        if (c >= 'A' && c <= 'Z') {
            // Manejo de letras mayúsculas
            int pos = c - 'A';
            int nuevaPos = ((pos + k) % 26 + 26) % 26;
            resultado += (char)('A' + nuevaPos);
        } 
        else if (c >= 'a' && c <= 'z') {
            // Manejo de letras minúsculas
            int pos = c - 'a';
            int nuevaPos = ((pos + k) % 26 + 26) % 26;
            resultado += (char)('a' + nuevaPos);
        } 
        else {
            resultado += c;
        }
    }
    cout << "Resultado: " << resultado << "\n";

    return 0;
}