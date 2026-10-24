#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese N (>= 1): ";
    cin >> n;
    if (n < 1) {
        cout << "Valor invalido. N debe ser mayor o igual a 1.\n";
        return 0;
    }
// En este tuve que hacer algunos calculos a mano porque ni idea que era la secuencia de Collatz y no me cuadraba (me paso el corte pasado con la de fibonnacci)
    int mejornumero = 1;
    int maxpasos = -1;
    long long maxvaloralc = 1;
    for (int i = 1; i <= n; i++) {
        long long temp = i;
        int pasosActuales = 0;
        long long valorMaxActual = i;
        while (temp != 1) {
            if (temp > valorMaxActual) {
                valorMaxActual = temp;
            }

            if (temp % 2 == 0) {
                temp = temp / 2;
            } else {
                temp = 3 * temp + 1;
            }
            pasosActuales++;
        }
        if (pasosActuales > maxpasos) {
            maxpasos = pasosActuales;
            mejornumero = i;
            maxvaloralc = valorMaxActual;
        }
    }
    cout << "Numero con la secuencia mas larga: " << mejornumero << "\n";
    cout << "Pasos: " << maxpasos << "\n";
    cout << "Valor maximo alcanzado: " << maxvaloralc << "\n";

    return 0;
}