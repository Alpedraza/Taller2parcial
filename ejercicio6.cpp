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