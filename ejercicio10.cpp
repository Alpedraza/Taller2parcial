#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    cout << "Numero de filas (1 a 15): ";
    cin >> n;
    if (n < 1 || n > 15) {
        cout << "Numero fuera de rango. Debe ser entre 1 y 15.\n";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - 1 - i; s++) {
            cout << " ";
        }

        long long val = 1;
        for (int k = 0; k <= i; k++) {
            cout << setw(3) << val;
            val = val * (i - k) / (k + 1);
        }
        cout << "\n";
    }

    return 0;
}