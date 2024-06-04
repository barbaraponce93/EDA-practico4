#include <iostream>
using namespace std;

int main() {
    int numero;
    
  
    cout << "Introduce un número para calcular su factorial: ";
    cin >> numero;

    
    unsigned long long resultado = 1;
    for (int i = 1; i <= numero; ++i) {
        resultado *= i;
    }

  
    cout << "El factorial de " << numero << " es " << resultado << endl;

    return 0;
}

