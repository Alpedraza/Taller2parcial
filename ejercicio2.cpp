#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Ingrese a y b (1 <= a <= b): ";
    cin >> a >> b;
    if (a < 1 || b < 1 || a > b) {
        cout << "Rango invalido." << endl;
        return 0; 
    }

    int perfectos = 0;
    int abundantes = 0;
    int deficientes = 0;