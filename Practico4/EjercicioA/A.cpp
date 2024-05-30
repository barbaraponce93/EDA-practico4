//A. Intercambio de valores: Crea una función que reciba dos punteros a enteros y los intercambie.

#include <iostream>

using namespace std;

void cambio(int* a, int* b){
	
	int temp = *a;
	*a = *b;
    *b = temp;	
}

int main(){
	
	int a = 5;
    int b = 10;
    
    cout << "Antes del cambio: a = " << a << ", b = " << b << endl;
    
    cambio(&a, &b);
    
    cout << "Despues del cambio: a = " << a << ", b = " << b << endl;
	
	return 0;
}
