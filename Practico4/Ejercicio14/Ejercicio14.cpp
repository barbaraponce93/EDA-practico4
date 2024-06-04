#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float numero;

    
    cout << "Introduce un número: ";
    cin >> numero;

    
    int parteEntera = static_cast<int>(numero);
    
    
    float parteFraccionaria = numero - parteEntera;

    
    parteFraccionaria = round(parteFraccionaria * 1000) / 1000;

    
    cout << "La parte fraccionaria de " << numero << " es " << parteFraccionaria << endl;

    return 0;
}

