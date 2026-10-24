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

    int mejornumero = 1;
    int maxpasos = -1;
    long long maxvaloralc = 1;
    for (int i = 1; i <= n; i++) {
        long long temp = i;
        int pasosActuales = 0;
        long long valorMaxActual = i;
        