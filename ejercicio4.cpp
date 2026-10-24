#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;

    cout << "Ingrese un entero entre 1 y 3999: ";
    cin >> n;
    if (n < 1 || n > 3999) {
        cout << "Numero fuera de rango. Debe ser entre 1 y 3999.\n";
        return 0;
    }
// No tenía idea como se escribian los numeros grandes; solo se expresan sumando y restando las letras 
    int original = n;
    string romano = "";
    int miles = n / 1000;
    n = n % 1000;
    if (miles == 3) romano += "MMM";
    else if (miles == 2) romano += "MM";
    else if (miles == 1) romano += "M";
    int centenas = n / 100;
    n = n % 100;
    if (centenas == 9) romano += "CM";
    else if (centenas >= 5) {
        romano += "D";
        for (int i = 0; i < centenas - 5; i++) {
            romano += "C";
        }
    }
    else if (centenas == 4) romano += "CD";
    else {
        for (int i = 0; i < centenas; i++) {
            romano += "C";
        }
    }
    int decenas = n / 10;
    n = n % 10;
    if (decenas == 9) romano += "XC";
    else if (decenas >= 5) {
        romano += "L";
        for (int i = 0; i < decenas - 5; i++) {
            romano += "X";
        }
    }
    else if (decenas == 4) romano += "XL";
    else {
        for (int i = 0; i < decenas; i++) {
            romano += "X";
        }
    }
    int unidades = n;
    if (unidades == 9) romano += "IX";
    else if (unidades >= 5) {
        romano += "V";
        for (int i = 0; i < unidades - 5; i++) {
            romano += "I";
        }
    }
    else if (unidades == 4) romano += "IV";
    else {
        for (int i = 0; i < unidades; i++) {
            romano += "I";
        }
    }
    cout << original << " = " << romano << "\n";

    return 0;
}