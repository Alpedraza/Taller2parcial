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
    for (int num = a; num <= b; num++) {
        int sumaDivisores = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sumaDivisores += i;
            }
        }
        if (sumaDivisores == num) {
            cout << num << ": perfecto (suma de divisores = " << sumaDivisores << ")\n";
            perfectos++;
        } 
        else if (sumaDivisores > num) {
            cout << num << ": abundante (suma de divisores = " << sumaDivisores << ")\n";
            abundantes++;
        } 
        else {
            cout << num << ": deficiente (suma de divisores = " << sumaDivisores << ")\n";
            deficientes++;
        }
    }
    cout << "Perfectos: " << perfectos 
         << ", abundantes: " << abundantes 
         << ", deficientes: " << deficientes << endl;

    return 0;
}