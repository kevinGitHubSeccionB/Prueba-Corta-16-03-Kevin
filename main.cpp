#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> numeros;
    int n;

    cout << "Ingrese la cantidad de numeros de la lista: ";
    cin >> n;

    cout << "Ingrese los " << n << " numeros separados por espacios:\n";
    for (int i = 0; i < n; ++i) {
        int numero;
        cin >> numero;
        numeros.push_back(numero);
    }

    sort(numeros.begin(), numeros.end());

    cout << "Lista de numeros ordenados de menor a mayor:\n";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout <<endl;

    return 0;
}