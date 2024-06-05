/*
B. Paso por referencia de un puntero: Crea una función que reciba un puntero a un entero y modifique el valor al que apunta.
*/

#include <iostream>

using namespace std;


void modificarValor(int* ptr) {
    *ptr = 42;
}

int main() {
	
    int numero = 10;
    
    cout << "Antes de modificar: " << numero << endl;

    modificarValor(&numero);

    cout << "Despues de modificar: " << numero << endl;

    return 0;
}

