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

    int original = n;
    string romano = "";