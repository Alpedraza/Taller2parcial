#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase;
    int vocales = 0;
    int consonantes = 0;
    int digitos = 0;
    int espacios = 0;
    int otros = 0;

    cout << "Ingrese una frase cualquiera: ";
    getline(cin, frase);
    for (char c : frase) {
        char lower = c;
        if (lower >= 'A' && lower <= 'Z') {
            lower = lower + 32;
        }
// En esta parte las unifiqué para no tener que hacer dos veces lo mismo.
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            vocales++;
        } 
        else if (lower >= 'a' && lower <= 'z') {
            consonantes++;
        } 
        else if (lower >= '0' && lower <= '9') {
            digitos++;
        } 
        else if (lower == ' ') {
            espacios++;
        } 
        else {
            otros++;
        }
    }
    cout << "Vocales: " << vocales << "\n";
    cout << "Consonantes: " << consonantes << "\n";
    cout << "Digitos: " << digitos << "\n";
    cout << "Espacios: " << espacios << "\n";
    cout << "Otros simbolos: " << otros << "\n";

    return 0;
}