//Euclides 28/12/2025, (revisar l12 antes de entregar en nochevieja)
#include <iostream>
using namespace std;

int pasos = 0; // Variable global para contar

// Funcion recursiva
int mcd_recursivo(int a, int b) {
    pasos++; // Contamos el paso
    if (b == 0) {
        return a;
    } else {
        return mcd_recursivo(b, a % b);
    }
}

int main() {
    int n1, n2;
    
    // Pedir datos (suponemos que los mete bien para hacerlo simple)
    cout << "Introduce el primer numero: ";
    cin >> n1;
    cout << "Introduce el segundo numero: ";
    cin >> n2;

    pasos = 0;
    int resultado = mcd_recursivo(n1, n2);

    cout << "El MCD es: " << resultado << endl;
    cout << "Pasos necesarios: " << pasos << endl;

    return 0;
}