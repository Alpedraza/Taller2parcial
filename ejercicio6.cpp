#include <iostream>
#include <string>

using namespace std;

int main() {
    string contrasena;

    cout << "Ingrese la contrasena: ";
    getline(cin, contrasena);
    bool tieneLargo = (contrasena.length() >= 8);
    bool tieneMayus = false;
    bool tieneMinus = false;
    bool tieneDigito = false;
    bool tieneSimbolo = false;
    for (char c : contrasena) {
        if (c >= 'A' && c <= 'Z') {
            tieneMayus = true;
        } 
        else if (c >= 'a' && c <= 'z') {
            tieneMinus = true;
        } 
        else if (c >= '0' && c <= '9') {
            tieneDigito = true;
        } 
        else if (c != ' ') {
            tieneSimbolo = true;
        }
    }
    if (tieneLargo && tieneMayus && tieneMinus && tieneDigito && tieneSimbolo) {
        cout << "Contrasena valida..\n";
    } else {
        // Indicar exactamente qué requisitos incumple
        if (!tieneLargo) {
            cout << " Debe tener al menos 8 caracteres.\n";
        }
        if (!tieneMayus) {
            cout << " Falta al menos una letra mayuscula.\n";
        }
        if (!tieneMinus) {
            cout << " Falta al menos una letra minuscula.\n";
        }
        if (!tieneDigito) {
            cout << " Falta al menos un digito.\n";
        }
        if (!tieneSimbolo) {
            cout << " Falta al menos un simbolo.\n";
        }
        cout << "Contrasena invalida.\n";
    }

    return 0;
}